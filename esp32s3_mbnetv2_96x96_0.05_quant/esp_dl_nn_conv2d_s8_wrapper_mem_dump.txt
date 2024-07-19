   0x4200f9b0 <+0>:     entry   a1, 0x110
=> 0x4200f9b3 <+3>:     movi.n  a8, 0
   0x4200f9b5 <+5>:     s32i    a3, a1, 228
   0x4200f9b8 <+8>:     movi.n  a10, 4
   0x4200f9ba <+10>:    movi.n  a3, 1
   0x4200f9bc <+12>:    s8i     a3, a1, 112
   0x4200f9bf <+15>:    s32i    a8, a1, 116
   0x4200f9c2 <+18>:    s32i    a8, a1, 120
   0x4200f9c5 <+21>:    s32i    a8, a1, 124
   0x4200f9c8 <+24>:    s32i    a8, a1, 128
   0x4200f9cb <+27>:    s32i    a8, a1, 132
   0x4200f9ce <+30>:    s32i    a8, a1, 136
   0x4200f9d1 <+33>:    s32i    a8, a1, 140
   0x4200f9d4 <+36>:    s32i    a8, a1, 144
   0x4200f9d7 <+39>:    s32i    a8, a1, 68
   0x4200f9da <+42>:    s32i.n  a8, a1, 16
   0x4200f9dc <+44>:    s32i.n  a8, a1, 20
   0x4200f9de <+46>:    s32i.n  a8, a1, 24
   0x4200f9e0 <+48>:    call8   0x4203106c <_Znwj>
   0x4200f9e3 <+51>:    mov.n   a3, a10
   0x4200f9e5 <+53>:    l8ui    a11, a1, 69
   0x4200f9e8 <+56>:    l8ui    a10, a1, 70
   0x4200f9eb <+59>:    l8ui    a9, a1, 71
   0x4200f9ee <+62>:    l8ui    a12, a1, 68
   0x4200f9f1 <+65>:    addi.n  a8, a3, 4
   0x4200f9f3 <+67>:    s8i     a11, a3, 1
   0x4200f9f6 <+70>:    s8i     a10, a3, 2
   0x4200f9f9 <+73>:    s8i     a12, a3, 0
   0x4200f9fc <+76>:    s8i     a9, a3, 3
   0x4200f9ff <+79>:    addi    a11, a1, 16
   0x4200fa02 <+82>:    addi    a10, a1, 108
   0x4200fa05 <+85>:    s32i.n  a3, a1, 16
   0x4200fa07 <+87>:    s32i.n  a8, a1, 24
   0x4200fa09 <+89>:    s32i.n  a8, a1, 20
   0x4200fa0b <+91>:    call8   0x42010a80 <_ZN2dl6TensorIaE9set_shapeESt6vectorIiSaIiEE>
   0x4200fa0e <+94>:    l32i.n  a3, a1, 16
   0x4200fa10 <+96>:    beqz.n  a3, 0x4200fa1c <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+108>
   0x4200fa12 <+98>:    l32i.n  a11, a1, 24
   0x4200fa14 <+100>:   mov.n   a10, a3
   0x4200fa16 <+102>:   sub     a11, a11, a3
   0x4200fa19 <+105>:   call8   0x4200e52c <_ZdlPvj>
   0x4200fa1c <+108>:   l32i    a3, a1, 128
   0x4200fa1f <+111>:   beqz.n  a3, 0x4200fa33 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+131>
   0x4200fa21 <+113>:   l32r    a13, 0x42001274 <_stext+4692> (0x3c08e544)
   0x4200fa24 <+116>:   l32r    a12, 0x42001278 <_stext+4696> (0x3c08e55c)
   0x4200fa27 <+119>:   l32r    a10, 0x4200127c <_stext+4700> (0x3c08e5c9)
   0x4200fa2a <+122>:   movi    a11, 122
   0x4200fa2d <+125>:   l32r    a8, 0x42000084 <_stext+100> (0x4038071c <__assert_func>)
   0x4200fa30 <+128>:   callx8  a8
   0x4200fa33 <+131>:   l32i.n  a9, a5, 8
   0x4200fa35 <+133>:   l32i.n  a8, a5, 12
   0x4200fa37 <+135>:   s32i    a2, a1, 128
   0x4200fa3a <+138>:   l32i.n  a5, a5, 4
   0x4200fa3c <+140>:   l32i    a2, a1, 0x11c
   0x4200fa3f <+143>:   movi.n  a10, 12
   0x4200fa41 <+145>:   s32i    a2, a1, 132
   0x4200fa44 <+148>:   s32i    a5, a1, 68
   0x4200fa47 <+151>:   s32i    a9, a1, 72
   0x4200fa4a <+154>:   s32i    a8, a1, 76
   0x4200fa4d <+157>:   s8i     a3, a1, 112
   0x4200fa50 <+160>:   s32i.n  a3, a1, 16
