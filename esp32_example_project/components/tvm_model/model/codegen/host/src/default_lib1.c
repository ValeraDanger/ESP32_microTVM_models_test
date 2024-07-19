// tvm target: c -keys=cpu -model=esp32
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast(int8_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 128) + (ax3 * 4)) + ax4_inner);
        T_cast[cse_var_1] = ((int16_t)p0[cse_var_1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_multiply_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_c_ae457dfae6188f97_(int8_t* p0, int16_t* p1, int16_t* T_cast, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_cast_multiply_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_let = (&(global_const_workspace_10_var[155248]));
  void* fused_cast_multiply_constant_let = (&(global_const_workspace_10_var[142848]));
  void* data_pad_let = (&(global_workspace_11_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 136; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 34; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 34);
        int32_t cse_var_1 = (i3 * 4);
        ((int16_t*)data_pad_let)[(((i0_i1_fused_i2_fused * 136) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 33)) && (1 <= i3)) && (i3 < 33)) ? p1[((((((i0_i1_fused_i2_fused / 34) * 4096) + (cse_var_2 * 128)) + cse_var_1) + i4) - 132)] : (int16_t)0);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_11_var[86144]));
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      void* conv2d_NCHWc_global_let = (&(global_workspace_11_var[86656]));
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0;
      }
      for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0;
      }
      for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0;
      }
      for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0;
      }
      for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
        for (int32_t kh = 0; kh < 3; ++kh) {
          for (int32_t kw = 0; kw < 3; ++kw) {
            for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
              for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
                ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] = (((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)])));
              }
              for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
                int32_t cse_var_3 = (oc_block_c_1 + 4);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 4)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)])));
              }
              for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
                int32_t cse_var_4 = (oc_block_c_2 + 8);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 8)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)])));
              }
              for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
                int32_t cse_var_5 = (oc_block_c_3 + 12);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 12)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)])));
              }
              for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
                int32_t cse_var_6 = (oc_block_c_4 + 16);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 16)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)])));
              }
              for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
                int32_t cse_var_7 = (oc_block_c_5 + 20);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 20)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)])));
              }
              for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
                int32_t cse_var_8 = (oc_block_c_6 + 24);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 24)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)])));
              }
              for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
                int32_t cse_var_9 = (oc_block_c_7 + 28);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 28)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)])));
              }
              for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
                int32_t cse_var_10 = (oc_block_c_8 + 32);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 32)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_8)])));
              }
              for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
                int32_t cse_var_11 = (oc_block_c_9 + 36);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 36)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_9)])));
              }
              for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
                int32_t cse_var_12 = (oc_block_c_10 + 40);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 40)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_10)])));
              }
              for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
                int32_t cse_var_13 = (oc_block_c_11 + 44);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 44)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_11)])));
              }
              for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
                int32_t cse_var_14 = (oc_block_c_12 + 48);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 48)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_12)])));
              }
              for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
                int32_t cse_var_15 = (oc_block_c_13 + 52);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 52)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_13)])));
              }
              for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
                int32_t cse_var_16 = (oc_block_c_14 + 56);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 56)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_14)])));
              }
              for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
                int32_t cse_var_17 = (oc_block_c_15 + 60);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_17] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_17] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 60)]) * ((int32_t)((int16_t*)fused_cast_multiply_constant_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_15)])));
              }
            }
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_18 = (ow_inner * 4);
          ((int32_t*)conv2d_NCHWc_let)[(((ow_outer * 64) + cse_var_18) + oc_block)] = ((int32_t*)conv2d_NCHWc_global_let)[(cse_var_18 + oc_block)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_21 = (ax3_outer * 64);
          int32_t cse_var_20 = (ax3_inner * 4);
          int32_t cse_var_19 = ((((ax0_ax1_fused_ax2_fused * 128) + cse_var_21) + cse_var_20) + ax4);
          int32_t v_ = (((int32_t*)conv2d_NCHWc_let)[((cse_var_21 + cse_var_20) + ax4)] + 32) >> 6;
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          float v__2 = roundf((((((float)p0[cse_var_19]) * 1.250000e-01f) + (((float)(((int8_t)((v__1) > (-128) ? (v__1) : (-128))) + ((int8_t*)fused_cast_multiply_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_let)[(((ax0_ax1_fused_ax2_fused >> 5) * 4) + ax4)])) * 1.250000e-01f)) * 8.000000e+00f));
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          int8_t v__4 = (int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f));
          int8_t v__5 = (int8_t)0;
          T_cast[cse_var_19] = ((int16_t)((v__4) > (v__5) ? (v__4) : (v__5)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_reshape_cast(int8_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 4; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      T_cast[cse_var_1] = ((int16_t)p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_divide_round_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* pool_sum_let = (&(global_workspace_25_var[16384]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_init = 0; ax4_init < 4; ++ax4_init) {
      ((float*)pool_sum_let)[((ax0_ax1_fused_ax2_fused * 4) + ax4_init)] = 0.000000e+00f;
    }
    for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 64; ++rv0_rv1_fused) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused * 4) + ax4);
        ((float*)pool_sum_let)[cse_var_1] = (((float*)pool_sum_let)[cse_var_1] + p0[(((ax0_ax1_fused_ax2_fused * 256) + (rv0_rv1_fused * 4)) + ax4)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 16; ++ax0_ax1_fused) {
    for (int32_t ax4_1 = 0; ax4_1 < 4; ++ax4_1) {
      int32_t cse_var_2 = ((ax0_ax1_fused * 4) + ax4_1);
      float v_ = roundf(((((float*)pool_sum_let)[cse_var_2] * 1.562500e-02f) * 1.600000e+01f));
      float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
      T_cast[cse_var_2] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_cast_multiply(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_3_let = (&(global_const_workspace_14_var[155152]));
  void* fused_constant_3_let = (&(global_const_workspace_14_var[110592]));
  void* data_pad_let = (&(global_workspace_15_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 144; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 18; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 18);
        int32_t cse_var_1 = (i3 * 4);
        ((int16_t*)data_pad_let)[(((i0_i1_fused_i2_fused * 72) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 17)) && (1 <= i3)) && (i3 < 17)) ? p0[((((((i0_i1_fused_i2_fused / 18) * 1024) + (cse_var_2 * 64)) + cse_var_1) + i4) - 68)] : (int16_t)0);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_15_var[20736]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_15_var[20992]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0;
    }
    for (int32_t ic_outer = 0; ic_outer < 8; ++ic_outer) {
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] = (((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] + (((int32_t)((int16_t*)data_pad_let)[(((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)])));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_3 = (oc_block_c_1 + 4);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 4)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)])));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_4 = (oc_block_c_2 + 8);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 8)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)])));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_5 = (oc_block_c_3 + 12);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 12)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)])));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_6 = (oc_block_c_4 + 16);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 16)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)])));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_7 = (oc_block_c_5 + 20);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 20)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)])));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_8 = (oc_block_c_6 + 24);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 24)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)])));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_9 = (oc_block_c_7 + 28);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 28)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)])));
            }
            for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
              int32_t cse_var_10 = (oc_block_c_8 + 32);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 32)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_8)])));
            }
            for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
              int32_t cse_var_11 = (oc_block_c_9 + 36);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 36)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_9)])));
            }
            for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
              int32_t cse_var_12 = (oc_block_c_10 + 40);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 40)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_10)])));
            }
            for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
              int32_t cse_var_13 = (oc_block_c_11 + 44);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 44)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_11)])));
            }
            for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
              int32_t cse_var_14 = (oc_block_c_12 + 48);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 48)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_12)])));
            }
            for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
              int32_t cse_var_15 = (oc_block_c_13 + 52);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 52)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_13)])));
            }
            for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
              int32_t cse_var_16 = (oc_block_c_14 + 56);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 56)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_14)])));
            }
            for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
              int32_t cse_var_17 = (oc_block_c_15 + 60);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_17] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_17] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 60)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_15)])));
            }
          }
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_18 = ((ow_inner * 4) + oc_block);
        ((int32_t*)conv2d_NCHWc_let)[cse_var_18] = ((int32_t*)conv2d_NCHWc_global_let)[cse_var_18];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_19 = (ax3_inner * 4);
        int32_t v_ = (((int32_t*)conv2d_NCHWc_let)[(cse_var_19 + ax4)] + 64) >> 7;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_multiply[(((ax0_ax1_fused_ax2_fused * 64) + cse_var_19) + ax4)] = (((float)(((int8_t)((v__1) > (-128) ? (v__1) : (-128))) + ((int8_t*)fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_3_let)[(((ax0_ax1_fused_ax2_fused >> 4) * 4) + ax4)])) * 1.250000e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_cast_multiply_1(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_6_let = (&(global_const_workspace_20_var[154944]));
  void* fused_constant_6_let = (&(global_const_workspace_20_var[0]));
  void* data_pad_let = (&(global_workspace_21_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 160; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 10; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 10);
        int32_t cse_var_1 = (i3 * 4);
        ((int16_t*)data_pad_let)[(((i0_i1_fused_i2_fused * 40) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= i3)) && (i3 < 9)) ? p0[((((((i0_i1_fused_i2_fused / 10) * 256) + (cse_var_2 * 32)) + cse_var_1) + i4) - 36)] : (int16_t)0);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_21_var[12800]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_21_var[12928]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0;
    }
    for (int32_t ic_outer = 0; ic_outer < 16; ++ic_outer) {
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] = (((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] + (((int32_t)((int16_t*)data_pad_let)[(((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner)]) * ((int32_t)((int16_t*)fused_constant_6_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)])));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_3 = (oc_block_c_1 + 4);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 4)]) * ((int32_t)((int16_t*)fused_constant_6_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)])));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_4 = (oc_block_c_2 + 8);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 8)]) * ((int32_t)((int16_t*)fused_constant_6_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)])));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_5 = (oc_block_c_3 + 12);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 12)]) * ((int32_t)((int16_t*)fused_constant_6_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)])));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_6 = (oc_block_c_4 + 16);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 16)]) * ((int32_t)((int16_t*)fused_constant_6_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)])));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_7 = (oc_block_c_5 + 20);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 20)]) * ((int32_t)((int16_t*)fused_constant_6_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)])));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_8 = (oc_block_c_6 + 24);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 24)]) * ((int32_t)((int16_t*)fused_constant_6_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)])));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_9 = (oc_block_c_7 + 28);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 28)]) * ((int32_t)((int16_t*)fused_constant_6_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)])));
            }
          }
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 8; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_10 = ((ow_inner * 4) + oc_block);
        ((int32_t*)conv2d_NCHWc_let)[cse_var_10] = ((int32_t*)conv2d_NCHWc_global_let)[cse_var_10];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_11 = (ax3_inner * 4);
        int32_t v_ = (((int32_t*)conv2d_NCHWc_let)[(cse_var_11 + ax4)] + 128) >> 8;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_multiply[(((ax0_ax1_fused_ax2_fused * 32) + cse_var_11) + ax4)] = (((float)(((int8_t)((v__1) > (-128) ? (v__1) : (-128))) + ((int8_t*)fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_6_let)[(((ax0_ax1_fused_ax2_fused >> 3) * 4) + ax4)])) * 2.500000e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_cast_multiply_a_5ee91c37f41f954e_(int16_t* p0, float* p1, int16_t* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_4_let = (&(global_const_workspace_16_var[155120]));
  void* fused_constant_4_let = (&(global_const_workspace_16_var[152832]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 128; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_17_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_17_var[256]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0;
    }
    for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] = (((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] + (((int32_t)p0[(((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)])));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_1] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_1] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 8)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)])));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_2] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_2] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 16)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)])));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 24)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)])));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 32)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)])));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 40)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)])));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 48)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)])));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 56)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)])));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 64)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)])));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 72)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)])));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 80)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)])));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 88)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)])));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 96)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)])));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 104)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)])));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 112)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)])));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] + (((int32_t)p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 256)) + ic_inner) + 120)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)])));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_16 = ((ow_inner * 4) + oc_block);
        ((int32_t*)conv2d_NCHWc_let)[cse_var_16] = ((int32_t*)conv2d_NCHWc_global_let)[cse_var_16];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_18 = (ax3_inner * 4);
        int32_t cse_var_17 = (((ax0_ax1_fused_ax2_outer_fused * 64) + cse_var_18) + ax4);
        int32_t v_ = (((int32_t*)conv2d_NCHWc_let)[(cse_var_18 + ax4)] + 32) >> 6;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        float v__2 = roundf((((((float)(((int8_t)((v__1) > (-128) ? (v__1) : (-128))) + ((int8_t*)fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_4_let)[(((ax0_ax1_fused_ax2_outer_fused >> 4) * 4) + ax4)])) * 6.250000e-02f) + p1[cse_var_17]) * 4.000000e+00f));
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        float v__4 = ((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)) * 2.500000e-01f;
        float v__5 = roundf((((v__4) > (0.000000e+00f) ? (v__4) : (0.000000e+00f)) * 8.000000e+00f));
        float v__6 = (v__5) < (1.270000e+02f) ? (v__5) : (1.270000e+02f);
        T_cast[cse_var_17] = ((int16_t)((int8_t)((v__6) > (-1.280000e+02f) ? (v__6) : (-1.280000e+02f))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_cast_multiply_a_6682ee4352781c1e_(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_7_let = (&(global_const_workspace_22_var[154880]));
  void* fused_constant_7_let = (&(global_const_workspace_22_var[147456]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 64; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_23_var[16384]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_23_var[16640]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0;
    }
    for (int32_t ic_outer = 0; ic_outer < 8; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] = (((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] + (((int32_t)p0[(((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)])));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_1] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_1] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 8)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)])));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_2] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_2] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 16)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)])));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 24)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)])));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 32)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)])));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 40)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)])));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 48)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)])));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 56)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)])));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 128)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)])));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 136)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)])));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 144)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)])));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 152)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)])));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 160)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)])));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 168)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)])));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 176)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)])));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] + (((int32_t)p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 184)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)])));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 8; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_16 = (((oh_inner * 32) + (ow_inner * 4)) + oc_block);
          ((int32_t*)conv2d_NCHWc_let)[cse_var_16] = ((int32_t*)conv2d_NCHWc_global_let)[cse_var_16];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_19 = (ax2_inner * 32);
          int32_t cse_var_18 = (ax3_inner * 4);
          int32_t cse_var_17 = ((((ax0_ax1_fused_ax2_outer_fused * 64) + cse_var_19) + cse_var_18) + ax4);
          int32_t v_ = (((int32_t*)conv2d_NCHWc_let)[((cse_var_19 + cse_var_18) + ax4)] + 64) >> 7;
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          float v__2 = roundf((((((float)(((int8_t)((v__1) > (-128) ? (v__1) : (-128))) + ((int8_t*)fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_7_let)[(((ax0_ax1_fused_ax2_outer_fused >> 2) * 4) + ax4)])) * 1.250000e-01f) + p1[cse_var_17]) * 2.000000e+00f));
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          int8_t v__4 = (int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f));
          int8_t v__5 = (int8_t)0;
          T_multiply[cse_var_17] = (((float)((v__4) > (v__5) ? (v__4) : (v__5))) * 5.000000e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_cast_multiply_n_8ff647d0db17069e_(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_5_let = (&(global_const_workspace_18_var[155008]));
  void* fused_constant_5_let = (&(global_const_workspace_18_var[73728]));
  void* data_pad_let = (&(global_workspace_19_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 136; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 17; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 17);
        int32_t cse_var_1 = (i3 * 4);
        ((int16_t*)data_pad_let)[(((i0_i1_fused_i2_fused * 68) + cse_var_1) + i4)] = (((cse_var_2 < 16) && (i3 < 16)) ? p0[(((((i0_i1_fused_i2_fused / 17) * 1024) + (cse_var_2 * 64)) + cse_var_1) + i4)] : (int16_t)0);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_19_var[43072]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_19_var[43200]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0;
    }
    for (int32_t ic_outer = 0; ic_outer < 8; ++ic_outer) {
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] = (((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] + (((int32_t)((int16_t*)data_pad_let)[(((((ic_outer * 1156) + ((ax0_ax1_fused_ax2_fused & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner)]) * ((int32_t)((int16_t*)fused_constant_5_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)])));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_3 = (oc_block_c_1 + 4);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1156) + ((ax0_ax1_fused_ax2_fused & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 8)]) * ((int32_t)((int16_t*)fused_constant_5_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)])));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_4 = (oc_block_c_2 + 8);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1156) + ((ax0_ax1_fused_ax2_fused & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 16)]) * ((int32_t)((int16_t*)fused_constant_5_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)])));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_5 = (oc_block_c_3 + 12);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1156) + ((ax0_ax1_fused_ax2_fused & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 24)]) * ((int32_t)((int16_t*)fused_constant_5_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)])));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_6 = (oc_block_c_4 + 16);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1156) + ((ax0_ax1_fused_ax2_fused & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 32)]) * ((int32_t)((int16_t*)fused_constant_5_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)])));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_7 = (oc_block_c_5 + 20);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1156) + ((ax0_ax1_fused_ax2_fused & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 40)]) * ((int32_t)((int16_t*)fused_constant_5_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)])));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_8 = (oc_block_c_6 + 24);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1156) + ((ax0_ax1_fused_ax2_fused & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 48)]) * ((int32_t)((int16_t*)fused_constant_5_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)])));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_9 = (oc_block_c_7 + 28);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 1156) + ((ax0_ax1_fused_ax2_fused & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 56)]) * ((int32_t)((int16_t*)fused_constant_5_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)])));
            }
          }
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 8; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_10 = ((ow_inner * 4) + oc_block);
        ((int32_t*)conv2d_NCHWc_let)[cse_var_10] = ((int32_t*)conv2d_NCHWc_global_let)[cse_var_10];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_11 = (ax3_inner * 4);
        int32_t v_ = (((int32_t*)conv2d_NCHWc_let)[(cse_var_11 + ax4)] + 256) >> 9;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        float v__2 = ((float)(((int8_t)((v__1) > (-128) ? (v__1) : (-128))) + ((int8_t*)fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_5_let)[(((ax0_ax1_fused_ax2_fused >> 3) * 4) + ax4)])) * 1.250000e-01f;
        float v__3 = roundf((((v__2) > (0.000000e+00f) ? (v__2) : (0.000000e+00f)) * 1.600000e+01f));
        float v__4 = (v__3) < (1.270000e+02f) ? (v__3) : (1.270000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_fused * 32) + cse_var_11) + ax4)] = ((int16_t)((int8_t)((v__4) > (-1.280000e+02f) ? (v__4) : (-1.280000e+02f))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_nn_relu(int16_t* p0, int8_t* T_relu, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_let = (&(global_const_workspace_4_var[155232]));
  void* fused_constant_let = (&(global_const_workspace_4_var[153856]));
  void* data_pad_let = (&(global_workspace_5_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 34; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 34; ++i3) {
      for (int32_t i4 = 0; i4 < 3; ++i4) {
        int32_t cse_var_1 = (i3 * 3);
        ((int16_t*)data_pad_let)[(((i0_i1_fused_i2_fused * 102) + cse_var_1) + i4)] = (((((1 <= i0_i1_fused_i2_fused) && (i0_i1_fused_i2_fused < 33)) && (1 <= i3)) && (i3 < 33)) ? p0[((((i0_i1_fused_i2_fused * 96) + cse_var_1) + i4) - 99)] : (int16_t)0);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_5_var[6944]));
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      void* conv2d_NCHWc_global_let = (&(global_workspace_5_var[7456]));
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0;
      }
      for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0;
      }
      for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0;
      }
      for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0;
      }
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 3; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] = (((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c)])));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_2 = (oc_block_c_1 + 4);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_2] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_2] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 3)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_1)])));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_3 = (oc_block_c_2 + 8);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 6)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_2)])));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_4 = (oc_block_c_3 + 12);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 9)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_3)])));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_5 = (oc_block_c_4 + 16);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 12)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_4)])));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_6 = (oc_block_c_5 + 20);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 15)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_5)])));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_7 = (oc_block_c_6 + 24);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 18)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_6)])));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_8 = (oc_block_c_7 + 28);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 21)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_7)])));
            }
            for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
              int32_t cse_var_9 = (oc_block_c_8 + 32);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 24)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_8)])));
            }
            for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
              int32_t cse_var_10 = (oc_block_c_9 + 36);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 27)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_9)])));
            }
            for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
              int32_t cse_var_11 = (oc_block_c_10 + 40);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 30)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_10)])));
            }
            for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
              int32_t cse_var_12 = (oc_block_c_11 + 44);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 33)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_11)])));
            }
            for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
              int32_t cse_var_13 = (oc_block_c_12 + 48);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 36)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_12)])));
            }
            for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
              int32_t cse_var_14 = (oc_block_c_13 + 52);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 39)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_13)])));
            }
            for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
              int32_t cse_var_15 = (oc_block_c_14 + 56);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 42)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_14)])));
            }
            for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
              int32_t cse_var_16 = (oc_block_c_15 + 60);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] + (((int32_t)((int16_t*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 45)]) * ((int32_t)((int16_t*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_15)])));
            }
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_17 = (ow_inner * 4);
          ((int32_t*)conv2d_NCHWc_let)[(((ow_outer * 64) + cse_var_17) + oc_block)] = ((int32_t*)conv2d_NCHWc_global_let)[(cse_var_17 + oc_block)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_19 = (ax3_outer * 64);
          int32_t cse_var_18 = (ax3_inner * 4);
          int32_t v_ = (((int32_t*)conv2d_NCHWc_let)[((cse_var_19 + cse_var_18) + ax4)] + 64) >> 7;
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          int8_t v__2 = ((int8_t)((v__1) > (-128) ? (v__1) : (-128))) + ((int8_t*)fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_let)[(((ax0_ax1_fused_ax2_fused >> 5) * 4) + ax4)];
          int8_t v__3 = (int8_t)0;
          T_relu[((((ax0_ax1_fused_ax2_fused * 128) + cse_var_19) + cse_var_18) + ax4)] = ((v__2) > (v__3) ? (v__2) : (v__3));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_nn_relu_cast(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_1_let = (&(global_const_workspace_8_var[155216]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[138240]));
  void* data_pad_let = (&(global_workspace_9_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 136; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 34; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 34);
        int32_t cse_var_1 = (i3 * 4);
        ((int16_t*)data_pad_let)[(((i0_i1_fused_i2_fused * 136) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 33)) && (1 <= i3)) && (i3 < 33)) ? p0[((((((i0_i1_fused_i2_fused / 34) * 4096) + (cse_var_2 * 128)) + cse_var_1) + i4) - 132)] : (int16_t)0);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_9_var[86144]));
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      void* conv2d_NCHWc_global_let = (&(global_workspace_9_var[86656]));
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0;
      }
      for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0;
      }
      for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0;
      }
      for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0;
      }
      for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
        for (int32_t kh = 0; kh < 3; ++kh) {
          for (int32_t kw = 0; kw < 3; ++kw) {
            for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
              for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
                ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] = (((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)])));
              }
              for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
                int32_t cse_var_3 = (oc_block_c_1 + 4);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 4)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)])));
              }
              for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
                int32_t cse_var_4 = (oc_block_c_2 + 8);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 8)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)])));
              }
              for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
                int32_t cse_var_5 = (oc_block_c_3 + 12);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 12)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)])));
              }
              for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
                int32_t cse_var_6 = (oc_block_c_4 + 16);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 16)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)])));
              }
              for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
                int32_t cse_var_7 = (oc_block_c_5 + 20);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 20)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)])));
              }
              for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
                int32_t cse_var_8 = (oc_block_c_6 + 24);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 24)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)])));
              }
              for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
                int32_t cse_var_9 = (oc_block_c_7 + 28);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 28)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)])));
              }
              for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
                int32_t cse_var_10 = (oc_block_c_8 + 32);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 32)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_8)])));
              }
              for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
                int32_t cse_var_11 = (oc_block_c_9 + 36);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 36)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_9)])));
              }
              for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
                int32_t cse_var_12 = (oc_block_c_10 + 40);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 40)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_10)])));
              }
              for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
                int32_t cse_var_13 = (oc_block_c_11 + 44);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 44)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_11)])));
              }
              for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
                int32_t cse_var_14 = (oc_block_c_12 + 48);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 48)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_12)])));
              }
              for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
                int32_t cse_var_15 = (oc_block_c_13 + 52);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 52)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_13)])));
              }
              for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
                int32_t cse_var_16 = (oc_block_c_14 + 56);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 56)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_14)])));
              }
              for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
                int32_t cse_var_17 = (oc_block_c_15 + 60);
                ((int32_t*)conv2d_NCHWc_global_let)[cse_var_17] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_17] + (((int32_t)((int16_t*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((ax0_ax1_fused_ax2_fused & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 60)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((ax0_ax1_fused_ax2_fused >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_15)])));
              }
            }
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_18 = (ow_inner * 4);
          ((int32_t*)conv2d_NCHWc_let)[(((ow_outer * 64) + cse_var_18) + oc_block)] = ((int32_t*)conv2d_NCHWc_global_let)[(cse_var_18 + oc_block)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_20 = (ax3_outer * 64);
          int32_t cse_var_19 = (ax3_inner * 4);
          int32_t v_ = (((int32_t*)conv2d_NCHWc_let)[((cse_var_20 + cse_var_19) + ax4)] + 128) >> 8;
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          int8_t v__2 = ((int8_t)((v__1) > (-128) ? (v__1) : (-128))) + ((int8_t*)fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_1_let)[(((ax0_ax1_fused_ax2_fused >> 5) * 4) + ax4)];
          int8_t v__3 = (int8_t)0;
          T_cast[((((ax0_ax1_fused_ax2_fused * 128) + cse_var_20) + cse_var_19) + ax4)] = ((int16_t)((v__2) > (v__3) ? (v__2) : (v__3)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_nn_relu_cast_1(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_2_let = (&(global_const_workspace_12_var[155184]));
  void* fused_constant_2_let = (&(global_const_workspace_12_var[129024]));
  void* data_pad_let = (&(global_workspace_13_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 132; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 33; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 33);
        int32_t cse_var_1 = (i3 * 4);
        ((int16_t*)data_pad_let)[(((i0_i1_fused_i2_fused * 132) + cse_var_1) + i4)] = (((cse_var_2 < 32) && (i3 < 32)) ? p0[(((((i0_i1_fused_i2_fused / 33) * 4096) + (cse_var_2 * 128)) + cse_var_1) + i4)] : (int16_t)0);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_13_var[34848]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_13_var[35104]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0;
    }
    for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] = (((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] + (((int32_t)((int16_t*)data_pad_let)[(((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)])));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_3 = (oc_block_c_1 + 4);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 8)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)])));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_4 = (oc_block_c_2 + 8);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 16)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)])));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_5 = (oc_block_c_3 + 12);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 24)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)])));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_6 = (oc_block_c_4 + 16);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 32)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)])));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_7 = (oc_block_c_5 + 20);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 40)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)])));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_8 = (oc_block_c_6 + 24);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 48)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)])));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_9 = (oc_block_c_7 + 28);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 56)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)])));
            }
            for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
              int32_t cse_var_10 = (oc_block_c_8 + 32);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 64)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_8)])));
            }
            for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
              int32_t cse_var_11 = (oc_block_c_9 + 36);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 72)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_9)])));
            }
            for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
              int32_t cse_var_12 = (oc_block_c_10 + 40);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 80)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_10)])));
            }
            for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
              int32_t cse_var_13 = (oc_block_c_11 + 44);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 88)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_11)])));
            }
            for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
              int32_t cse_var_14 = (oc_block_c_12 + 48);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 96)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_12)])));
            }
            for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
              int32_t cse_var_15 = (oc_block_c_13 + 52);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 104)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_13)])));
            }
            for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
              int32_t cse_var_16 = (oc_block_c_14 + 56);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 112)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_14)])));
            }
            for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
              int32_t cse_var_17 = (oc_block_c_15 + 60);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_17] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_17] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 4356) + ((ax0_ax1_fused_ax2_fused & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 120)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_15)])));
            }
          }
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_18 = ((ow_inner * 4) + oc_block);
        ((int32_t*)conv2d_NCHWc_let)[cse_var_18] = ((int32_t*)conv2d_NCHWc_global_let)[cse_var_18];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_19 = (ax3_inner * 4);
        int32_t v_ = (((int32_t*)conv2d_NCHWc_let)[(cse_var_19 + ax4)] + 128) >> 8;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        int8_t v__2 = ((int8_t)((v__1) > (-128) ? (v__1) : (-128))) + ((int8_t*)fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_constant_2_let)[(((ax0_ax1_fused_ax2_fused >> 4) * 4) + ax4)];
        int8_t v__3 = (int8_t)0;
        T_cast[(((ax0_ax1_fused_ax2_fused * 64) + cse_var_19) + ax4)] = ((int16_t)((v__2) > (v__3) ? (v__2) : (v__3)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_where_add_righ_467e114bd6595de9_(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_constant_1_let = (&(global_const_workspace_28_var[154720]));
  void* fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_constant_let = (&(global_const_workspace_28_var[154800]));
  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_28_var[155072]));
  void* fused_constant_8_let = (&(global_const_workspace_28_var[151552]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_29_var[208]));
    void* compute_global_let = (&(global_workspace_29_var[176]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_8_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t x_inner_inner = 0; x_inner_inner < 5; ++x_inner_inner) {
      ((int32_t*)compute_let)[x_inner_inner] = ((int32_t*)compute_global_let)[x_inner_inner];
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = (int32_t)((((((int64_t)((int32_t*)compute_let)[ax1_inner_inner]) * (int64_t)1073741824) + (((int64_t)((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]) * (int64_t)1073741824)) + ((0 < ((int32_t)((int64_t)0 <= (((int64_t)((int32_t*)compute_let)[ax1_inner_inner]) + ((int64_t)((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]))))) ? ((int64_t*)fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_constant_let)[cse_var_1] : ((int64_t*)fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_constant_1_let)[cse_var_1])) >> (int64_t)37);
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)((int8_t)((v__1) > (-128) ? (v__1) : (-128)))) * 2.500000e-01f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax(float* p0, float* T_softmax_norm, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_31_var[48]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 10; ++k) {
    float v_ = ((float*)T_softmax_maxelem_let)[0];
    float v__1 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  void* T_softmax_exp_let = (&(global_workspace_31_var[0]));
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  void* T_softmax_expsum_let = (&(global_workspace_31_var[48]));
  ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 10; ++k_1) {
    ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
  }
  for (int32_t i1_1 = 0; i1_1 < 10; ++i1_1) {
    T_softmax_norm[i1_1] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_transpose_divide_round_clip_cast_cast_layout_transform(float* p0, int16_t* T_layout_trans, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 32; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 3; ++ax4_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 96) + (ax3 * 3)) + ax4_inner);
        float v_ = roundf((p0[cse_var_1] * 2.500000e-01f));
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_layout_trans[cse_var_1] = ((int16_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* input_1_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_14_let = (&(global_workspace_1_var[128]));
  void* sid_11_let = (&(global_workspace_1_var[0]));
  void* sid_8_let = (&(global_workspace_1_var[18496]));
  void* sid_9_let = (&(global_workspace_1_var[34880]));
  void* sid_1_let = (&(global_workspace_1_var[6944]));
  void* sid_13_let = (&(global_workspace_1_var[0]));
  void* sid_2_let = (&(global_workspace_1_var[69760]));
  void* sid_4_let = (&(global_workspace_1_var[36992]));
  void* sid_12_let = (&(global_workspace_1_var[128]));
  void* sid_7_let = (&(global_workspace_1_var[69760]));
  void* sid_5_let = (&(global_workspace_1_var[36992]));
  void* sid_3_let = (&(global_workspace_1_var[36992]));
  void* sid_6_let = (&(global_workspace_1_var[69760]));
  void* sid_10_let = (&(global_workspace_1_var[34880]));
  if (tvmgen_default_fused_transpose_divide_round_clip_cast_cast_layout_transform(input_1_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_nn_relu(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_nn_relu_cast(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_multiply_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_c_ae457dfae6188f97_(sid_2_let, sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_nn_relu_cast_1(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_cast_multiply(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_cast_multiply_a_5ee91c37f41f954e_(sid_5_let, sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_cast_multiply_n_8ff647d0db17069e_(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_cast_multiply_1(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_fixed_point_multiply_clip_cast_add_cast_multiply_a_6682ee4352781c1e_(sid_8_let, sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_avg_pool2d_divide_round_clip_cast(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_reshape_cast(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_where_add_righ_467e114bd6595de9_(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax(sid_14_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

