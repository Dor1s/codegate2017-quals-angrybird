// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
// Go to http://klee.github.io/docker/, then execute in the  docker image:
// 
// $ clang -DNDEBUG -O3 -I/home/klee/klee_src/include -emit-llvm -c -g a.c -o a.bc
// $ klee a.bc
// <...>
// 
// $ ktest-tool klee-last/test000098.ktest
// ktest file : 'klee-last/test000098.ktest'
// args       : ['a.bc']
// num objects: 1
// object    0: name: b'data'
// object    0: size: 20
// object    0: data: b'Im_so_cute&pretty_:)'


#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#include <klee/klee.h>

int main()
{
  int n = 21; // ST0C_4@1
  char v1; // dl@109
  int64_t v2; // rdx@442
  int64_t result; // rax@1234
  int64_t v4; // rcx@1234
  uint8_t data[20] = { 0 };
//0  char data[0]; // [sp+30h] [bp-50h]@1
//1  char data[1]; // [sp+31h] [bp-4Fh]@1
//2  char data[2]; // [sp+32h] [bp-4Eh]@13
//3  char data[3]; // [sp+33h] [bp-4Dh]@37
//4  char data[4]; // [sp+34h] [bp-4Ch]@10
//5  uint8_t data[5]; // [sp+35h] [bp-4Bh]@31
//6  char data[6]; // [sp+36h] [bp-4Ah]@64
//7  uint8_t data[7]; // [sp+37h] [bp-49h]@10
//8  char data[8]; // [sp+38h] [bp-48h]@28
//9  char data[9]; // [sp+39h] [bp-47h]@67
//10  char data[10]; // [sp+3Ah] [bp-46h]@22
//11  char data[11]; // [sp+3Bh] [bp-45h]@16
//12  char data[12]; // [sp+3Ch] [bp-44h]@55
//13  uint8_t data[13]; // [sp+3Dh] [bp-43h]@19
//14  char data[14]; // [sp+3Eh] [bp-42h]@40
//15  char data[15]; // [sp+3Fh] [bp-41h]@43
//16  uint8_t data[16]; // [sp+40h] [bp-40h]@25
//17  char data[17]; // [sp+41h] [bp-3Fh]@16
//18  char data[18]; // [sp+42h] [bp-3Eh]@7
//19  char data[19]; // [sp+43h] [bp-3Dh]@31
  char v25; // [sp+50h] [bp-30h]@1

//  v26 = *MK_FP(__FS__, 40LL);
//  n = sub_4006F6();
  klee_make_symbolic(data, 20, "data");

  v25 = data[0] ^ data[1];
  if ( (char)(data[0] ^ data[1]) <= 15 )
  {
    printf("melong");
    exit(10);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) > 80 )
  {
    printf("melong");
    exit(11);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 48 )
  {
    printf("melong");
    exit(13);
  }
  v25 = data[7] & data[4] ^ data[0];
  if ( v25 > 44 )
  {
    printf("melong");
    exit(14);
  }
  v25 = data[0] & data[2];
  if ( (char)(data[0] & data[2]) <= 72 )
  {
    printf("melong");
    exit(15);
  }
  v25 = data[11] & data[17];
  if ( (char)(data[11] & data[17]) <= 72 )
  {
    printf("melong");
    exit(16);
  }
  v25 = data[0] ^ data[13];
  if ( (char)(data[0] ^ data[13]) <= 43 )
  {
    printf("melong");
    exit(17);
  }
  v25 = data[13] ^ data[10];
  if ( (char)(data[13] ^ data[10]) <= 66 )
  {
    printf("melong");
    exit(18);
  }
  v25 = data[11] ^ data[16];
  if ( (char)(data[11] ^ data[16]) > 16 )
  {
    printf("melong");
    exit(19);
  }
  v25 = data[10] ^ data[8];
  if ( (char)(data[10] ^ data[8]) > 83 )
  {
    printf("melong");
    exit(20);
  }
  v25 = data[19] ^ data[5];
  if ( (char)(data[19] ^ data[5]) <= 117 )
  {
    printf("melong");
    exit(21);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 16 )
  {
    printf("melong");
    exit(22);
  }
  v25 = data[17] & data[3];
  if ( (char)(data[17] & data[3]) <= 80 )
  {
    printf("melong");
    exit(23);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(25);
  }
  v25 = data[13] | data[15];
  if ( (char)(data[13] | data[15]) <= 116 )
  {
    printf("melong");
    exit(26);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) <= 0 )
  {
    printf("melong");
    exit(27);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(28);
  }
  v25 = data[1] ^ data[11];
  if ( (char)(data[1] ^ data[11]) <= 28 )
  {
    printf("melong");
    exit(29);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) > 18 )
  {
    printf("melong");
    exit(30);
  }
  v25 = data[13] & data[1];
  if ( (char)(data[13] & data[1]) <= 47 )
  {
    printf("melong");
    exit(31);
  }
  v25 = (data[10] ^ data[19]) & data[12];
  if ( v25 > 108 )
  {
    printf("melong");
    exit(32);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(33);
  }
  v25 = data[1] ^ data[9];
  if ( (char)(data[1] ^ data[9]) <= 7 )
  {
    printf("melong");
    exit(34);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) <= 25 )
  {
    printf("melong");
    exit(35);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(37);
  }
  v25 = data[4] & data[12];
  if ( (char)(data[4] & data[12]) <= 41 )
  {
    printf("melong");
    exit(38);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) <= 14 )
  {
    printf("melong");
    exit(39);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(40);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 48 )
  {
    printf("melong");
    exit(41);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(42);
  }
  v25 = data[0] ^ data[1];
  if ( (char)(data[0] ^ data[1]) > 45 )
  {
    printf("melong");
    exit(43);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) <= 0 )
  {
    printf("melong");
    exit(44);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(46);
  }
  v25 = data[0] ^ data[19];
  if ( (char)(data[0] ^ data[19]) <= 95 )
  {
    printf("melong");
    exit(47);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 12 )
  {
    printf("melong");
    exit(48);
  }
  v25 = data[16] | data[7];
  if ( (char)(data[16] | data[7]) <= 121 )
  {
    printf("melong");
    exit(50);
  }
