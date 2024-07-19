Dump of assembler code for function tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast:
621     TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
   0x42008e44 <+0>:     entry   a1, 48
   0x42008e49 <+5>:     s32i.n  a5, a1, 0
   0x42008e4b <+7>:     s32i.n  a3, a1, 12
   0x42008e4d <+9>:     s32i.n  a4, a1, 4

622       void* fused_nn_conv2d_fixed_point_multiply_clip_cast_constant_let = (&(global_const_workspace_4_var[48336]));

623       void* fused_constant_let = (&(global_const_workspace_4_var[46464]));

624       void* pad_temp_let = (&(global_workspace_5_var[0]));

625       for (int32_t i0_i1_fused = 0; i0_i1_fused < 97; ++i0_i1_fused) {
   0x42008e51 <+13>:    mov.n   a12, a8
   0x42008e87 <+67>:    addi.n  a12, a12, 1
   0x42008e89 <+69>:    addi    a14, a14, 97
   0x42008e8c <+72>:    addi    a8, a8, 96
   0x42008e8f <+75>:    bne     a12, a13, 0x42008e95 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+81>
   0x42008e92 <+78>:    j       0x42008f65 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+289>

626         for (int32_t i2 = 0; i2 < 97; ++i2) {
   0x42008e47 <+3>:     movi.n  a8, 0
   0x42008e4f <+11>:    mov.n   a14, a8
   0x42008e53 <+15>:    mov.n   a5, a8
   0x42008e59 <+21>:    movi    a7, 97
   0x42008e5c <+24>:    j       0x42008e95 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+81>
   0x42008e5f <+27>:    ufloat.s        f1, a11, 0
   0x42008e6f <+43>:    mov.n   a11, a3
   0x42008e74 <+48>:    mov.n   a10, a13
   0x42008e76 <+50>:    mov.n   a9, a4
   0x42008e78 <+52>:    j       0x42008e60 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+28>
   0x42008e7e <+58>:    mov.n   a10, a13
   0x42008e80 <+60>:    mov.n   a9, a4
   0x42008e82 <+62>:    mov.n   a11, a3
   0x42008e84 <+64>:    bne     a13, a7, 0x42008e60 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+28>
   0x42008e95 <+81>:    l32i.n  a3, a1, 0
   0x42008e97 <+83>:    addx2   a11, a8, a2
   0x42008e9a <+86>:    addx2   a9, a14, a3
   0x42008e9d <+89>:    mov.n   a10, a5
   0x42008e9f <+91>:    j       0x42008e60 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+28>

627           ((int16_t*)pad_temp_let)[((i0_i1_fused * 97) + i2)] = (((i0_i1_fused < 96) && (i2 < 96)) ? p0[((i0_i1_fused * 96) + i2)] : (int16_t)0);
   0x42008e55 <+17>:    movi.n  a15, 95
   0x42008e57 <+19>:    mov.n   a6, a8
   0x42008e60 <+28>:    addi.n  a13, a10, 1
   0x42008e62 <+30>:    addi.n  a4, a9, 2
   0x42008e64 <+32>:    addi.n  a3, a11, 2
   0x42008e66 <+34>:    blt     a15, a12, 0x42008e7b <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+55>
   0x42008e69 <+37>:    blt     a15, a10, 0x42008e7b <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+55>
   0x42008e6c <+40>:    l16ui   a10, a11, 0
   0x42008e71 <+45>:    s16i    a10, a9, 0
   0x42008e7b <+55>:    s16i    a6, a9, 0

628         }
629       }
630       for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2304; ++ax0_ax1_fused_ax2_fused) {
   0x42008f56 <+274>:   movi.n  a2, 9
   0x42008f58 <+276>:   addi.n  a4, a4, 1
   0x42008f5a <+278>:   slli    a2, a2, 8
   0x42008f5d <+281>:   bne     a4, a2, 0x42008f80 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+316>
   0x42008f60 <+284>:   j       0x42008fb4 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+368>
--Type <RET> for more, q to quit, c to continue without paging--
   0x42008f63 <+287>:   srai    a0, a0, 0
   0x42008f66 <+290>:   call12  0x42041d50 <_ZNSt11__timepunctIcE23_M_initialize_timepunctEPi+176>
   0x42008f69 <+293>:   l32r    a0, 0x41ff50b0 (0x0)
   0x42008f73 <+303>:   movi.n  a4, 0
   0x42008f75 <+305>:   add.n   a15, a3, a2

631         for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
   0x42008ea2 <+94>:    movi.n  a8, 0
   0x42008ea4 <+96>:    l32i.n  a6, a1, 8
   0x42008ea6 <+98>:    mov.n   a10, a3
   0x42008ea8 <+100>:   mov.n   a2, a8
   0x42008eaa <+102>:   j       0x42008ed3 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+143>
   0x42008ed3 <+143>:   mov.n   a9, a10
   0x42008ed5 <+145>:   mov.n   a7, a6
   0x42008f4c <+264>:   addi.n  a5, a5, 1
   0x42008f4e <+266>:   addi.n  a3, a3, 2
   0x42008f50 <+268>:   beqi    a5, 8, 0x42008f56 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+274>
   0x42008f53 <+271>:   j       0x42008ea2 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+94>
   0x42008faf <+363>:   movi.n  a5, 0
   0x42008fb1 <+365>:   j       0x42008ea2 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+94>

632           void* conv2d_nhwc_let = (&(global_workspace_5_var[37264]));

633           ((int32_t*)conv2d_nhwc_let)[0] = 0;

634           for (int32_t ry = 0; ry < 3; ++ry) {
   0x42008ec4 <+128>:   movi    a9, 194
   0x42008ec7 <+131>:   addi.n  a8, a8, 3
   0x42008ec9 <+133>:   movi.n  a12, 9
   0x42008ecb <+135>:   add.n   a6, a6, a9
   0x42008ecd <+137>:   addi    a10, a10, 48
   0x42008ed0 <+140>:   beq     a8, a12, 0x42008edc <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+152>

635             for (int32_t rx = 0; rx < 3; ++rx) {
   0x42008eb9 <+117>:   addi.n  a7, a7, 2
   0x42008ebe <+122>:   addi    a9, a9, 16
   0x42008ec1 <+125>:   bne     a11, a7, 0x42008ead <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+105>
   0x42008ed7 <+147>:   addi.n  a11, a6, 6
   0x42008ed9 <+149>:   j       0x42008ead <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+105>

636               ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 194) + (ry * 97)) + ((ax0_ax1_fused_ax2_fused % 48) * 2)) + rx)]) * ((int32_t)((int16_t*)fused_constant_let)[(((ry * 24) + (rx * 8)) + ax3)])));
   0x42008ead <+105>:   l16ui   a12, a7, 0
   0x42008eb0 <+108>:   l16ui   a13, a9, 0
   0x42008eb3 <+111>:   wsr.acclo       a2
   0x42008eb6 <+114>:   mula.aa.ll      a12, a13
   0x42008ebb <+119>:   rsr.acclo       a2
   0x42008f80 <+316>:   l32r    a2, 0x42000a44 <_stext+2596> (0xaaaaaaab)
   0x42008f83 <+319>:   l32i.n  a13, a1, 0
   0x42008f85 <+321>:   muluh   a2, a4, a2
   0x42008f88 <+324>:   l32i.n  a12, a1, 4
   0x42008f8a <+326>:   srli    a2, a2, 5
   0x42008f8d <+329>:   addx2   a5, a2, a2
   0x42008f90 <+332>:   slli    a6, a5, 5
   0x42008f93 <+335>:   slli    a5, a5, 4
   0x42008f96 <+338>:   sub     a5, a4, a5
   0x42008f99 <+341>:   add.n   a2, a6, a2
   0x42008f9b <+343>:   add.n   a2, a2, a5
   0x42008f9d <+345>:   addx4   a2, a2, a13
   0x42008fa0 <+348>:   movi    a3, 0x16b
   0x42008fa3 <+351>:   s32i.n  a2, a1, 8
   0x42008fa5 <+353>:   l32i.n  a2, a1, 12