--Type <RET> for more, q to quit, c to continue without paging--
   0x4200fa52 <+162>:   s32i.n  a3, a1, 20
   0x4200fa54 <+164>:   s32i.n  a3, a1, 24
   0x4200fa56 <+166>:   call8   0x4203106c <_Znwj>
   0x4200fa59 <+169>:   l8ui    a2, a1, 68
   0x4200fa5c <+172>:   l8ui    a5, a1, 69
   0x4200fa5f <+175>:   mov.n   a8, a10
   0x4200fa61 <+177>:   s8i     a2, a8, 0
   0x4200fa64 <+180>:   s8i     a5, a8, 1
   0x4200fa67 <+183>:   l8ui    a2, a1, 70
   0x4200fa6a <+186>:   l8ui    a5, a1, 71
   0x4200fa6d <+189>:   l8ui    a11, a1, 78
   0x4200fa70 <+192>:   l8ui    a10, a1, 79
   0x4200fa73 <+195>:   l8ui    a15, a1, 74
   0x4200fa76 <+198>:   l8ui    a14, a1, 75
   0x4200fa79 <+201>:   l8ui    a13, a1, 76
   0x4200fa7c <+204>:   l8ui    a12, a1, 77
   0x4200fa7f <+207>:   s8i     a2, a8, 2
   0x4200fa82 <+210>:   s8i     a5, a8, 3
   0x4200fa85 <+213>:   l8ui    a2, a1, 72
   0x4200fa88 <+216>:   l8ui    a5, a1, 73
   0x4200fa8b <+219>:   addi.n  a9, a8, 12
   0x4200fa8d <+221>:   s8i     a2, a8, 4
   0x4200fa90 <+224>:   s8i     a11, a8, 10
   0x4200fa93 <+227>:   s8i     a10, a8, 11
   0x4200fa96 <+230>:   s8i     a5, a8, 5
   0x4200fa99 <+233>:   s8i     a15, a8, 6
   0x4200fa9c <+236>:   s8i     a14, a8, 7
   0x4200fa9f <+239>:   s8i     a13, a8, 8
   0x4200faa2 <+242>:   s8i     a12, a8, 9
   0x4200faa5 <+245>:   addi    a11, a1, 16
   0x4200faa8 <+248>:   addi    a10, a1, 108
   0x4200faab <+251>:   s32i.n  a8, a1, 16
   0x4200faad <+253>:   s32i.n  a9, a1, 24
   0x4200faaf <+255>:   s32i.n  a9, a1, 20
   0x4200fab1 <+257>:   call8   0x42010a80 <_ZN2dl6TensorIaE9set_shapeESt6vectorIiSaIiEE>
   0x4200fab4 <+260>:   l32i.n  a2, a1, 16
   0x4200fab6 <+262>:   s8i     a3, a10, 4
   0x4200fab9 <+265>:   beqz.n  a2, 0x4200fac5 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+277>
   0x4200fabb <+267>:   l32i.n  a11, a1, 24
   0x4200fabd <+269>:   mov.n   a10, a2
   0x4200fabf <+271>:   sub     a11, a11, a2
   0x4200fac2 <+274>:   call8   0x4200e52c <_ZdlPvj>
   0x4200fac5 <+277>:   l32i.n  a8, a6, 8
   0x4200fac7 <+279>:   l32i.n  a3, a6, 0
   0x4200fac9 <+281>:   l32i.n  a5, a6, 12
   0x4200facb <+283>:   l32i.n  a6, a6, 4
   0x4200facd <+285>:   movi.n  a2, 0
   0x4200facf <+287>:   movi.n  a10, 16
   0x4200fad1 <+289>:   s32i    a8, a1, 72
   0x4200fad4 <+292>:   s32i    a6, a1, 68
   0x4200fad7 <+295>:   s32i    a5, a1, 76
   0x4200fada <+298>:   s32i    a3, a1, 80
   0x4200fadd <+301>:   s32i    a2, a1, 172
   0x4200fae0 <+304>:   s32i    a2, a1, 176
   0x4200fae3 <+307>:   s32i    a2, a1, 180
   0x4200fae6 <+310>:   call8   0x4203106c <_Znwj>
   0x4200fae9 <+313>:   addi    a5, a10, 16
   0x4200faec <+316>:   addi    a11, a1, 68
   0x4200faef <+319>:   movi.n  a12, 16
   0x4200faf1 <+321>:   s32i    a5, a1, 180
   0x4200faf4 <+324>:   s32i    a10, a1, 172
   0x4200faf7 <+327>:   l32r    a8, 0x420003d0 <_stext+944> (0x400011f4)
--Type <RET> for more, q to quit, c to continue without paging--
   0x4200fafa <+330>:   callx8  a8
   0x4200fafd <+333>:   l32i    a8, a1, 0x114
   0x4200fb00 <+336>:   s32i    a5, a1, 176
   0x4200fb03 <+339>:   l32i.n  a3, a8, 4
   0x4200fb05 <+341>:   l32i.n  a6, a8, 0
   0x4200fb07 <+343>:   s32i    a3, a1, 196
   0x4200fb0a <+346>:   addi    a5, a1, 16
   0x4200fb0d <+349>:   movi.n  a10, 8
   0x4200fb0f <+351>:   movi    a3, 176
   0x4200fb12 <+354>:   add.n   a3, a5, a3
   0x4200fb14 <+356>:   s32i    a6, a1, 192
   0x4200fb17 <+359>:   s32i    a2, a1, 148
   0x4200fb1a <+362>:   s32i    a2, a1, 152
   0x4200fb1d <+365>:   s32i    a2, a1, 156
   0x4200fb20 <+368>:   call8   0x4203106c <_Znwj>
   0x4200fb23 <+371>:   l8ui    a13, a3, 0
   0x4200fb26 <+374>:   l8ui    a12, a3, 1
   0x4200fb29 <+377>:   l8ui    a11, a3, 2
   0x4200fb2c <+380>:   l8ui    a6, a3, 6
   0x4200fb2f <+383>:   mov.n   a2, a10
   0x4200fb31 <+385>:   l8ui    a9, a3, 4
   0x4200fb34 <+388>:   l8ui    a10, a3, 3
   0x4200fb37 <+391>:   l8ui    a8, a3, 5
   0x4200fb3a <+394>:   l8ui    a5, a3, 7
   0x4200fb3d <+397>:   s8i     a13, a2, 0
   0x4200fb40 <+400>:   s8i     a12, a2, 1
   0x4200fb43 <+403>:   s8i     a11, a2, 2
   0x4200fb46 <+406>:   s8i     a6, a2, 6
   0x4200fb49 <+409>:   l32i    a12, a1, 0x120
   0x4200fb4c <+412>:   addi    a6, a1, 16
   0x4200fb4f <+415>:   l32i    a11, a1, 228
   0x4200fb52 <+418>:   movi    a14, 132
   0x4200fb55 <+421>:   movi    a13, 156
   0x4200fb58 <+424>:   addi.n  a3, a2, 8
   0x4200fb5a <+426>:   s8i     a10, a2, 3
   0x4200fb5d <+429>:   s8i     a9, a2, 4
   0x4200fb60 <+432>:   s8i     a8, a2, 5
   0x4200fb63 <+435>:   s8i     a5, a2, 7
   0x4200fb66 <+438>:   add.n   a14, a6, a14
   0x4200fb68 <+440>:   add.n   a13, a6, a13
   0x4200fb6a <+442>:   mov.n   a10, a6
   0x4200fb6c <+444>:   s32i    a2, a1, 148
   0x4200fb6f <+447>:   s32i    a3, a1, 156
   0x4200fb72 <+450>:   s32i    a3, a1, 152
   0x4200fb75 <+453>:   call8   0x42010830 <_ZN2dl6FilterIaEC2EPKaiSt6vectorIiSaIiEES6_>
   0x4200fb78 <+456>:   l32i    a2, a1, 148
   0x4200fb7b <+459>:   beqz.n  a2, 0x4200fb88 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+472>
   0x4200fb7d <+461>:   l32i    a11, a1, 156
   0x4200fb80 <+464>:   mov.n   a10, a2
   0x4200fb82 <+466>:   sub     a11, a11, a2
   0x4200fb85 <+469>:   call8   0x4200e52c <_ZdlPvj>
   0x4200fb88 <+472>:   l32i    a2, a1, 172
   0x4200fb8b <+475>:   beqz.n  a2, 0x4200fb98 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+488>
   0x4200fb8d <+477>:   l32i    a11, a1, 180
   0x4200fb90 <+480>:   mov.n   a10, a2
   0x4200fb92 <+482>:   sub     a11, a11, a2
   0x4200fb95 <+485>:   call8   0x4200e52c <_ZdlPvj>
   0x4200fb98 <+488>:   movi.n  a2, 0
   0x4200fb9a <+490>:   movi.n  a3, 1
   0x4200fb9c <+492>:   movi.n  a10, 4
   0x4200fb9e <+494>:   s8i     a3, a1, 72
   0x4200fba1 <+497>:   s32i    a2, a1, 76
