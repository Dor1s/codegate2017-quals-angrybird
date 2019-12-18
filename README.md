# Angrybird challenge from Codegate 2017 CTF Prequals

# Answer

20 bytes long string: `Im_so_cute&pretty_:)`

The original challenge was given in a form of an ELF executable. The solutions
listed below are based on the C-code produced by Hex-Rays Decompiler.

# Solve with KLEE (takes a few seconds)

* Go to http://klee.github.io/docker/
* Execute the following inside the docker image:

```bash
$ clang -DNDEBUG -O3 -I/home/klee/klee_src/include -emit-llvm -c -g a.c -o a.bc
$ klee a.bc
<...>

$ ktest-tool klee-last/test000098.ktest
ktest file : 'klee-last/test000098.ktest'
args       : ['a.bc']
num objects: 1
object    0: name: b'data'
object    0: size: 20
object    0: data: b'Im_so_cute&pretty_:)'
```

# Solve with libFuzzer (takes unknown amount of time at the moment of writing)

```bash
$ clang -O2 -fsanitize=fuzzer fuzz_target.c -o fuzz_target
$ mkdir inputs
$ ./fuzz_target -use_value_profile=1 -max_len=20 ./inputs/
```

**UPD:** [libFuzzer] running on [ClusterFuzz] solved this challenge [in two days].
The fuzzer was running on approximately 50-100 CPU cores.

[libFuzzer]: https://llvm.org/docs/LibFuzzer.html
[ClusterFuzz]: https://github.com/google/clusterfuzz
[in two days]: https://github.com/google/sanitizers/issues/964#issuecomment-395425873

# Other solutions

See CTFtime.org [write-ups page](https://ctftime.org/task/3375).