--Type <RET> for more, q to quit, c to continue without paging--
   0x42008fa7 <+355>:   slli    a3, a3, 7
   0x42008faa <+358>:   add.n   a3, a12, a3
   0x42008fac <+360>:   addx8   a14, a4, a2

637             }
638           }
639           int32_t v_ = (((int32_t*)conv2d_nhwc_let)[0] + 128) >> 8;
   0x42008edc <+152>:   movi    a6, 128
   0x42008edf <+155>:   s32i.n  a2, a15, 0
   0x42008ee1 <+157>:   add.n   a2, a2, a6
   0x42008ee3 <+159>:   srai    a2, a2, 8

640           int32_t v__1 = (v_) < (127) ? (v_) : (127);
   0x42008ee6 <+162>:   movi    a6, 127
   0x42008ee9 <+165>:   min     a2, a2, a6

641           float v__2 = (float)(((int8_t)((v__1) > (-128) ? (v__1) : (-128))) + ((int8_t*)fused_nn_conv2d_fixed_point_multiply_clip_cast_constant_let)[ax3]);
   0x42008eec <+168>:   movi    a6, -128
   0x42008eef <+171>:   max     a2, a2, a6
   0x42008ef2 <+174>:   l32r    a6, 0x42000a40 <_stext+2592> (0xbcd0)
   0x42008ef5 <+177>:   l32i.n  a13, a1, 4
   0x42008ef7 <+179>:   add.n   a6, a5, a6
   0x42008ef9 <+181>:   add.n   a6, a13, a6
   0x42008efb <+183>:   l8ui    a6, a6, 0
   0x42008efe <+186>:   sext    a6, a6, 7
   0x42008f01 <+189>:   add.n   a2, a2, a6
   0x42008f03 <+191>:   float.s f0, a2, 0