--Type <RET> for more, q to quit, c to continue without paging--
   0x4200fba4 <+500>:   s32i    a2, a1, 80
   0x4200fba7 <+503>:   s32i    a2, a1, 84
   0x4200fbaa <+506>:   s32i    a2, a1, 88
   0x4200fbad <+509>:   s32i    a2, a1, 92
   0x4200fbb0 <+512>:   s32i    a2, a1, 96
   0x4200fbb3 <+515>:   s32i    a2, a1, 100
   0x4200fbb6 <+518>:   s32i    a2, a1, 104
   0x4200fbb9 <+521>:   s32i    a2, a1, 172
   0x4200fbbc <+524>:   s32i    a2, a1, 148
   0x4200fbbf <+527>:   s32i    a2, a1, 152
   0x4200fbc2 <+530>:   s32i    a2, a1, 156
   0x4200fbc5 <+533>:   call8   0x4203106c <_Znwj>
   0x4200fbc8 <+536>:   addi    a8, a1, 16
   0x4200fbcb <+539>:   movi    a3, 156
   0x4200fbce <+542>:   add.n   a3, a8, a3
   0x4200fbd0 <+544>:   l8ui    a5, a3, 3
   0x4200fbd3 <+547>:   l8ui    a9, a3, 0
   0x4200fbd6 <+550>:   l8ui    a8, a3, 1
   0x4200fbd9 <+553>:   l8ui    a6, a3, 2
   0x4200fbdc <+556>:   s8i     a5, a10, 3
   0x4200fbdf <+559>:   movi    a11, 132
   0x4200fbe2 <+562>:   addi    a5, a1, 16
   0x4200fbe5 <+565>:   mov.n   a2, a10
   0x4200fbe7 <+567>:   addi.n  a3, a10, 4
   0x4200fbe9 <+569>:   s8i     a9, a10, 0
   0x4200fbec <+572>:   s8i     a8, a10, 1
   0x4200fbef <+575>:   s8i     a6, a10, 2
   0x4200fbf2 <+578>:   add.n   a11, a5, a11
   0x4200fbf4 <+580>:   addi    a10, a1, 68
   0x4200fbf7 <+583>:   s32i    a2, a1, 148
   0x4200fbfa <+586>:   s32i    a3, a1, 156
   0x4200fbfd <+589>:   s32i    a3, a1, 152
   0x4200fc00 <+592>:   call8   0x42010a80 <_ZN2dl6TensorIaE9set_shapeESt6vectorIiSaIiEE>
   0x4200fc03 <+595>:   l32i    a2, a1, 148
   0x4200fc06 <+598>:   beqz.n  a2, 0x4200fc13 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+611>
   0x4200fc08 <+600>:   l32i    a11, a1, 156
   0x4200fc0b <+603>:   mov.n   a10, a2
   0x4200fc0d <+605>:   sub     a11, a11, a2
   0x4200fc10 <+608>:   call8   0x4200e52c <_ZdlPvj>
   0x4200fc13 <+611>:   l32i    a2, a1, 88
   0x4200fc16 <+614>:   bnez    a2, 0x4200fa21 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+113>
   0x4200fc19 <+617>:   l32i.n  a5, a7, 8
   0x4200fc1b <+619>:   l32i.n  a3, a7, 12
   0x4200fc1d <+621>:   l32i    a8, a1, 0x12c
   0x4200fc20 <+624>:   l32i.n  a6, a7, 4
   0x4200fc22 <+626>:   s32i    a8, a1, 88
   0x4200fc25 <+629>:   s32i    a5, a1, 176
   0x4200fc28 <+632>:   l32i    a8, a1, 0x124
   0x4200fc2b <+635>:   s32i    a3, a1, 180
   0x4200fc2e <+638>:   addi    a5, a1, 16
   0x4200fc31 <+641>:   movi    a3, 156
   0x4200fc34 <+644>:   add.n   a3, a5, a3
   0x4200fc36 <+646>:   movi.n  a10, 12
   0x4200fc38 <+648>:   s8i     a2, a1, 72
   0x4200fc3b <+651>:   s32i    a8, a1, 92
   0x4200fc3e <+654>:   s32i    a6, a1, 172
   0x4200fc41 <+657>:   s32i    a2, a1, 148
   0x4200fc44 <+660>:   s32i    a2, a1, 152
   0x4200fc47 <+663>:   s32i    a2, a1, 156
   0x4200fc4a <+666>:   call8   0x4203106c <_Znwj>
   0x4200fc4d <+669>:   l8ui    a6, a3, 9
   0x4200fc50 <+672>:   l8ui    a8, a3, 8