//  v1 = BYTE4(off_606038);
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(52);
  }
  v25 = data[15] & data[3];
  if ( (char)(data[15] & data[3]) <= 61 )
  {
    printf("melong");
    exit(53);
  }
  v25 = data[19] ^ data[15];
  if ( (char)(data[19] ^ data[15]) > 94 )
  {
    printf("melong");
    exit(54);
  }
  v25 = data[0] ^ data[1];
  if ( (char)(data[0] ^ data[1]) > 125 )
  {
    printf("melong");
    exit(55);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) <= 0 )
  {
    printf("melong");
    exit(57);
  }
  v25 = (data[16] ^ data[5]) & data[1];
  if ( v25 > 66 )
  {
    printf("melong");
    exit(58);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(59);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) <= 0 )
  {
    printf("melong");
    exit(60);
  }
//  v25 = BYTE1(off_606028) ^ data[17];
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(62);
  }
  v25 = data[4] ^ data[19];
  if ( (char)(data[4] ^ data[19]) > 106 )
  {
    printf("melong");
    exit(63);
  }
  v25 = data[8] & data[7];
  if ( (char)(data[8] & data[7]) <= 33 )
  {
    printf("melong");
    exit(64);
  }
  v25 = data[6] | data[7];
  if ( (char)(data[6] | data[7]) <= 118 )
  {
    printf("melong");
    exit(66);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 58 )
  {
    printf("melong");
    exit(67);
  }
  v25 = data[2] ^ data[8];
  if ( (char)(data[2] ^ data[8]) <= 42 )
  {
    printf("melong");
    exit(68);
  }
  v25 = data[2] ^ data[13];
  if ( (char)(data[2] ^ data[13]) <= 46 )
  {
    printf("melong");
    exit(69);
  }
  v25 = data[3] & data[8];
  if ( (char)(data[3] & data[8]) <= 94 )
  {
    printf("melong");
    exit(70);
  }
  v25 = data[16] ^ data[18];
  if ( (char)(data[16] ^ data[18]) <= 66 )
  {
    printf("melong");
    exit(71);
  }