642           float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
   0x42008f06 <+194>:   olt.s   b0, f0, f1
   0x42008f09 <+197>:   bf      b0, 0x42008f1c <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+216>
   0x42008f1c <+216>:   mov.s   f0, f1
   0x42008f6a <+294>:   l32r    a5, 0x42000a2c <_stext+2572> (0x40c00000)
   0x42008f77 <+307>:   wfr     f1, a5

643           float v__4 = roundf(((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
   0x42008f0c <+200>:   olt.s   b0, f2, f0
   0x42008f0f <+203>:   bf      b0, 0x42008f30 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+236>
   0x42008f30 <+236>:   mov.s   f0, f2
   0x42008f33 <+239>:   j       0x42008f3b <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+247>
   0x42008f36 <+242>:   ill
   0x42008f6d <+297>:   l32r    a8, 0x42000a28 <_stext+2568> (0x0)
   0x42008f7a <+310>:   wfr     f2, a8

644           float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
   0x42008f12 <+206>:   olt.s   b0, f0, f3
   0x42008f15 <+209>:   bf      b0, 0x42008f38 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+244>
   0x42008f18 <+212>:   j       0x42008f1f <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+219>
   0x42008f1b <+215>:   slli    a0, a0, 32
   0x42008f38 <+244>:   mov.s   f0, f3
   0x42008f70 <+300>:   l32r    a9, 0x42000a20 <_stext+2560> (0x42fe0000)
   0x42008f7d <+313>:   wfr     f3, a9

645           T_cast[((ax0_ax1_fused_ax2_fused * 8) + ax3)] = ((int8_t)((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f)));
   0x42008f1f <+219>:   l32r    a2, 0x42000a24 <_stext+2564> (0xc3000000)
   0x42008f22 <+222>:   wfr     f4, a2
   0x42008f25 <+225>:   olt.s   b0, f4, f0
   0x42008f28 <+228>:   bf      b0, 0x42008f44 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+256>
   0x42008f2b <+231>:   j       0x42008f3b <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+247>
   0x42008f2e <+234>:   ill
   0x42008f3b <+247>:   trunc.s a2, f0, 0
   0x42008f3e <+250>:   extui   a2, a2, 0, 8
--Type <RET> for more, q to quit, c to continue without paging--
   0x42008f41 <+253>:   j       0x42008f47 <tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_clip_round_clip_cast+259>
   0x42008f44 <+256>:   movi    a2, 128
   0x42008f47 <+259>:   add.n   a6, a14, a5
   0x42008f49 <+261>:   s8i     a2, a6, 0

646         }
647       }
648       return 0;

649     }
   0x42008fb4 <+368>:   movi.n  a2, 0
   0x42008fb6 <+370>:   retw.n

End of assembler dump.