--Type <RET> for more, q to quit, c to continue without paging--
   0x4200fc53 <+675>:   mov.n   a2, a10
   0x4200fc55 <+677>:   l8ui    a5, a3, 0
   0x4200fc58 <+680>:   l8ui    a11, a3, 5
   0x4200fc5b <+683>:   s8i     a6, a1, 224
   0x4200fc5e <+686>:   l8ui    a10, a3, 6
   0x4200fc61 <+689>:   l8ui    a15, a3, 1
   0x4200fc64 <+692>:   l8ui    a14, a3, 2
   0x4200fc67 <+695>:   l8ui    a13, a3, 3
   0x4200fc6a <+698>:   l8ui    a12, a3, 4
   0x4200fc6d <+701>:   l8ui    a9, a3, 7
   0x4200fc70 <+704>:   l8ui    a6, a3, 10
   0x4200fc73 <+707>:   s8i     a8, a2, 8
   0x4200fc76 <+710>:   l8ui    a3, a3, 11
   0x4200fc79 <+713>:   l8ui    a8, a1, 224
   0x4200fc7c <+716>:   s8i     a5, a2, 0
   0x4200fc7f <+719>:   s8i     a11, a2, 5
   0x4200fc82 <+722>:   addi    a5, a1, 16
   0x4200fc85 <+725>:   movi    a11, 132
   0x4200fc88 <+728>:   s8i     a3, a2, 11
   0x4200fc8b <+731>:   s8i     a10, a2, 6
   0x4200fc8e <+734>:   addi.n  a3, a2, 12
   0x4200fc90 <+736>:   s8i     a15, a2, 1
   0x4200fc93 <+739>:   s8i     a14, a2, 2
   0x4200fc96 <+742>:   s8i     a13, a2, 3
   0x4200fc99 <+745>:   s8i     a12, a2, 4
   0x4200fc9c <+748>:   s8i     a9, a2, 7
   0x4200fc9f <+751>:   s8i     a8, a2, 9
   0x4200fca2 <+754>:   s8i     a6, a2, 10
   0x4200fca5 <+757>:   add.n   a11, a5, a11
   0x4200fca7 <+759>:   addi    a10, a1, 68
   0x4200fcaa <+762>:   s32i    a2, a1, 148
   0x4200fcad <+765>:   s32i    a3, a1, 156
   0x4200fcb0 <+768>:   s32i    a3, a1, 152
   0x4200fcb3 <+771>:   call8   0x42010a80 <_ZN2dl6TensorIaE9set_shapeESt6vectorIiSaIiEE>
   0x4200fcb6 <+774>:   l32i    a2, a1, 148
   0x4200fcb9 <+777>:   beqz.n  a2, 0x4200fcc6 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+790>
   0x4200fcbb <+779>:   l32i    a11, a1, 156
   0x4200fcbe <+782>:   mov.n   a10, a2
   0x4200fcc0 <+784>:   sub     a11, a11, a2
   0x4200fcc3 <+787>:   call8   0x4200e52c <_ZdlPvj>
   0x4200fcc6 <+790>:   movi.n  a3, 0
   0x4200fcc8 <+792>:   movi.n  a10, 16
   0x4200fcca <+794>:   s32i    a3, a1, 204
   0x4200fccd <+797>:   s32i    a3, a1, 208
   0x4200fcd0 <+800>:   s32i    a3, a1, 212
   0x4200fcd3 <+803>:   call8   0x4203106c <_Znwj>
   0x4200fcd6 <+806>:   l32i    a11, a1, 0x110
   0x4200fcd9 <+809>:   addi    a5, a10, 16
   0x4200fcdc <+812>:   movi.n  a12, 16
   0x4200fcde <+814>:   mov.n   a2, a10
   0x4200fce0 <+816>:   s32i    a10, a1, 204
   0x4200fce3 <+819>:   s32i    a5, a1, 212
   0x4200fce6 <+822>:   l32r    a8, 0x420003d0 <_stext+944> (0x400011f4)
   0x4200fce9 <+825>:   callx8  a8
   0x4200fcec <+828>:   s32i    a5, a1, 208
   0x4200fcef <+831>:   bne     a4, a3, 0x4200fcf5 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+837>
   0x4200fcf2 <+834>:   j       0x4200fe90 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1248>
   0x4200fcf5 <+837>:   l32i.n  a2, a7, 12
   0x4200fcf7 <+839>:   s32i    a3, a1, 148
   0x4200fcfa <+842>:   s32i    a3, a1, 152
   0x4200fcfd <+845>:   s32i    a3, a1, 156
   0x4200fd00 <+848>:   addi    a6, a1, 16
