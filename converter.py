#!/usr/bin/python2
import re


# e.g. v25 = ~data[6];
r1 = re.compile(r'.*data\[([\d]+)\].*')
# e.g. v25 = data[5] & data[17];
r2 = re.compile(r'.*data\[([\d]+)\].*data\[([\d]+)\].*')
# e.g. v25 = data[7] ^ data[3] | data[17];
r3 = re.compile(r'.*data\[([\d]+)\].*data\[([\d]+)\].*.*data\[([\d]+)\]')


def getNumberOfArgs(s):
  return s.count('data')

def getArgIndices(n, s):
  res = None
  if n == 1:
    res = r1.match(s).groups()
  elif n == 2:
    res = r2.match(s).groups()
  elif n == 3:
    res = r3.match(s).groups()
  else:
    assert false, "Unsupported number of indices"
  return list(res)


# e.g. "uint8_t v = a1 & a2 ^ a3;""
re_and_xor = re.compile(r'.*(a[\d]+\s[&^]\sa[\d]+).*')

def generateFunctionStart(ids, s, fn):
  start = '__attribute__((noinline))\n'
  start += 'int func%d(' % fn
  args = ', '.join(['uint8_t a%s' % i for i in xrange(1, len(ids)+1, 1)])
  start += args
  start += ') {\n'
  value = s.replace('v25 = ', 'char v = ')
  for i, j in enumerate(ids):
    value = value.replace('data[%s]' % j, 'a%s' % (i + 1))
    m = re_and_xor.match(value)
    if m:
      # This is needed to avoid clang warnings during compilation.
      and_expr = m.group(1)
      value = value.replace(and_expr, '(' + and_expr + ')')
  return start + value

# e.g. "if ( (char)(data[11] | data[9]) <= 101 )"
rc = re.compile(r'.*if .*( [<>=!][=]? [\d]+\s+\))$')

def generateFunctionEnd(s):
  cond = '  if ( v'
  cond += rc.match(s).groups()[0]
  cond += '\n    return 0;'
  cond += '\n  return 1;'
  cond += '\n}'
  return cond

def generateFunctionCall(ids, fn):
  args = ', '.join('data[%s]' % i for i in ids)
  call  = '  if (func%d(%s) == 0)\n' % (fn, args)
  call += '    return 0;'
  return call

def processBlock(block_lines, block_number):
  assert len(block_lines) == 6, "WTF, invalid block:\n" + str(block_lines)
  n = getNumberOfArgs(block_lines[0])
  ids = getArgIndices(n, block_lines[0])
  fstart = generateFunctionStart(ids, block_lines[0], block_number)
  fend = generateFunctionEnd(block_lines[1])
  call = generateFunctionCall(ids, block_number)
  return fstart + '\n' + fend, call

test_block = '''  v25 = data[4] & data[12];
  if ( (char)(data[4] & data[12]) <= 78 )
  {
    printf("melong");
    exit(231);
  }'''.splitlines()

code = processBlock(test_block, 777)
#for c in code: print c

body = open('body.txt').read().splitlines()
funcs = ''
calls = ''
lines_in_block = 6

for i in xrange(0, len(body) - lines_in_block, lines_in_block):
  f, c = processBlock(body[i : i + lines_in_block], (i / lines_in_block) + 1)
  funcs += f + '\n\n'
  calls += c + '\n'

target = '''#include <assert.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>\n\n
'''

target += funcs
target += 'int api(const uint8_t *data, size_t size) {\n'
target += '  if (size != 20) return 0;\n\n'
target += calls
target += '\n  fprintf(stderr, "BINGO\\n");\n'
target += '  abort();\n'
target += '  return 1;\n'
target += '}\n'

target += '''\nint LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
  if (api(Data, Size)) {
    // Should've crashed before getting here.
    return 0;
  }
  return 0;
}\n
'''

open('fuzz_target.c', 'w').write(target)