//  v25 = BYTE2(off_606020) ^ data[15];
  v25 = data[10] ^ data[9];
  if ( (char)(data[10] ^ data[9]) <= 23 )
  {
    printf("melong");
    exit(73);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) <= 17 )
  {
    printf("melong");
    exit(74);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) > 90 )
  {
    printf("melong");
    exit(75);
  }
  v25 = data[16] ^ data[1];
  if ( (char)(data[16] ^ data[1]) > 63 )
  {
    printf("melong");
    exit(76);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 102 )
  {
    printf("melong");
    exit(77);
  }
  v25 = data[18] & data[3];
  if ( (char)(data[18] & data[3]) <= 49 )
  {
    printf("melong");
    exit(78);
  }
  v25 = data[9] ^ data[1];
  if ( (char)(data[9] ^ data[1]) > 26 )
  {
    printf("melong");
    exit(79);
  }
  v25 = data[0] ^ data[1];
  if ( (char)(data[0] ^ data[1]) > 55 )
  {
    printf("melong");
    exit(81);
  }
  v25 = data[13] & data[1];
  if ( (char)(data[13] & data[1]) > 103 )
  {
    printf("melong");
    exit(82);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) <= 0 )
  {
    printf("melong");
    exit(84);
  }
  v25 = data[0] ^ data[1];
  if ( (char)(data[0] ^ data[1]) <= 34 )
  {
    printf("melong");
    exit(85);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) > 90 )
  {
    printf("melong");
    exit(86);
  }
  v25 = data[11] ^ data[14];
  if ( (char)(data[11] ^ data[14]) > 4 )
  {
    printf("melong");
    exit(87);
  }
  v25 = data[5] ^ data[11];
  if ( (char)(data[5] ^ data[11]) > 50 )
  {
    printf("melong");
    exit(88);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) <= 37 )
  {
    printf("melong");
    exit(89);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) > 48 )
  {
    printf("melong");
    exit(90);
  }
  v25 = data[2] << 6;
  if ( (char)(data[2] << 6) > 1 )
  {
    printf("melong");
    exit(91);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 85 )
  {
    printf("melong");
    exit(92);
  }
  v25 = data[9] ^ data[10];
  if ( (char)(data[9] ^ data[10]) <= 66 )
  {
    printf("melong");
    exit(93);
  }
  v25 = data[10] & data[8];
  if ( (char)(data[10] & data[8]) <= 30 )
  {
    printf("melong");
    exit(94);
  }
  v25 = data[19] ^ data[17];
  if ( (char)(data[19] ^ data[17]) > 118 )
  {
    printf("melong");
    exit(95);
  }
  v25 = data[0] & data[17] | data[8];
  if ( v25 <= 59 )
  {
    printf("melong");
    exit(96);
  }
  v25 = data[17] ^ data[18];
  if ( (char)(data[17] ^ data[18]) <= 94 )
  {
    printf("melong");
    exit(97);
  }
  v25 = data[18] & data[9];
  if ( (char)(data[18] & data[9]) <= 30 )
  {
    printf("melong");
    exit(98);
  }
  v25 = data[3] ^ data[6];
  if ( (char)(data[3] ^ data[6]) > 32 )
  {
    printf("melong");
    exit(99);
  }
  v25 = 16 * data[16];
  if ( (char)(16 * data[16]) > 1 )
  {
    printf("melong");
    exit(100);
  }
  v25 = data[7] ^ data[3] | data[17];
  if ( v25 <= 94 )
  {
    printf("melong");
    exit(101);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) > 120 )
  {
    printf("melong");
    exit(102);
  }
  v25 = data[10] & data[18];
  if ( (char)(data[10] & data[18]) > 81 )
  {
    printf("melong");
    exit(103);
  }
  v25 = data[6] | data[7];
  if ( (char)(data[6] | data[7]) > 119 )
  {
    printf("melong");
    exit(104);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) <= 16 )
  {
    printf("melong");
    exit(105);
  }
  v25 = 2 * data[12];
  if ( (char)(2 * data[12]) > 1 )
  {
    printf("melong");
    exit(106);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 66 )
  {
    printf("melong");
    exit(107);
  }
  v25 = data[6] & data[1];
  if ( (char)(data[6] & data[1]) <= 84 )
  {
    printf("melong");
    exit(108);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 118 )
  {
    printf("melong");
    exit(109);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) > 47 )
  {
    printf("melong");
    exit(110);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 60 )
  {
    printf("melong");
    exit(111);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) <= 13 )
  {
    printf("melong");
    exit(112);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) <= 38 )
  {
    printf("melong");
    exit(113);
  }
  v25 = data[13] ^ data[10];
  if ( (char)(data[13] ^ data[10]) > 67 )
  {
    printf("melong");
    exit(114);
  }
  v25 = 16 * data[2];
  if ( (char)(16 * data[2]) > 1 )
  {
    printf("melong");
    exit(115);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 94 )
  {
    printf("melong");
    exit(116);
  }
  v25 = data[0] & data[11];
  if ( (char)(data[0] & data[11]) > 67 )
  {
    printf("melong");
    exit(117);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 48 )
  {
    printf("melong");
    exit(118);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) > 102 )
  {
    printf("melong");
    exit(119);
  }
  v25 = data[0] ^ data[19];
  if ( (char)(data[0] ^ data[19]) > 96 )
  {
    printf("melong");
    exit(120);
  }
  v25 = data[14] ^ data[18] | data[3];
  if ( v25 != 127 )
  {
    printf("melong");
    exit(121);
  }
  v25 = 4 * data[14];
  if ( (char)(4 * data[14]) > 1 )
  {
    printf("melong");
    exit(122);
  }
//  v25 = BYTE3(off_606038) ^ data[11];
  v25 = data[6] | data[1];
  if ( (char)(data[6] | data[1]) <= 43 )
  {
    printf("melong");
    exit(124);
  }
  v25 = data[5] & data[1];
  if ( (char)(data[5] & data[1]) > 95 )
  {
    printf("melong");
    exit(125);
  }
  v25 = (data[14] ^ data[3]) & data[10];
  if ( v25 <= 2 )
  {
    printf("melong");
    exit(126);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 65 )
  {
    printf("melong");
    exit(127);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) <= 24 )
  {
    printf("melong");
    exit(128);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(129);
  }
  v25 = data[9] ^ data[10];
  if ( (char)(data[9] ^ data[10]) > 67 )
  {
    printf("melong");
    exit(130);
  }
  v25 = 2 * data[7];
  if ( (char)(2 * data[7]) > 1 )
  {
    printf("melong");
    exit(131);
  }
  v25 = data[9] & data[17];
  if ( (char)(data[9] & data[17]) > 101 )
  {
    printf("melong");
    exit(132);
  }
  v25 = data[16] & data[15] | data[18];
  if ( v25 <= 121 )
  {
    printf("melong");
    exit(133);
  }
  v25 = data[0] ^ data[16];
  if ( (char)(data[0] ^ data[16]) <= 40 )
  {
    printf("melong");
    exit(134);
  }
  v25 = data[18] & data[3];
  if ( (char)(data[18] & data[3]) > 50 )
  {
    printf("melong");
    exit(135);
  }
  v25 = data[3] << 6;
  if ( (char)(data[3] << 6) > 1 )
  {
    printf("melong");
    exit(136);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 12 )
  {
    printf("melong");
    exit(137);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(138);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 79 )
  {
    printf("melong");
    exit(139);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(140);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) > 44 )
  {
    printf("melong");
    exit(141);
  }
  v25 = data[9] & data[5] | data[0];
  if ( v25 <= 28 )
  {
    printf("melong");
    exit(142);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 93 )
  {
    printf("melong");
    exit(143);
  }
  v25 = data[12] | data[4];
  if ( (char)(data[12] | data[4]) <= 40 )
  {
    printf("melong");
    exit(144);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(145);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) <= 0 )
  {
    printf("melong");
    exit(146);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(147);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(148);
  }
  v25 = data[1] ^ data[9];
  if ( (char)(data[1] ^ data[9]) > 8 )
  {
    printf("melong");
    exit(149);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(150);
  }
  v25 = data[11] ^ data[14];
  if ( (char)(data[11] ^ data[14]) <= 3 )
  {
    printf("melong");
    exit(151);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) <= 102 )
  {
    printf("melong");
    exit(152);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) > 68 )
  {
    printf("melong");
    exit(153);
  }
  v25 = data[0] & data[2];
  if ( (char)(data[0] & data[2]) > 73 )
  {
    printf("melong");
    exit(154);
  }
  v25 = data[13] & data[1];
  if ( (char)(data[13] & data[1]) <= 68 )
  {
    printf("melong");
    exit(155);
  }
  v25 = 16 * data[7];
  if ( (char)(16 * data[7]) > 125 )
  {
    printf("melong");
    exit(156);
  }
  v25 = data[13] ^ data[5];
  if ( (char)(data[13] ^ data[5]) > 79 )
  {
    printf("melong");
    exit(157);
  }
  v25 = data[12] ^ data[14];
  if ( (char)(data[12] ^ data[14]) > 6 )
  {
    printf("melong");
    exit(158);
  }
  v25 = data[9] & data[4];
  if ( (char)(data[9] & data[4]) <= 16 )
  {
    printf("melong");
    exit(159);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(160);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(161);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 74 )
  {
    printf("melong");
    exit(162);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(163);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) <= 89 )
  {
    printf("melong");
    exit(164);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) > 46 )
  {
    printf("melong");
    exit(165);
  }
  v25 = 16 * data[7];
  if ( (char)(16 * data[7]) <= 29 )
  {
    printf("melong");
    exit(166);
  }
  v25 = data[19] | data[7];
  if ( (char)(data[19] | data[7]) <= 77 )
  {
    printf("melong");
    exit(167);
  }
  v25 = data[4] ^ data[6];
  if ( (char)(data[4] ^ data[6]) > 12 )
  {
    printf("melong");
    exit(168);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(169);
  }