--Type <RET> for more, q to quit, c to continue without paging--
   0x4200fd03 <+851>:   movi.n  a10, 4
   0x4200fd05 <+853>:   movi    a3, 176
   0x4200fd08 <+856>:   add.n   a3, a6, a3
   0x4200fd0a <+858>:   s32i    a2, a1, 192
   0x4200fd0d <+861>:   call8   0x4203106c <_Znwj>
   0x4200fd10 <+864>:   l8ui    a8, a3, 0
   0x4200fd13 <+867>:   l8ui    a7, a3, 1
   0x4200fd16 <+870>:   l8ui    a6, a3, 2
   0x4200fd19 <+873>:   l8ui    a5, a3, 3
   0x4200fd1c <+876>:   mov.n   a2, a10
   0x4200fd1e <+878>:   addi.n  a3, a10, 4
   0x4200fd20 <+880>:   s8i     a8, a10, 0
   0x4200fd23 <+883>:   s8i     a7, a10, 1
   0x4200fd26 <+886>:   addi    a8, a1, 16
   0x4200fd29 <+889>:   s8i     a6, a10, 2
   0x4200fd2c <+892>:   s8i     a5, a10, 3
   0x4200fd2f <+895>:   l32i    a12, a1, 0x124
   0x4200fd32 <+898>:   movi    a13, 132
   0x4200fd35 <+901>:   movi    a10, 156
   0x4200fd38 <+904>:   add.n   a13, a8, a13
   0x4200fd3a <+906>:   mov.n   a11, a4
   0x4200fd3c <+908>:   add.n   a10, a8, a10
   0x4200fd3e <+910>:   s32i    a2, a1, 148
   0x4200fd41 <+913>:   s32i    a3, a1, 156
   0x4200fd44 <+916>:   s32i    a3, a1, 152
   0x4200fd47 <+919>:   call8   0x420107d0 <_ZN2dl8ConstantIaEC2EPKaiSt6vectorIiSaIiEE>
   0x4200fd4a <+922>:   l32i    a2, a1, 148
   0x4200fd4d <+925>:   beqz.n  a2, 0x4200fd5b <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+939>
   0x4200fd4f <+927>:   l32i    a11, a1, 156
   0x4200fd52 <+930>:   or      a10, a2, a2
   0x4200fd55 <+933>:   sub     a11, a11, a2
   0x4200fd58 <+936>:   call8   0x4200e52c <_ZdlPvj>
   0x4200fd5b <+939>:   l32i    a3, a1, 0x128
   0x4200fd5e <+942>:   l8ui    a2, a3, 0
   0x4200fd61 <+945>:   bnez    a2, 0x4200fdad <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1021>
   0x4200fd64 <+948>:   l32i    a6, a1, 0x118
   0x4200fd67 <+951>:   addi    a5, a1, 16
   0x4200fd6a <+954>:   movi    a4, 132
   0x4200fd6d <+957>:   movi    a3, 156
   0x4200fd70 <+960>:   l32i.n  a15, a6, 4
   0x4200fd72 <+962>:   l32i.n  a14, a6, 0
   0x4200fd74 <+964>:   add.n   a4, a5, a4
   0x4200fd76 <+966>:   add.n   a3, a5, a3
   0x4200fd78 <+968>:   movi    a12, 188
   0x4200fd7b <+971>:   s32i.n  a2, a1, 4
   0x4200fd7d <+973>:   s32i.n  a4, a1, 8
   0x4200fd7f <+975>:   s32i.n  a3, a1, 0
   0x4200fd81 <+977>:   mov.n   a13, a5
   0x4200fd83 <+979>:   add.n   a12, a5, a12
   0x4200fd85 <+981>:   addi    a11, a1, 108
   0x4200fd88 <+984>:   addi    a10, a1, 68
   0x4200fd8b <+987>:   s32i    a2, a1, 148
   0x4200fd8e <+990>:   s32i    a2, a1, 152
   0x4200fd91 <+993>:   s32i    a2, a1, 156
   0x4200fd94 <+996>:   call8   0x42010ba4 <_ZN2dl2nn6conv2dERNS_6TensorIaEES3_RSt6vectorIiSaIiEERKNS_6FilterIaEEiiPKNS_4BiasIaEEPKNS_10ActivationIaEERKS6_>
   0x4200fd97 <+999>:   l32i    a2, a1, 148
   0x4200fd9a <+1002>:  beqz    a2, 0x4200fe7b <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1227>
   0x4200fd9d <+1005>:  l32i    a11, a1, 156
   0x4200fda0 <+1008>:  mov.n   a10, a2
   0x4200fda2 <+1010>:  sub     a11, a11, a2
   0x4200fda5 <+1013>:  call8   0x4200e52c <_ZdlPvj>
   0x4200fda8 <+1016>:  j       0x4200fe7b <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1227>
--Type <RET> for more, q to quit, c to continue without paging--
   0x4200fdab <+1019>:  sra     a0, a0
   0x4200fdae <+1022>:  ee.vldbc.16.xp  q5, a3, a5
   0x4200fdb1 <+1025>:  lsip    f0, a1, 0x3fc
   0x4200fdb4 <+1028>:  .byte 0xc4
   0x4200fdb5 <+1029>:  callx8  a8
   0x4200fdb8 <+1032>:  mov.n   a2, a10
   0x4200fdba <+1034>:  bnez    a10, 0x4200fe7b <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1227>
   0x4200fdbd <+1037>:  movi.n  a10, 4
   0x4200fdbf <+1039>:  s32i    a2, a1, 216
   0x4200fdc2 <+1042>:  s32i    a2, a1, 192
   0x4200fdc5 <+1045>:  s32i    a2, a1, 196
   0x4200fdc8 <+1048>:  s32i    a2, a1, 200
   0x4200fdcb <+1051>:  call8   0x4203106c <_Znwj>
   0x4200fdce <+1054>:  addi    a8, a1, 16
   0x4200fdd1 <+1057>:  movi    a4, 200
   0x4200fdd4 <+1060>:  add.n   a4, a8, a4
   0x4200fdd6 <+1062>:  l8ui    a5, a4, 3
   0x4200fdd9 <+1065>:  l8ui    a8, a4, 0
   0x4200fddc <+1068>:  l8ui    a7, a4, 1
   0x4200fddf <+1071>:  l8ui    a6, a4, 2
   0x4200fde2 <+1074>:  s8i     a5, a10, 3
   0x4200fde5 <+1077>:  addi.n  a4, a10, 4
   0x4200fde7 <+1079>:  mov.n   a3, a10
   0x4200fde9 <+1081>:  s8i     a8, a10, 0
   0x4200fdec <+1084>:  s8i     a7, a10, 1
   0x4200fdef <+1087>:  s8i     a6, a10, 2
   0x4200fdf2 <+1090>:  addi    a5, a1, 16
   0x4200fdf5 <+1093>:  movi    a14, 176
   0x4200fdf8 <+1096>:  movi    a10, 132
   0x4200fdfb <+1099>:  mov.n   a13, a2
   0x4200fdfd <+1101>:  mov.n   a12, a2
   0x4200fdff <+1103>:  add.n   a14, a5, a14
   0x4200fe01 <+1105>:  movi.n  a11, 1
   0x4200fe03 <+1107>:  add.n   a10, a5, a10
   0x4200fe05 <+1109>:  s32i    a3, a1, 192
   0x4200fe08 <+1112>:  s32i    a4, a1, 200
   0x4200fe0b <+1115>:  s32i    a4, a1, 196
   0x4200fe0e <+1118>:  call8   0x42010940 <_ZN2dl10ActivationIaEC2ENS_17activation_type_tEPKaiSt6vectorIiSaIiEE>
   0x4200fe11 <+1121>:  l32i    a2, a1, 192
   0x4200fe14 <+1124>:  beqz.n  a2, 0x4200fe21 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1137>
   0x4200fe16 <+1126>:  l32i    a11, a1, 200
   0x4200fe19 <+1129>:  mov.n   a10, a2
   0x4200fe1b <+1131>:  sub     a11, a11, a2
   0x4200fe1e <+1134>:  call8   0x4200e52c <_ZdlPvj>
   0x4200fe21 <+1137>:  l32i    a8, a1, 0x118
   0x4200fe24 <+1140>:  addi    a6, a1, 16
   0x4200fe27 <+1143>:  movi    a5, 176
   0x4200fe2a <+1146>:  movi    a4, 132
   0x4200fe2d <+1149>:  movi    a3, 156
   0x4200fe30 <+1152>:  l32i.n  a15, a8, 4
   0x4200fe32 <+1154>:  l32i.n  a14, a8, 0
   0x4200fe34 <+1156>:  add.n   a5, a6, a5
   0x4200fe36 <+1158>:  add.n   a4, a6, a4
   0x4200fe38 <+1160>:  add.n   a3, a6, a3
   0x4200fe3a <+1162>:  movi    a12, 188
   0x4200fe3d <+1165>:  movi.n  a2, 0
   0x4200fe3f <+1167>:  s32i.n  a5, a1, 8
   0x4200fe41 <+1169>:  s32i.n  a4, a1, 4
   0x4200fe43 <+1171>:  s32i.n  a3, a1, 0
   0x4200fe45 <+1173>:  mov.n   a13, a6
   0x4200fe47 <+1175>:  add.n   a12, a6, a12
   0x4200fe49 <+1177>:  addi    a11, a1, 108
--Type <RET> for more, q to quit, c to continue without paging--
   0x4200fe4c <+1180>:  addi    a10, a1, 68
   0x4200fe4f <+1183>:  s32i    a2, a1, 192
   0x4200fe52 <+1186>:  s32i    a2, a1, 196
   0x4200fe55 <+1189>:  s32i    a2, a1, 200
   0x4200fe58 <+1192>:  call8   0x42010ba4 <_ZN2dl2nn6conv2dERNS_6TensorIaEES3_RSt6vectorIiSaIiEERKNS_6FilterIaEEiiPKNS_4BiasIaEEPKNS_10ActivationIaEERKS6_>
   0x4200fe5b <+1195>:  l32i    a2, a1, 192
   0x4200fe5e <+1198>:  beqz.n  a2, 0x4200fe6b <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1211>
   0x4200fe60 <+1200>:  l32i    a11, a1, 200
   0x4200fe63 <+1203>:  mov.n   a10, a2
   0x4200fe65 <+1205>:  sub     a11, a11, a2
   0x4200fe68 <+1208>:  call8   0x4200e52c <_ZdlPvj>
   0x4200fe6b <+1211>:  l32i    a2, a1, 156
   0x4200fe6e <+1214>:  beqz.n  a2, 0x4200fe7b <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1227>
   0x4200fe70 <+1216>:  l32i    a11, a1, 164
   0x4200fe73 <+1219>:  mov.n   a10, a2
   0x4200fe75 <+1221>:  sub     a11, a11, a2
   0x4200fe78 <+1224>:  call8   0x4200e52c <_ZdlPvj>
   0x4200fe7b <+1227>:  l32i    a2, a1, 180
   0x4200fe7e <+1230>:  beqz    a2, 0x4200ffa6 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1526>
   0x4200fe81 <+1233>:  l32i    a11, a1, 188
   0x4200fe84 <+1236>:  mov.n   a10, a2
   0x4200fe86 <+1238>:  sub     a11, a11, a2
   0x4200fe89 <+1241>:  call8   0x4200e52c <_ZdlPvj>
   0x4200fe8c <+1244>:  j       0x4200ffa6 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1526>
   0x4200fe8f <+1247>:  srai    a5, a0, 2
   0x4200fe92 <+1250>:  add.n   a3, a2, a4
   0x4200fe94 <+1252>:  call0   0x42065e98 <_vfiprintf_r+5684>
   0x4200fe97 <+1255>:  lsi     f3, a4, 0x208
   0x4200fe9a <+1258>:  l32r    a2, 0x41fe87b4 (0x0)
   0x4200fe9d <+1261>:  l32r    a12, 0x41fd86e0 (0x0)
   0x4200fea0 <+1264>:  .byte 0xa0
   0x4200fea1 <+1265>:  .byte 0x84
   0x4200fea2 <+1266>:  l32i.n  a15, a8, 4
   0x4200fea4 <+1268>:  l32i.n  a14, a8, 0
   0x4200fea6 <+1270>:  add.n   a2, a6, a2
   0x4200fea8 <+1272>:  movi    a12, 188
   0x4200feab <+1275>:  s32i.n  a2, a1, 8
   0x4200fead <+1277>:  s32i.n  a4, a1, 4
   0x4200feaf <+1279>:  s32i.n  a4, a1, 0
   0x4200feb1 <+1281>:  mov.n   a13, a6
   0x4200feb3 <+1283>:  add.n   a12, a6, a12
   0x4200feb5 <+1285>:  addi    a11, a1, 108
   0x4200feb8 <+1288>:  addi    a10, a1, 68
   0x4200febb <+1291>:  s32i    a4, a1, 148
   0x4200febe <+1294>:  s32i    a4, a1, 152
   0x4200fec1 <+1297>:  s32i    a4, a1, 156
   0x4200fec4 <+1300>:  call8   0x42010ba4 <_ZN2dl2nn6conv2dERNS_6TensorIaEES3_RSt6vectorIiSaIiEERKNS_6FilterIaEEiiPKNS_4BiasIaEEPKNS_10ActivationIaEERKS6_>
   0x4200fec7 <+1303>:  l32i    a2, a1, 148
   0x4200feca <+1306>:  beqz    a2, 0x4200ffa6 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1526>
   0x4200fecd <+1309>:  l32i    a11, a1, 156
   0x4200fed0 <+1312>:  mov.n   a10, a2
   0x4200fed2 <+1314>:  sub     a11, a11, a2
   0x4200fed5 <+1317>:  call8   0x4200e52c <_ZdlPvj>
   0x4200fed8 <+1320>:  j       0x4200ffa6 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1526>
   0x4200fedb <+1323>:  sra     a0, a0
   0x4200fede <+1326>:  l32i.n  a14, a4, 48
   0x4200fee0 <+1328>:  mov.n   a10, a5
   0x4200fee2 <+1330>:  l32r    a8, 0x420011b0 <_stext+4496> (0x40001230)
   0x4200fee5 <+1333>:  callx8  a8
   0x4200fee8 <+1336>:  movi.n  a11, 16
   0x4200feea <+1338>:  bnez    a10, 0x4200ffb2 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1538>
   0x4200feed <+1341>:  addi    a5, a1, 16