//  v2 = BYTE1(off_606038);
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 27 )
  {
    printf("melong");
    exit(171);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(172);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) > 122 )
  {
    printf("melong");
    exit(173);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) <= 3 )
  {
    printf("melong");
    exit(174);
  }
  v25 = data[13] & data[1];
  if ( (char)(data[13] & data[1]) <= 56 )
  {
    printf("melong");
    exit(175);
  }
  v25 = 16 * data[7];
  if ( (char)(16 * data[7]) <= 3 )
  {
    printf("melong");
    exit(176);
  }
  v25 = data[2] ^ data[8];
  if ( (char)(data[2] ^ data[8]) > 43 )
  {
    printf("melong");
    exit(177);
  }
  v25 = data[13] ^ data[5];
  if ( (char)(data[13] ^ data[5]) <= 16 )
  {
    printf("melong");
    exit(178);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(179);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(180);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(181);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 88 )
  {
    printf("melong");
    exit(182);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 33 )
  {
    printf("melong");
    exit(183);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) > 46 )
  {
    printf("melong");
    exit(184);
  }
  v25 = ~data[5];
  if ( (char)~data[5] > 1 )
  {
    printf("melong");
    exit(185);
  }
  v25 = data[6] & data[7] | data[3];
  if ( v25 <= 9 )
  {
    printf("melong");
    exit(186);
  }
  v25 = data[13] ^ data[5];
  if ( (char)(data[13] ^ data[5]) > 96 )
  {
    printf("melong");
    exit(187);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(188);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(189);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 91 )
  {
    printf("melong");
    exit(190);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(191);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) <= 32 )
  {
    printf("melong");
    exit(192);
  }
  v25 = data[9] & data[11];
  if ( (char)(data[9] & data[11]) <= 32 )
  {
    printf("melong");
    exit(193);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(194);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(195);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(196);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) <= 90 )
  {
    printf("melong");
    exit(197);
  }
//  v25 = BYTE2(off_606038) ^ data[5];
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) > 32 )
  {
    printf("melong");
    exit(199);
  }
  v25 = 16 * data[7];
  if ( (char)(16 * data[7]) <= 61 )
  {
    printf("melong");
    exit(200);
  }
  v25 = data[13] ^ data[5];
  if ( (char)(data[13] ^ data[5]) <= 33 )
  {
    printf("melong");
    exit(201);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 16 )
  {
    printf("melong");
    exit(202);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 64 )
  {
    printf("melong");
    exit(203);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) <= 95 )
  {
    printf("melong");
    exit(204);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) > 48 )
  {
    printf("melong");
    exit(205);
  }
  v25 = data[13] & data[1];
  if ( (char)(data[13] & data[1]) > 113 )
  {
    printf("melong");
    exit(206);
  }
  v25 = data[7] ^ data[17];
  if ( (char)(data[7] ^ data[17]) <= 41 )
  {
    printf("melong");
    exit(207);
  }
  v25 = 16 * data[7];
  if ( (char)(16 * data[7]) <= 63 )
  {
    printf("melong");
    exit(208);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(209);
  }
  v25 = data[4] & data[12];
  if ( (char)(data[4] & data[12]) <= 94 )
  {
    printf("melong");
    exit(210);
  }
  v25 = data[2] ^ data[8];
  if ( (char)(data[2] ^ data[8]) > 43 )
  {
    printf("melong");
    exit(211);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) <= 57 )
  {
    printf("melong");
    exit(212);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(213);
  }
  v25 = data[4] & data[12];
  if ( (char)(data[4] & data[12]) > 103 )
  {
    printf("melong");
    exit(214);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) > 92 )
  {
    printf("melong");
    exit(215);
  }
  v25 = data[0] >> 5;