--Type <RET> for more, q to quit, c to continue without paging--
   0x4200fef0 <+1344>:  movi.n  a10, 4
   0x4200fef2 <+1346>:  movi    a3, 176
   0x4200fef5 <+1349>:  add.n   a3, a5, a3
   0x4200fef7 <+1351>:  s32i    a4, a1, 192
   0x4200fefa <+1354>:  s32i    a4, a1, 172
   0x4200fefd <+1357>:  s32i    a4, a1, 176
   0x4200ff00 <+1360>:  s32i    a4, a1, 180
   0x4200ff03 <+1363>:  call8   0x4203106c <_Znwj>
   0x4200ff06 <+1366>:  l8ui    a8, a3, 0
   0x4200ff09 <+1369>:  l8ui    a6, a3, 2
   0x4200ff0c <+1372>:  l8ui    a7, a3, 1
   0x4200ff0f <+1375>:  l8ui    a5, a3, 3
   0x4200ff12 <+1378>:  mov.n   a2, a10
   0x4200ff14 <+1380>:  addi.n  a3, a10, 4
   0x4200ff16 <+1382>:  s8i     a6, a10, 2
   0x4200ff19 <+1385>:  s8i     a8, a10, 0
   0x4200ff1c <+1388>:  s8i     a7, a10, 1
   0x4200ff1f <+1391>:  s8i     a5, a10, 3
   0x4200ff22 <+1394>:  addi    a6, a1, 16
   0x4200ff25 <+1397>:  movi    a14, 156
   0x4200ff28 <+1400>:  movi    a10, 132
   0x4200ff2b <+1403>:  add.n   a14, a6, a14
   0x4200ff2d <+1405>:  mov.n   a13, a4
   0x4200ff2f <+1407>:  mov.n   a12, a4
   0x4200ff31 <+1409>:  movi.n  a11, 1
   0x4200ff33 <+1411>:  add.n   a10, a6, a10
   0x4200ff35 <+1413>:  s32i    a2, a1, 172
   0x4200ff38 <+1416>:  s32i    a3, a1, 180
   0x4200ff3b <+1419>:  s32i    a3, a1, 176
   0x4200ff3e <+1422>:  call8   0x42010940 <_ZN2dl10ActivationIaEC2ENS_17activation_type_tEPKaiSt6vectorIiSaIiEE>
   0x4200ff41 <+1425>:  l32i    a2, a1, 172
   0x4200ff44 <+1428>:  beqz.n  a2, 0x4200ff51 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1441>
   0x4200ff46 <+1430>:  l32i    a11, a1, 180
   0x4200ff49 <+1433>:  mov.n   a10, a2
   0x4200ff4b <+1435>:  sub     a11, a11, a2
   0x4200ff4e <+1438>:  call8   0x4200e52c <_ZdlPvj>
   0x4200ff51 <+1441>:  l32i    a5, a1, 0x118
   0x4200ff54 <+1444>:  addi    a8, a1, 16
   0x4200ff57 <+1447>:  movi    a4, 156
   0x4200ff5a <+1450>:  movi    a3, 132
   0x4200ff5d <+1453>:  movi.n  a2, 0
   0x4200ff5f <+1455>:  l32i.n  a15, a5, 4
   0x4200ff61 <+1457>:  l32i.n  a14, a5, 0
   0x4200ff63 <+1459>:  add.n   a4, a8, a4
   0x4200ff65 <+1461>:  add.n   a3, a8, a3
   0x4200ff67 <+1463>:  movi    a12, 188
   0x4200ff6a <+1466>:  s32i.n  a2, a1, 0
   0x4200ff6c <+1468>:  s32i.n  a4, a1, 8
   0x4200ff6e <+1470>:  s32i.n  a3, a1, 4
   0x4200ff70 <+1472>:  mov.n   a13, a8
   0x4200ff72 <+1474>:  add.n   a12, a8, a12
   0x4200ff74 <+1476>:  addi    a11, a1, 108
   0x4200ff77 <+1479>:  addi    a10, a1, 68
   0x4200ff7a <+1482>:  s32i    a2, a1, 172
   0x4200ff7d <+1485>:  s32i    a2, a1, 176
   0x4200ff80 <+1488>:  s32i    a2, a1, 180
   0x4200ff83 <+1491>:  call8   0x42010ba4 <_ZN2dl2nn6conv2dERNS_6TensorIaEES3_RSt6vectorIiSaIiEERKNS_6FilterIaEEiiPKNS_4BiasIaEEPKNS_10ActivationIaEERKS6_>
   0x4200ff86 <+1494>:  l32i    a2, a1, 172
   0x4200ff89 <+1497>:  beqz.n  a2, 0x4200ff96 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1510>
   0x4200ff8b <+1499>:  l32i    a11, a1, 180
   0x4200ff8e <+1502>:  mov.n   a10, a2
   0x4200ff90 <+1504>:  sub     a11, a11, a2