//  v25 = BYTE1(off_606038) ^ data[4];
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(217);
  }
  v25 = data[19] & data[4] | data[2];
  if ( v25 <= 16 )
  {
    printf("melong");
    exit(218);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) <= 20 )
  {
    printf("melong");
    exit(219);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) > 82 )
  {
    printf("melong");
    exit(220);
  }
  v25 = data[13] | data[15];
  if ( (char)(data[13] | data[15]) > 117 )
  {
    printf("melong");
    exit(221);
  }
  v25 = data[13] & data[1];
  if ( (char)(data[13] & data[1]) <= 50 )
  {
    printf("melong");
    exit(222);
  }
  v25 = data[19] ^ data[5];
  if ( (char)(data[19] ^ data[5]) > 118 )
  {
    printf("melong");
    exit(223);
  }
  v25 = data[13] ^ data[5];
  if ( (data[13] ^ data[5]) == 127 )
  {
    printf("melong");
    exit(224);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(225);
  }
  v25 = data[4] & data[12];
  if ( (char)(data[4] & data[12]) <= 67 )
  {
    printf("melong");
    exit(226);
  }
  v25 = data[5] & data[17];
  if ( (char)(data[5] & data[17]) <= 56 )
  {
    printf("melong");
    exit(227);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) > 95 )
  {
    printf("melong");
    exit(228);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(229);
  }
  v25 = data[7] ^ data[3] | data[17];
  if ( v25 > 95 )
  {
    printf("melong");
    exit(230);
  }
  v25 = data[4] & data[12];
  if ( (char)(data[4] & data[12]) <= 78 )
  {
    printf("melong");
    exit(231);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) <= 7 )
  {
    printf("melong");
    exit(232);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 123 )
  {
    printf("melong");
    exit(233);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(234);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) <= 101 )
  {
    printf("melong");
    exit(235);
  }
  v25 = data[13] & data[1];
  if ( (char)(data[13] & data[1]) <= 61 )
  {
    printf("melong");
    exit(236);
  }
  v25 = 16 * data[7];
  if ( (char)(16 * data[7]) <= 73 )
  {
    printf("melong");
    exit(237);
  }
  v25 = data[13] ^ data[5];
  if ( (char)(data[13] ^ data[5]) <= 34 )
  {
    printf("melong");
    exit(238);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(239);
  }
  v25 = data[4] & data[12];
  if ( (char)(data[4] & data[12]) <= 5 )
  {
    printf("melong");
    exit(240);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 85 )
  {
    printf("melong");
    exit(241);
  }
  v25 = data[4] & data[12];
  if ( (char)(data[4] & data[12]) > 113 )
  {
    printf("melong");
    exit(242);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) > 61 )
  {
    printf("melong");
    exit(243);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) > 90 )
  {
    printf("melong");
    exit(244);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 106 )
  {
    printf("melong");
    exit(245);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(246);
  }
  v25 = data[0] ^ data[1];
  if ( (char)(data[0] ^ data[1]) > 84 )
  {
    printf("melong");
    exit(247);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) > 81 )
  {
    printf("melong");
    exit(248);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(249);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 49 )
  {
    printf("melong");
    exit(250);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(251);
  }
  v25 = data[0] ^ data[1];
  if ( (char)(data[0] ^ data[1]) > 66 )
  {
    printf("melong");
    exit(252);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) > 81 )
  {
    printf("melong");
    exit(253);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 41 )
  {
    printf("melong");
    exit(255);
  }
  v25 = data[0] ^ data[1];
  if ( (char)(data[0] ^ data[1]) > 82 )
  {
    printf("melong");
    exit(256);
  }
  v25 = data[17] & data[3];
  if ( (char)(data[17] & data[3]) > 84 )
  {
    printf("melong");
    exit(257);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) <= 34 )
  {
    printf("melong");
    exit(258);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 66 )
  {
    printf("melong");
    exit(260);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) > 90 )
  {
    printf("melong");
    exit(261);
  }
  v25 = data[18] & data[4];
  if ( (char)(data[18] & data[4]) > 73 )
  {
    printf("melong");
    exit(263);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) <= 12 )
  {
    printf("melong");
    exit(264);
  }
  v25 = data[0] ^ data[1];
  if ( (char)(data[0] ^ data[1]) <= 9 )
  {
    printf("melong");
    exit(265);
  }
  v25 = data[2] ^ data[8];
  if ( (char)(data[2] ^ data[8]) <= 42 )
  {
    printf("melong");
    exit(266);
  }
  v25 = data[13] ^ data[0];
  if ( (char)(data[13] ^ data[0]) > 44 )
  {
    printf("melong");
    exit(267);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) <= 14 )
  {
    printf("melong");
    exit(268);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) <= 16 )
  {
    printf("melong");
    exit(269);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 74 )
  {
    printf("melong");
    exit(270);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) > 102 )
  {
    printf("melong");
    exit(271);
  }
  v25 = 4 * data[2];
  if ( (char)(4 * data[2]) <= 16 )
  {
    printf("melong");
    exit(272);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 87 )
  {
    printf("melong");
    exit(273);
  }
  v25 = data[1] ^ data[11];
  if ( (char)(data[1] ^ data[11]) > 29 )
  {
    printf("melong");
    exit(274);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 51 )
  {
    printf("melong");
    exit(276);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) > 74 )
  {
    printf("melong");
    exit(277);
  }
  v25 = 4 * data[2];
  if ( (char)(4 * data[2]) <= 103 )
  {
    printf("melong");
    exit(278);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 56 )
  {
    printf("melong");
    exit(279);
  }
  v25 = data[4] ^ data[6];
  if ( (char)(data[4] ^ data[6]) <= 11 )
  {
    printf("melong");
    exit(280);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) <= 16 )
  {
    printf("melong");
    exit(281);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) <= 22 )
  {
    printf("melong");
    exit(283);
  }
  v25 = data[16] & data[15] | data[18];
  if ( v25 > 122 )
  {
    printf("melong");
    exit(284);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) > 74 )
  {
    printf("melong");
    exit(285);
  }
  v25 = 4 * data[2];
  if ( (char)(4 * data[2]) <= 16 )
  {
    printf("melong");
    exit(286);
  }
  v25 = data[16] ^ data[18];
  if ( (char)(data[16] ^ data[18]) > 67 )
  {
    printf("melong");
    exit(287);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) > 102 )
  {
    printf("melong");
    exit(288);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) > 74 )
  {
    printf("melong");
    exit(290);
  }
  v25 = data[9] | data[13];
  if ( (char)(data[9] | data[13]) <= 27 )
  {
    printf("melong");
    exit(291);
  }
  v25 = 4 * data[2];
  if ( (char)(4 * data[2]) <= 58 )
  {
    printf("melong");
    exit(292);
  }
  v25 = 4 * data[2];
  if ( (char)(4 * data[2]) <= 77 )
  {
    printf("melong");
    exit(293);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 3 )
  {
    printf("melong");
    exit(294);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) <= 13 )
  {
    printf("melong");
    exit(295);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) > 47 )
  {
    printf("melong");
    exit(296);
  }
  v25 = data[7] & data[4];
  if ( (char)(data[7] & data[4]) <= 39 )
  {
    printf("melong");
    exit(297);
  }
  v25 = data[16] | data[7];
  if ( (data[16] | data[7]) == 127 )
  {
    printf("melong");
    exit(298);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 66 )
  {
    printf("melong");
    exit(299);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) <= 47 )
  {
    printf("melong");
    exit(300);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 63 )
  {
    printf("melong");
    exit(301);
  }
  v25 = data[13] & data[3];
  if ( (char)(data[13] & data[3]) > 122 )
  {
    printf("melong");
    exit(302);
  }
  v25 = 4 * data[2];
  if ( (char)(4 * data[2]) <= 65 )
  {
    printf("melong");
    exit(303);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) > 120 )
  {
    printf("melong");
    exit(304);
  }
  v25 = 4 * data[2];
  if ( (char)(4 * data[2]) <= 83 )
  {
    printf("melong");
    exit(305);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 99 )
  {
    printf("melong");
    exit(306);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(307);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 42 )
  {
    printf("melong");
    exit(308);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(309);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) > 110 )
  {
    printf("melong");
    exit(310);
  }
  v25 = 4 * data[2];
  if ( (char)(4 * data[2]) <= 92 )
  {
    printf("melong");
    exit(311);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 59 )
  {
    printf("melong");
    exit(312);
  }
  v25 = data[8] | data[0];
  if ( (char)(data[8] | data[0]) <= 1 )
  {
    printf("melong");
    exit(313);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(314);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(315);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 17 )
  {
    printf("melong");
    exit(316);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(317);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) <= 78 )
  {
    printf("melong");
    exit(318);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) > 47 )
  {
    printf("melong");
    exit(319);
  }
  v25 = data[13] & data[1];
  if ( (char)(data[13] & data[1]) <= 90 )
  {
    printf("melong");
    exit(320);
  }
  v25 = 16 * data[7];
  if ( (char)(16 * data[7]) <= 78 )
  {
    printf("melong");
    exit(321);
  }
  v25 = data[13] ^ data[5];
  if ( (char)(data[13] ^ data[5]) <= 30 )
  {
    printf("melong");
    exit(322);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(323);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(324);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(325);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) <= 17 )
  {
    printf("melong");
    exit(326);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) > 86 )
  {
    printf("melong");
    exit(327);
  }
  v25 = data[12] & data[4];
  if ( (char)(data[12] & data[4]) > 120 )
  {
    printf("melong");
    exit(328);
  }
  v25 = 16 * data[7];
  if ( (char)(16 * data[7]) <= 46 )
  {
    printf("melong");
    exit(329);
  }
  v25 = data[13] ^ data[5];
  if ( (char)(data[13] ^ data[5]) > 63 )
  {
    printf("melong");
    exit(330);
  }
  v25 = data[12] ^ data[14];
  if ( (char)(data[12] ^ data[14]) <= 5 )
  {
    printf("melong");
    exit(331);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 17 )
  {
    printf("melong");
    exit(332);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 113 )
  {
    printf("melong");
    exit(333);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(334);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) <= 73 )
  {
    printf("melong");
    exit(335);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) > 60 )
  {
    printf("melong");
    exit(336);
  }
  v25 = data[13] & data[1];
  if ( (char)(data[13] & data[1]) > 119 )
  {
    printf("melong");
    exit(337);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 21 )
  {
    printf("melong");
    exit(338);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 107 )
  {
    printf("melong");
    exit(339);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) > 44 )
  {
    printf("melong");
    exit(340);
  }
  v25 = data[13] & data[1];
  if ( (char)(data[13] & data[1]) <= 57 )
  {
    printf("melong");
    exit(341);
  }
  v25 = data[13] ^ data[5];
  if ( (char)(data[13] ^ data[5]) > 59 )
  {
    printf("melong");
    exit(342);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(343);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(344);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 58 )
  {
    printf("melong");
    exit(345);
  }
  v25 = ~data[9];
  if ( (char)~data[9] > 1 )
  {
    printf("melong");
    exit(346);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) <= 101 )
  {
    printf("melong");
    exit(347);
  }
  v25 = data[13] & data[1];
  if ( (char)(data[13] & data[1]) <= 99 )
  {
    printf("melong");
    exit(348);
  }
  v25 = 16 * data[7];
  if ( (char)(16 * data[7]) <= 78 )
  {
    printf("melong");
    exit(349);
  }
  v25 = data[13] ^ data[4];
  if ( (char)(data[13] ^ data[4]) > 16 )
  {
    printf("melong");
    exit(350);
  }
  v25 = ~data[16];
  if ( (char)~data[16] > 10 )
  {
    printf("melong");
    exit(351);
  }
  v25 = ~data[4];
  if ( (char)~data[4] > 1 )
  {
    printf("melong");
    exit(352);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 3 )
  {
    printf("melong");
    exit(353);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(354);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) > 118 )
  {
    printf("melong");
    exit(355);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) <= 1 )
  {
    printf("melong");
    exit(356);
  }
  v25 = 16 * data[7];
  if ( (char)(16 * data[7]) <= 0 )
  {
    printf("melong");
    exit(357);
  }
  v25 = data[13] ^ data[5];
  if ( (char)(data[13] ^ data[5]) > 101 )
  {
    printf("melong");
    exit(358);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 18 )
  {
    printf("melong");
    exit(359);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(360);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) <= 0 )
  {
    printf("melong");
    exit(361);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) > 67 )
  {
    printf("melong");
    exit(362);
  }
  v25 = data[13] & data[1];
  if ( (char)(data[13] & data[1]) > 103 )
  {
    printf("melong");
    exit(363);
  }
  v25 = 16 * data[4];
  if ( (char)(16 * data[4]) > 1 )
  {
    printf("melong");
    exit(364);
  }
  v25 = data[13] ^ data[5];
  if ( (char)(data[13] ^ data[5]) <= 38 )
  {
    printf("melong");
    exit(365);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(366);
  }
  v25 = data[4] & data[12];
  if ( (char)(data[4] & data[12]) <= 94 )
  {
    printf("melong");
    exit(367);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) > 63 )
  {
    printf("melong");
    exit(368);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(369);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) <= 47 )
  {
    printf("melong");
    exit(370);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) <= 0 )
  {
    printf("melong");
    exit(371);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(372);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) > 118 )
  {
    printf("melong");
    exit(373);
  }
  v25 = data[12] ^ data[15];
  if ( (char)(data[12] ^ data[15]) > 58 )
  {
    printf("melong");
    exit(374);
  }
  v25 = data[13] & data[1];
  if ( (char)(data[13] & data[1]) <= 91 )
  {
    printf("melong");
    exit(375);
  }
  v25 = 16 * data[7];
  if ( (char)(16 * data[7]) <= 72 )
  {
    printf("melong");
    exit(376);
  }
  v25 = data[13] ^ data[5];
  if ( (char)(data[13] ^ data[5]) > 63 )
  {
    printf("melong");
    exit(377);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(378);
  }
  v25 = data[4] & data[12];
  if ( (char)(data[4] & data[12]) <= 94 )
  {
    printf("melong");
    exit(379);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) <= 57 )
  {
    printf("melong");
    exit(380);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(381);
  }
  v25 = data[4] & data[12];
  if ( (char)(data[4] & data[12]) > 99 )
  {
    printf("melong");
    exit(382);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) > 63 )
  {
    printf("melong");
    exit(383);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 81 )
  {
    printf("melong");
    exit(384);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(385);
  }
  v25 = data[11] | data[9];
  if ( (char)(data[11] | data[9]) > 118 )
  {
    printf("melong");
    exit(386);
  }
  v25 = data[8] ^ data[15];
  if ( (char)(data[8] ^ data[15]) > 1 )
  {
    printf("melong");
    exit(387);
  }
  v25 = data[7] & data[1];
  if ( (char)(data[7] & data[1]) <= 72 )
  {
    printf("melong");
    exit(388);
  }
  v25 = 16 * data[17];
  if ( (char)(16 * data[17]) > 1 )
  {
    printf("melong");
    exit(389);
  }
  v25 = data[3] ^ data[5];
  if ( (char)(data[3] ^ data[5]) > 110 )
  {
    printf("melong");
    exit(390);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(391);
  }
  v25 = data[4] & data[12];
  if ( (char)(data[4] & data[12]) <= 68 )
  {
    printf("melong");
    exit(392);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) > 91 )
  {
    printf("melong");
    exit(393);
  }
  v25 = ~data[6];
  if ( (char)~data[6] > 1 )
  {
    printf("melong");
    exit(394);
  }
  v25 = data[4] & data[12];
  if ( (char)(data[4] & data[12]) > 99 )
  {
    printf("melong");
    exit(395);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) <= 40 )
  {
    printf("melong");
    exit(396);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) <= 31 )
  {
    printf("melong");
    exit(397);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(398);
  }
  v25 = data[0] >> 5;
  if ( (char)(data[0] >> 5) > 96 )
  {
    printf("melong");
    exit(399);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(400);
  }
  v25 = data[3] ^ data[1];
  if ( (char)(data[3] ^ data[1]) > 42 )
  {
    printf("melong");
    exit(401);
  }
  v25 = data[4] & data[1];
  if ( (char)(data[4] & data[1]) > 118 )
  {
    printf("melong");
    exit(402);
  }
  v25 = (char)data[16] >> 1;
  if ( (char)((char)data[16] >> 1) > 94 )
  {
    printf("melong");
    exit(403);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(404);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 1 )
  {
    printf("melong");
    exit(405);
  }
  v25 = data[0] ^ data[1];
  if ( (char)(data[0] ^ data[1]) > 64 )
  {
    printf("melong");
    exit(406);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) > 110 )
  {
    printf("melong");
    exit(407);
  }
  v25 = 4 * data[2];
  if ( (char)(4 * data[2]) <= 104 )
  {
    printf("melong");
    exit(408);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) > 112 )
  {
    printf("melong");
    exit(409);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) <= 62 )
  {
    printf("melong");
    exit(410);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 48 )
  {
    printf("melong");
    exit(412);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) > 58 )
  {
    printf("melong");
    exit(413);
  }
  v25 = 4 * data[2];
  if ( (char)(4 * data[2]) <= 104 )
  {
    printf("melong");
    exit(414);
  }
  v25 = data[8] | data[1];
  if ( (char)(data[8] | data[1]) <= 50 )
  {
    printf("melong");
    exit(415);
  }
  v25 = data[5] & data[1];
  if ( (char)(data[5] & data[1]) <= 38 )
  {
    printf("melong");
    exit(416);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 85 )
  {
    printf("melong");
    exit(418);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) <= 18 )
  {
    printf("melong");
    exit(419);
  }
  v25 = 4 * data[2];
  if ( (char)(4 * data[2]) <= 97 )
  {
    printf("melong");
    exit(420);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 94 )
  {
    printf("melong");
    exit(421);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) <= 26 )
  {
    printf("melong");
    exit(422);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) > 67 )
  {
    printf("melong");
    exit(423);
  }
  v25 = 4 * data[2];
  if ( (char)(4 * data[2]) <= 103 )
  {
    printf("melong");
    exit(424);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) > 50 )
  {
    printf("melong");
    exit(425);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) <= 22 )
  {
    printf("melong");
    exit(426);
  }
  v25 = 4 * data[2];
  if ( (char)(4 * data[2]) <= 103 )
  {
    printf("melong");
    exit(427);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 38 )
  {
    printf("melong");
    exit(428);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) <= 52 )
  {
    printf("melong");
    exit(429);
  }
  v25 = data[18] & data[1];
  if ( (char)(data[18] & data[1]) <= 17 )
  {
    printf("melong");
    exit(430);
  }
  v25 = 4 * data[9];
  if ( (char)(4 * data[9]) > 1 )
  {
    printf("melong");
    exit(431);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 92 )
  {
    printf("melong");
    exit(432);
  }
  v25 = data[0] & data[1];
  if ( (char)(data[0] & data[1]) <= 55 )
  {
    printf("melong");
    exit(433);
  }
  v25 = data[8] ^ data[6];
  if ( (char)(data[8] ^ data[6]) > 81 )
  {
    printf("melong");
    exit(434);
  }
  v25 = 4 * data[12];
  if ( (char)(4 * data[12]) > 1 )
  {
    printf("melong");
    exit(435);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 94 )
  {
    printf("melong");
    exit(436);
  }
  v25 = ~data[12];
  if ( (char)~data[12] > 1 )
  {
    printf("melong");
    exit(437);
  }
  v25 = ~data[1];
  if ( (char)~data[1] > 1 )
  {
    printf("melong");
    exit(438);
  }
  v25 = data[0] ^ data[6];
  if ( (char)(data[0] ^ data[6]) > 101 )
  {
    printf("melong");
    exit(439);
  }
  v25 = 4 * data[4];
  if ( (char)(4 * data[4]) > 1 )
  {
    printf("melong");
    exit(440);
  }
  v25 = data[0] | data[1];
  if ( (char)(data[0] | data[1]) <= 44 )
  {
    printf("melong");
    exit(441);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(442);
  }
  v25 = ~data[14];
  if ( (char)~data[14] > 1 )
  {
    printf("melong");
    exit(443);
  }
  v25 = ~data[19];
  if ( (char)~data[19] > 120 )
  {
    printf("melong");
    exit(444);
  }
  printf("you typed : %s\n", data);

  // An attempt to get division by zero to trigger a crash.
  result = sizeof(data) / (20 - sizeof(data));

  // Additional checks added after getting 'Im_so_cute&prettyY:)' and 
  // 'Im_so_cute&pretty[:)'.
  if (data[17] != (uint8_t)'Y' && data[17] != (uint8_t)'[') {
    printf("win\n");
    exit(666);
  }

  exit(777);
  return result;
}