--Type <RET> for more, q to quit, c to continue without paging--
   0x4200ff93 <+1507>:  call8   0x4200e52c <_ZdlPvj>
   0x4200ff96 <+1510>:  l32i    a2, a1, 156
   0x4200ff99 <+1513>:  beqz.n  a2, 0x4200ffa6 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1526>
   0x4200ff9b <+1515>:  l32i    a11, a1, 164
   0x4200ff9e <+1518>:  mov.n   a10, a2
   0x4200ffa0 <+1520>:  sub     a11, a11, a2
   0x4200ffa3 <+1523>:  call8   0x4200e52c <_ZdlPvj>
   0x4200ffa6 <+1526>:  l32i    a2, a1, 204
   0x4200ffa9 <+1529>:  beqz    a2, 0x4200ffb7 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1543>
   0x4200ffac <+1532>:  l32i    a11, a1, 212
   0x4200ffaf <+1535>:  sub     a11, a11, a2
   0x4200ffb2 <+1538>:  mov.n   a10, a2
   0x4200ffb4 <+1540>:  call8   0x4200e52c <_ZdlPvj>
   0x4200ffb7 <+1543>:  l8ui    a2, a1, 72
   0x4200ffba <+1546>:  beqz.n  a2, 0x4200ffcd <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1565>
   0x4200ffbc <+1548>:  l32i    a10, a1, 88
   0x4200ffbf <+1551>:  beqz    a10, 0x4200ffcd <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1565>
   0x4200ffc2 <+1554>:  movi.n  a2, 0
   0x4200ffc4 <+1556>:  l32r    a8, 0x42001284 <_stext+4708> (0x40376238 <heap_caps_free>)
   0x4200ffc7 <+1559>:  callx8  a8
   0x4200ffca <+1562>:  s32i    a2, a1, 88
   0x4200ffcd <+1565>:  l32i    a2, a1, 96
   0x4200ffd0 <+1568>:  beqz    a2, 0x4200ffde <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1582>
   0x4200ffd3 <+1571>:  l32i    a11, a1, 104
   0x4200ffd6 <+1574>:  mov.n   a10, a2
   0x4200ffd8 <+1576>:  sub     a11, a11, a2
   0x4200ffdb <+1579>:  call8   0x4200e52c <_ZdlPvj>
   0x4200ffde <+1582>:  l32i    a2, a1, 76
   0x4200ffe1 <+1585>:  beqz.n  a2, 0x4200ffee <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1598>
   0x4200ffe3 <+1587>:  l32i    a11, a1, 84
   0x4200ffe6 <+1590>:  mov.n   a10, a2
   0x4200ffe8 <+1592>:  sub     a11, a11, a2
   0x4200ffeb <+1595>:  call8   0x4200e52c <_ZdlPvj>
   0x4200ffee <+1598>:  l32i.n  a2, a1, 48
   0x4200fff0 <+1600>:  beqz.n  a2, 0x4200fffc <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1612>
   0x4200fff2 <+1602>:  l32i.n  a11, a1, 56
   0x4200fff4 <+1604>:  mov.n   a10, a2
   0x4200fff6 <+1606>:  sub     a11, a11, a2
   0x4200fff9 <+1609>:  call8   0x4200e52c <_ZdlPvj>
   0x4200fffc <+1612>:  l32i.n  a2, a1, 36
   0x4200fffe <+1614>:  beqz.n  a2, 0x4201000a <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1626>
   0x42010000 <+1616>:  l32i.n  a11, a1, 44
   0x42010002 <+1618>:  mov.n   a10, a2
   0x42010004 <+1620>:  sub     a11, a11, a2
   0x42010007 <+1623>:  call8   0x4200e52c <_ZdlPvj>
   0x4201000a <+1626>:  l32i.n  a2, a1, 24
   0x4201000c <+1628>:  beqz.n  a2, 0x42010018 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1640>
   0x4201000e <+1630>:  l32i.n  a11, a1, 32
   0x42010010 <+1632>:  mov.n   a10, a2
   0x42010012 <+1634>:  sub     a11, a11, a2
   0x42010015 <+1637>:  call8   0x4200e52c <_ZdlPvj>
   0x42010018 <+1640>:  l8ui    a2, a1, 112
   0x4201001b <+1643>:  beqz.n  a2, 0x4201002e <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1662>
   0x4201001d <+1645>:  l32i    a10, a1, 128
   0x42010020 <+1648>:  beqz    a10, 0x4201002e <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1662>
   0x42010023 <+1651>:  movi.n  a2, 0
   0x42010025 <+1653>:  l32r    a8, 0x42001284 <_stext+4708> (0x40376238 <heap_caps_free>)
   0x42010028 <+1656>:  callx8  a8
   0x4201002b <+1659>:  s32i    a2, a1, 128
   0x4201002e <+1662>:  l32i    a2, a1, 136
   0x42010031 <+1665>:  beqz    a2, 0x42010040 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1680>
   0x42010034 <+1668>:  l32i    a11, a1, 144
--Type <RET> for more, q to quit, c to continue without paging--
   0x42010037 <+1671>:  or      a10, a2, a2
   0x4201003a <+1674>:  sub     a11, a11, a2
   0x4201003d <+1677>:  call8   0x4200e52c <_ZdlPvj>
   0x42010040 <+1680>:  l32i    a2, a1, 116
   0x42010043 <+1683>:  beqz.n  a2, 0x42010050 <esp_dl_nn_conv2d_s8_wrapper(int8_t*, int8_t*, int8_t*, int*, int*, int*, int*, int*, int*, int, int, int, char*, int8_t*)+1696>
   0x42010045 <+1685>:  l32i    a11, a1, 124
   0x42010048 <+1688>:  mov.n   a10, a2
   0x4201004a <+1690>:  sub     a11, a11, a2
   0x4201004d <+1693>:  call8   0x4200e52c <_ZdlPvj>
   0x42010050 <+1696>:  retw.n