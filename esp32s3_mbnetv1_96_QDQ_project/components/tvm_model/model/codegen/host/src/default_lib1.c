// tvm target: c -keys=cpu -model=esp32
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 3; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          T_layout_trans[((((ax0_ax1_fused * 768) + (ax2 * 256)) + (ax3_outer * 16)) + ax3_inner)] = p0[(((((ax3_outer * 144) + ((ax3_inner >> 2) * 36)) + (ax0_ax1_fused * 12)) + (ax2 * 4)) + (ax3_inner & 3))];
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_reshape_cast_subtract_cast_layout_transform(int8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 2; ++ax4_inner) {
      int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused * 2) + ax4_inner);
      T_layout_trans[cse_var_1] = ((float)(((int32_t)p0[cse_var_1]) + 128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_reshape_cast_subtract_cast_multiply(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  for (int32_t ax1_inner = 0; ax1_inner < 2; ++ax1_inner) {
    T_multiply[ax1_inner] = (((float)(((int32_t)p0[ax1_inner]) + 1)) * 1.251875e-02f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* pool_sum_let = (&(global_workspace_61_var[0]));
  for (int32_t ax3_outer_init = 0; ax3_outer_init < 4; ++ax3_outer_init) {
    for (int32_t ax3_inner_init = 0; ax3_inner_init < 64; ++ax3_inner_init) {
      ((float*)pool_sum_let)[((ax3_outer_init * 64) + ax3_inner_init)] = 0.000000e+00f;
    }
  }
  for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 9; ++rv0_rv1_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t cse_var_1 = (cse_var_2 + ax3_inner);
        ((float*)pool_sum_let)[cse_var_1] = (((float*)pool_sum_let)[cse_var_1] + p0[(((rv0_rv1_fused * 256) + cse_var_2) + ax3_inner)]);
      }
    }
  }
  for (int32_t ax3 = 0; ax3 < 256; ++ax3) {
    float v_ = roundf(((((float*)pool_sum_let)[ax3] * 1.111111e-01f) * 5.373649e+01f)) + -1.280000e+02f;
    float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
    T_cast[ax3] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96_(float* p0, float* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_let = (&(global_const_workspace_4_var[842784]));
  void* fused_constant_let = (&(global_const_workspace_4_var[840800]));
  void* data_pad_let = (&(global_workspace_5_var[73728]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 97; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 97; ++i3) {
      ((float*)data_pad_let)[((i0_i1_fused_i2_fused * 97) + i3)] = (((i0_i1_fused_i2_fused < 96) && (i3 < 96)) ? p0[((i0_i1_fused_i2_fused * 96) + i3)] : 0.000000e+00f);
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 96; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_5_var[111376]));
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      void* conv2d_NCHWc_global_let = (&(global_workspace_5_var[112144]));
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 64)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 68)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 4; ++oc_block_c_init_18) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 72)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 4; ++oc_block_c_init_19) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 76)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 4; ++oc_block_c_init_20) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_20 + 80)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 4; ++oc_block_c_init_21) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_21 + 84)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 4; ++oc_block_c_init_22) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_22 + 88)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 4; ++oc_block_c_init_23) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_23 + 92)] = 0.000000e+00f;
      }
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (((float*)data_pad_let)[(((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_1 = (oc_block_c_1 + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 2)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_2 = (oc_block_c_2 + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 4)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_3 = (oc_block_c_3 + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 6)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_4 = (oc_block_c_4 + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 8)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_5 = (oc_block_c_5 + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 10)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_6 = (oc_block_c_6 + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 12)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_7 = (oc_block_c_7 + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 14)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_8 = (oc_block_c_8 + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 16)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_9 = (oc_block_c_9 + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 18)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_10 = (oc_block_c_10 + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 20)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_11 = (oc_block_c_11 + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 22)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_12 = (oc_block_c_12 + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 24)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_12)]));
          }
          for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
            int32_t cse_var_13 = (oc_block_c_13 + 52);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 26)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_13)]));
          }
          for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
            int32_t cse_var_14 = (oc_block_c_14 + 56);
            ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 28)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_14)]));
          }
          for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
            int32_t cse_var_15 = (oc_block_c_15 + 60);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 30)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_15)]));
          }
          for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
            int32_t cse_var_16 = (oc_block_c_16 + 64);
            ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 32)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_16)]));
          }
          for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
            int32_t cse_var_17 = (oc_block_c_17 + 68);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 34)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_17)]));
          }
          for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
            int32_t cse_var_18 = (oc_block_c_18 + 72);
            ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 36)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_18)]));
          }
          for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
            int32_t cse_var_19 = (oc_block_c_19 + 76);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 38)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_19)]));
          }
          for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
            int32_t cse_var_20 = (oc_block_c_20 + 80);
            ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 40)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_20)]));
          }
          for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
            int32_t cse_var_21 = (oc_block_c_21 + 84);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 42)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_21)]));
          }
          for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
            int32_t cse_var_22 = (oc_block_c_22 + 88);
            ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 44)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_22)]));
          }
          for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
            int32_t cse_var_23 = (oc_block_c_23 + 92);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 48) * 194) + (kh * 97)) + (ow_outer * 48)) + kw) + 46)] * ((float*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 48) * 36) + (kh * 12)) + (kw * 4)) + oc_block_c_23)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 24; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_24 = (ow_inner * 4);
          ((float*)conv2d_NCHWc_let)[(((ow_outer * 96) + cse_var_24) + oc_block)] = ((float*)conv2d_NCHWc_global_let)[(cse_var_24 + oc_block)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 24; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_26 = (ax3_outer * 96);
          int32_t cse_var_25 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_26 + cse_var_25) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_let)[(((ax0_ax1_fused_ax2_fused / 48) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_fused * 192) + cse_var_26) + cse_var_25) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__1(float* p0, float* T_cast, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_8_var[842688]));
  void* fused_constant_2_let = (&(global_const_workspace_8_var[840000]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 192; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_9_var[73728]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_9_var[74496]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 2; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 96) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_13) + 52)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_14) + 56)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_15) + 60)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_16) + 64)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_17) + 68)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 4; ++oc_block_c_init_18) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_18) + 72)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 4; ++oc_block_c_init_19) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_19) + 76)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 4; ++oc_block_c_init_20) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_20) + 80)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 4; ++oc_block_c_init_21) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_21) + 84)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 4; ++oc_block_c_init_22) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_22) + 88)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 4; ++oc_block_c_init_23) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 96) + oc_block_c_init_23) + 92)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 2; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 96);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 96);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 96);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 96);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 96);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 96);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 96);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 96);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 96);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 96);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 96);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 96);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 96);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
          for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
            int32_t cse_var_28 = (ow_c_outer * 96);
            int32_t cse_var_27 = ((cse_var_28 + oc_block_c_13) + 52);
            ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_28) + ic_inner) + 52)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
          }
          for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
            int32_t cse_var_30 = (ow_c_outer * 96);
            int32_t cse_var_29 = ((cse_var_30 + oc_block_c_14) + 56);
            ((float*)conv2d_NCHWc_global_let)[cse_var_29] = (((float*)conv2d_NCHWc_global_let)[cse_var_29] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_30) + ic_inner) + 56)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
          }
          for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
            int32_t cse_var_32 = (ow_c_outer * 96);
            int32_t cse_var_31 = ((cse_var_32 + oc_block_c_15) + 60);
            ((float*)conv2d_NCHWc_global_let)[cse_var_31] = (((float*)conv2d_NCHWc_global_let)[cse_var_31] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_32) + ic_inner) + 60)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
          }
          for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
            int32_t cse_var_34 = (ow_c_outer * 96);
            int32_t cse_var_33 = ((cse_var_34 + oc_block_c_16) + 64);
            ((float*)conv2d_NCHWc_global_let)[cse_var_33] = (((float*)conv2d_NCHWc_global_let)[cse_var_33] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_34) + ic_inner) + 64)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
          }
          for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
            int32_t cse_var_36 = (ow_c_outer * 96);
            int32_t cse_var_35 = ((cse_var_36 + oc_block_c_17) + 68);
            ((float*)conv2d_NCHWc_global_let)[cse_var_35] = (((float*)conv2d_NCHWc_global_let)[cse_var_35] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_36) + ic_inner) + 68)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
          }
          for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
            int32_t cse_var_38 = (ow_c_outer * 96);
            int32_t cse_var_37 = ((cse_var_38 + oc_block_c_18) + 72);
            ((float*)conv2d_NCHWc_global_let)[cse_var_37] = (((float*)conv2d_NCHWc_global_let)[cse_var_37] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_38) + ic_inner) + 72)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
          }
          for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
            int32_t cse_var_40 = (ow_c_outer * 96);
            int32_t cse_var_39 = ((cse_var_40 + oc_block_c_19) + 76);
            ((float*)conv2d_NCHWc_global_let)[cse_var_39] = (((float*)conv2d_NCHWc_global_let)[cse_var_39] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_40) + ic_inner) + 76)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
          }
          for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
            int32_t cse_var_42 = (ow_c_outer * 96);
            int32_t cse_var_41 = ((cse_var_42 + oc_block_c_20) + 80);
            ((float*)conv2d_NCHWc_global_let)[cse_var_41] = (((float*)conv2d_NCHWc_global_let)[cse_var_41] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_42) + ic_inner) + 80)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
          }
          for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
            int32_t cse_var_44 = (ow_c_outer * 96);
            int32_t cse_var_43 = ((cse_var_44 + oc_block_c_21) + 84);
            ((float*)conv2d_NCHWc_global_let)[cse_var_43] = (((float*)conv2d_NCHWc_global_let)[cse_var_43] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_44) + ic_inner) + 84)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
          }
          for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
            int32_t cse_var_46 = (ow_c_outer * 96);
            int32_t cse_var_45 = ((cse_var_46 + oc_block_c_22) + 88);
            ((float*)conv2d_NCHWc_global_let)[cse_var_45] = (((float*)conv2d_NCHWc_global_let)[cse_var_45] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_46) + ic_inner) + 88)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
          }
          for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
            int32_t cse_var_48 = (ow_c_outer * 96);
            int32_t cse_var_47 = ((cse_var_48 + oc_block_c_23) + 92);
            ((float*)conv2d_NCHWc_global_let)[cse_var_47] = (((float*)conv2d_NCHWc_global_let)[cse_var_47] + (p0[(((((ic_outer * 9216) + ((ax0_ax1_fused_ax2_outer_fused % 48) * 192)) + cse_var_48) + ic_inner) + 92)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 48) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 24; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_49 = (((ow_outer * 96) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_49] = ((float*)conv2d_NCHWc_global_let)[cse_var_49];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 24; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_51 = (ax3_outer * 96);
          int32_t cse_var_50 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_51 + cse_var_50) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_1_let)[(((ax0_ax1_fused_ax2_outer_fused / 48) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 192) + cse_var_51) + cse_var_50) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__10(float* p0, float* T_cast, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_10_let = (&(global_const_workspace_44_var[839488]));
  void* fused_constant_20_let = (&(global_const_workspace_44_var[458752]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 64; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_45_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_45_var[288]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 64)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 68)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 32; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 3; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 6; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_18 = (((oh_inner * 24) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_18] = ((float*)conv2d_NCHWc_global_let)[cse_var_18];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 3; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_20 = (ax2_inner * 24);
          int32_t cse_var_19 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_20 + cse_var_19) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_10_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_20) + cse_var_19) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__11(float* p0, float* T_cast, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_11_let = (&(global_const_workspace_48_var[838976]));
  void* fused_constant_22_let = (&(global_const_workspace_48_var[393216]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 64; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_49_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_49_var[288]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 64)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 68)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 32; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 3; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 6; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_18 = (((oh_inner * 24) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_18] = ((float*)conv2d_NCHWc_global_let)[cse_var_18];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 3; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_20 = (ax2_inner * 24);
          int32_t cse_var_19 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_20 + cse_var_19) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_11_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_20) + cse_var_19) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__12(float* p0, float* T_cast, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_12_let = (&(global_const_workspace_52_var[832256]));
  void* fused_constant_24_let = (&(global_const_workspace_52_var[262144]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 64; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_53_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_53_var[144]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 32; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[((ic_outer * 36) + ic_inner)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[(((ic_outer * 36) + ic_inner) + 4)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[(((ic_outer * 36) + ic_inner) + 8)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((ic_outer * 36) + ic_inner) + 12)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[(((ic_outer * 36) + ic_inner) + 16)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((ic_outer * 36) + ic_inner) + 20)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[(((ic_outer * 36) + ic_inner) + 24)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((ic_outer * 36) + ic_inner) + 28)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[(((ic_outer * 36) + ic_inner) + 32)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 3; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 3; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_9 = (((oh_inner * 12) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_9] = ((float*)conv2d_NCHWc_global_let)[cse_var_9];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 3; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_11 = (ax2_inner * 12);
          int32_t cse_var_10 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_11 + cse_var_10) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_12_let)[((ax0_ax1_fused_ax2_outer_fused * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 36) + cse_var_11) + cse_var_10) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__2(float* p0, float* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_2_let = (&(global_const_workspace_12_var[842496]));
  void* fused_constant_4_let = (&(global_const_workspace_12_var[823808]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 192; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_13_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_13_var[384]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 64)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 68)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 4; ++oc_block_c_init_18) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 72)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 4; ++oc_block_c_init_19) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 76)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 4; ++oc_block_c_init_20) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_20 + 80)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 4; ++oc_block_c_init_21) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_21 + 84)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 4; ++oc_block_c_init_22) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_22 + 88)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 4; ++oc_block_c_init_23) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_23 + 92)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 4)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 8)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 12)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 16)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 20)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 24)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 28)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 32)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 36)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 40)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 44)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 48)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 52)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 56)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 60)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 64)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 68)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 72)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 76)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 80)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 84)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 88)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 92)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 24; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_24 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_24] = ((float*)conv2d_NCHWc_global_let)[cse_var_24];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 24; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_25 = (ax3_inner * 4);
        float v_ = ((float*)conv2d_NCHWc_let)[(cse_var_25 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_2_let)[(((ax0_ax1_fused_ax2_outer_fused / 24) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_outer_fused * 96) + cse_var_25) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__3(float* p0, float* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_3_let = (&(global_const_workspace_16_var[842368]));
  void* fused_constant_6_let = (&(global_const_workspace_16_var[815104]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 192; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_17_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_17_var[384]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 64)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 68)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 4; ++oc_block_c_init_18) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 72)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 4; ++oc_block_c_init_19) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 76)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 4; ++oc_block_c_init_20) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_20 + 80)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 4; ++oc_block_c_init_21) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_21 + 84)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 4; ++oc_block_c_init_22) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_22 + 88)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 4; ++oc_block_c_init_23) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_23 + 92)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 8; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 4)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 8)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 12)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 16)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 20)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 24)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 28)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 32)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 36)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 40)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 44)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 48)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 52)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 56)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 60)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 64)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 68)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 72)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 76)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 80)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 84)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 88)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 92)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 24; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_24 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_24] = ((float*)conv2d_NCHWc_global_let)[cse_var_24];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 24; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_25 = (ax3_inner * 4);
        float v_ = ((float*)conv2d_NCHWc_let)[(cse_var_25 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_3_let)[(((ax0_ax1_fused_ax2_outer_fused / 24) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_outer_fused * 96) + cse_var_25) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__4(float* p0, float* T_cast, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_4_let = (&(global_const_workspace_20_var[841856]));
  void* fused_constant_8_let = (&(global_const_workspace_20_var[779264]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 96; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_21_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_21_var[384]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 64)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 68)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 4; ++oc_block_c_init_18) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 72)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 4; ++oc_block_c_init_19) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 76)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 4; ++oc_block_c_init_20) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_20 + 80)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 4; ++oc_block_c_init_21) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_21 + 84)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 4; ++oc_block_c_init_22) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_22 + 88)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 4; ++oc_block_c_init_23) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_23 + 92)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 8; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 4)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 8)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 12)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 16)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 20)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 24)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 28)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 32)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 36)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 40)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 44)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 48)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 52)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 56)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 60)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 64)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 68)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 72)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 76)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 80)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 84)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 88)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 92)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 12; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_24 = (((oh_inner * 48) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_24] = ((float*)conv2d_NCHWc_global_let)[cse_var_24];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 12; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_26 = (ax2_inner * 48);
          int32_t cse_var_25 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_26 + cse_var_25) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_4_let)[(((ax0_ax1_fused_ax2_outer_fused / 6) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 96) + cse_var_26) + cse_var_25) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__5(float* p0, float* T_cast, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_5_let = (&(global_const_workspace_24_var[841600]));
  void* fused_constant_10_let = (&(global_const_workspace_24_var[753664]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 96; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_25_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_25_var[384]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 64)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 68)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 4; ++oc_block_c_init_18) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 72)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 4; ++oc_block_c_init_19) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 76)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 4; ++oc_block_c_init_20) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_20 + 80)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 4; ++oc_block_c_init_21) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_21 + 84)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 4; ++oc_block_c_init_22) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_22 + 88)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 4; ++oc_block_c_init_23) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_23 + 92)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 16; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 4)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 8)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 12)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 16)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 20)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 24)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 28)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 32)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 36)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 40)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 44)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 48)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 52)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 56)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 60)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 64)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 68)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 72)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 76)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 80)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 84)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 88)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 92)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 12; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_24 = (((oh_inner * 48) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_24] = ((float*)conv2d_NCHWc_global_let)[cse_var_24];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 12; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_26 = (ax2_inner * 48);
          int32_t cse_var_25 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_26 + cse_var_25) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_5_let)[(((ax0_ax1_fused_ax2_outer_fused / 6) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 96) + cse_var_26) + cse_var_25) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__6(float* p0, float* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_6_let = (&(global_const_workspace_28_var[838464]));
  void* fused_constant_12_let = (&(global_const_workspace_28_var[720896]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 64; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_29_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_29_var[288]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 64)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 68)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 16; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 3; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 6; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_18 = (((oh_inner * 24) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_18] = ((float*)conv2d_NCHWc_global_let)[cse_var_18];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 3; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_20 = (ax2_inner * 24);
          int32_t cse_var_19 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_20 + cse_var_19) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_6_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_20) + cse_var_19) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__7(float* p0, float* T_cast, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_7_let = (&(global_const_workspace_32_var[837952]));
  void* fused_constant_14_let = (&(global_const_workspace_32_var[655360]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 64; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_33_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_33_var[288]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 64)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 68)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 32; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 3; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 6; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_18 = (((oh_inner * 24) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_18] = ((float*)conv2d_NCHWc_global_let)[cse_var_18];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 3; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_20 = (ax2_inner * 24);
          int32_t cse_var_19 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_20 + cse_var_19) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_7_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_20) + cse_var_19) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__8(float* p0, float* T_cast, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_8_let = (&(global_const_workspace_36_var[837440]));
  void* fused_constant_16_let = (&(global_const_workspace_36_var[589824]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 64; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_37_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_37_var[288]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 64)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 68)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 32; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 3; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 6; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_18 = (((oh_inner * 24) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_18] = ((float*)conv2d_NCHWc_global_let)[cse_var_18];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 3; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_20 = (ax2_inner * 24);
          int32_t cse_var_19 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_20 + cse_var_19) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_8_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_20) + cse_var_19) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__9(float* p0, float* T_cast, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_9_let = (&(global_const_workspace_40_var[836928]));
  void* fused_constant_18_let = (&(global_const_workspace_40_var[524288]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 64; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_41_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_41_var[288]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 64)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 68)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 32; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 3; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 6; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_18 = (((oh_inner * 24) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_18] = ((float*)conv2d_NCHWc_global_let)[cse_var_18];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 3; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_20 = (ax2_inner * 24);
          int32_t cse_var_19 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_20 + cse_var_19) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_9_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_20) + cse_var_19) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109_(float* p0, float* T_multiply, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_13_let = (&(global_const_workspace_56_var[831232]));
  void* fused_constant_26_let = (&(global_const_workspace_56_var[0]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 64; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_57_var[9216]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_57_var[9360]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 64; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[((ic_outer * 36) + ic_inner)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[(((ic_outer * 36) + ic_inner) + 4)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[(((ic_outer * 36) + ic_inner) + 8)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((ic_outer * 36) + ic_inner) + 12)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[(((ic_outer * 36) + ic_inner) + 16)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((ic_outer * 36) + ic_inner) + 20)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[(((ic_outer * 36) + ic_inner) + 24)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((ic_outer * 36) + ic_inner) + 28)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[(((ic_outer * 36) + ic_inner) + 32)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 3; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 3; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_9 = (((oh_inner * 12) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_9] = ((float*)conv2d_NCHWc_global_let)[cse_var_9];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 3; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_11 = (ax2_inner * 12);
          int32_t cse_var_10 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_11 + cse_var_10) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_13_let)[((ax0_ax1_fused_ax2_outer_fused * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 5.373649e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 36) + cse_var_11) + cse_var_10) + ax4)] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128)) * 1.860933e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_14_let = (&(global_const_workspace_64_var[842816]));
  void* fused_constant_27_let = (&(global_const_workspace_64_var[825856]));
  void* conv2d_NCHWc_let = (&(global_workspace_65_var[0]));
  void* conv2d_NCHWc_global_let = (&(global_workspace_65_var[1024]));
  for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
    ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
  }
  for (int32_t ic_outer = 0; ic_outer < 128; ++ic_outer) {
    for (int32_t ic_inner = 0; ic_inner < 2; ++ic_inner) {
      for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
        ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[((ic_outer * 2) + ic_inner)] * ((float*)fused_constant_27_let)[(((ic_outer * 4) + (ic_inner * 2)) + oc_block_c)]));
      }
    }
  }
  for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
    ((float*)conv2d_NCHWc_let)[oc_block] = ((float*)conv2d_NCHWc_global_let)[oc_block];
  }
  for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
    float v_ = roundf(((((float*)conv2d_NCHWc_let)[ax4] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_14_let)[ax4]) * 7.988017e+01f)) + -1.000000e+00f;
    float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
    T_cast[ax4] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f_(float* p0, float* T_cast, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_let = (&(global_const_workspace_6_var[842752]));
  void* fused_constant_1_let = (&(global_const_workspace_6_var[840512]));
  void* PaddedInput_let = (&(global_workspace_7_var[73728]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 100; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 50; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 50);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 200) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 49)) && (1 <= i3)) && (i3 < 49)) ? p0[((((((i0_i1_fused_i2_fused / 50) * 9216) + (cse_var_2 * 192)) + cse_var_1) + i4) - 196)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 96; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_7_var[153728]));
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_7_var[154496]));
      for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
        ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 4; ++oci_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 4)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 4; ++oci_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 8)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 4; ++oci_c_init_3) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 12)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 4; ++oci_c_init_4) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 16)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 4; ++oci_c_init_5) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 20)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_6 = 0; oci_c_init_6 < 4; ++oci_c_init_6) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_6 + 24)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_7 = 0; oci_c_init_7 < 4; ++oci_c_init_7) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_7 + 28)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_8 = 0; oci_c_init_8 < 4; ++oci_c_init_8) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_8 + 32)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_9 = 0; oci_c_init_9 < 4; ++oci_c_init_9) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_9 + 36)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_10 = 0; oci_c_init_10 < 4; ++oci_c_init_10) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_10 + 40)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_11 = 0; oci_c_init_11 < 4; ++oci_c_init_11) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_11 + 44)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_12 = 0; oci_c_init_12 < 4; ++oci_c_init_12) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_12 + 48)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_13 = 0; oci_c_init_13 < 4; ++oci_c_init_13) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_13 + 52)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_14 = 0; oci_c_init_14 < 4; ++oci_c_init_14) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_14 + 56)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_15 = 0; oci_c_init_15 < 4; ++oci_c_init_15) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_15 + 60)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_16 = 0; oci_c_init_16 < 4; ++oci_c_init_16) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_16 + 64)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_17 = 0; oci_c_init_17 < 4; ++oci_c_init_17) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_17 + 68)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_18 = 0; oci_c_init_18 < 4; ++oci_c_init_18) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_18 + 72)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_19 = 0; oci_c_init_19 < 4; ++oci_c_init_19) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_19 + 76)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_20 = 0; oci_c_init_20 < 4; ++oci_c_init_20) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_20 + 80)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_21 = 0; oci_c_init_21 < 4; ++oci_c_init_21) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_21 + 84)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_22 = 0; oci_c_init_22 < 4; ++oci_c_init_22) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_22 + 88)] = 0.000000e+00f;
      }
      for (int32_t oci_c_init_23 = 0; oci_c_init_23 < 4; ++oci_c_init_23) {
        ((float*)DepthwiseConv2d_global_let)[(oci_c_init_23 + 92)] = 0.000000e+00f;
      }
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_4 = (ax1_ax2_fused / 48);
            int32_t cse_var_3 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_3) + oci_c)] * ((float*)fused_constant_1_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
            int32_t cse_var_7 = (ax1_ax2_fused / 48);
            int32_t cse_var_6 = (kw * 4);
            int32_t cse_var_5 = (oci_c_1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_1_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
          }
          for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
            int32_t cse_var_10 = (ax1_ax2_fused / 48);
            int32_t cse_var_9 = (kw * 4);
            int32_t cse_var_8 = (oci_c_2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_1_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
          }
          for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
            int32_t cse_var_13 = (ax1_ax2_fused / 48);
            int32_t cse_var_12 = (kw * 4);
            int32_t cse_var_11 = (oci_c_3 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[(((((((cse_var_13 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_1_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
          }
          for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
            int32_t cse_var_16 = (ax1_ax2_fused / 48);
            int32_t cse_var_15 = (kw * 4);
            int32_t cse_var_14 = (oci_c_4 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[(((((((cse_var_16 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_1_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
          }
          for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
            int32_t cse_var_19 = (ax1_ax2_fused / 48);
            int32_t cse_var_18 = (kw * 4);
            int32_t cse_var_17 = (oci_c_5 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[(((((((cse_var_19 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_1_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
          }
          for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
            int32_t cse_var_22 = (ax1_ax2_fused / 48);
            int32_t cse_var_21 = (kw * 4);
            int32_t cse_var_20 = (oci_c_6 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[(((((((cse_var_22 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_1_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
          }
          for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
            int32_t cse_var_25 = (ax1_ax2_fused / 48);
            int32_t cse_var_24 = (kw * 4);
            int32_t cse_var_23 = (oci_c_7 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[(((((((cse_var_25 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_1_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
          }
          for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
            int32_t cse_var_28 = (ax1_ax2_fused / 48);
            int32_t cse_var_27 = (kw * 4);
            int32_t cse_var_26 = (oci_c_8 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[(((((((cse_var_28 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_1_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
          }
          for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
            int32_t cse_var_31 = (ax1_ax2_fused / 48);
            int32_t cse_var_30 = (kw * 4);
            int32_t cse_var_29 = (oci_c_9 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[(((((((cse_var_31 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_1_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
          }
          for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
            int32_t cse_var_34 = (ax1_ax2_fused / 48);
            int32_t cse_var_33 = (kw * 4);
            int32_t cse_var_32 = (oci_c_10 + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[(((((((cse_var_34 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_1_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
          }
          for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
            int32_t cse_var_37 = (ax1_ax2_fused / 48);
            int32_t cse_var_36 = (kw * 4);
            int32_t cse_var_35 = (oci_c_11 + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[(((((((cse_var_37 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_1_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
          }
          for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
            int32_t cse_var_40 = (ax1_ax2_fused / 48);
            int32_t cse_var_39 = (kw * 4);
            int32_t cse_var_38 = (oci_c_12 + 48);
            ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[(((((((cse_var_40 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_1_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
          }
          for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
            int32_t cse_var_43 = (ax1_ax2_fused / 48);
            int32_t cse_var_42 = (kw * 4);
            int32_t cse_var_41 = (oci_c_13 + 52);
            ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[(((((((cse_var_43 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_42) + oci_c_13) + 52)] * ((float*)fused_constant_1_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
          }
          for (int32_t oci_c_14 = 0; oci_c_14 < 4; ++oci_c_14) {
            int32_t cse_var_46 = (ax1_ax2_fused / 48);
            int32_t cse_var_45 = (kw * 4);
            int32_t cse_var_44 = (oci_c_14 + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[(((((((cse_var_46 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_45) + oci_c_14) + 56)] * ((float*)fused_constant_1_let)[((((cse_var_46 * 36) + (kh * 12)) + cse_var_45) + oci_c_14)]));
          }
          for (int32_t oci_c_15 = 0; oci_c_15 < 4; ++oci_c_15) {
            int32_t cse_var_49 = (ax1_ax2_fused / 48);
            int32_t cse_var_48 = (kw * 4);
            int32_t cse_var_47 = (oci_c_15 + 60);
            ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[(((((((cse_var_49 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_48) + oci_c_15) + 60)] * ((float*)fused_constant_1_let)[((((cse_var_49 * 36) + (kh * 12)) + cse_var_48) + oci_c_15)]));
          }
          for (int32_t oci_c_16 = 0; oci_c_16 < 4; ++oci_c_16) {
            int32_t cse_var_52 = (ax1_ax2_fused / 48);
            int32_t cse_var_51 = (kw * 4);
            int32_t cse_var_50 = (oci_c_16 + 64);
            ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_let)[(((((((cse_var_52 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_51) + oci_c_16) + 64)] * ((float*)fused_constant_1_let)[((((cse_var_52 * 36) + (kh * 12)) + cse_var_51) + oci_c_16)]));
          }
          for (int32_t oci_c_17 = 0; oci_c_17 < 4; ++oci_c_17) {
            int32_t cse_var_55 = (ax1_ax2_fused / 48);
            int32_t cse_var_54 = (kw * 4);
            int32_t cse_var_53 = (oci_c_17 + 68);
            ((float*)DepthwiseConv2d_global_let)[cse_var_53] = (((float*)DepthwiseConv2d_global_let)[cse_var_53] + (((float*)PaddedInput_let)[(((((((cse_var_55 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_54) + oci_c_17) + 68)] * ((float*)fused_constant_1_let)[((((cse_var_55 * 36) + (kh * 12)) + cse_var_54) + oci_c_17)]));
          }
          for (int32_t oci_c_18 = 0; oci_c_18 < 4; ++oci_c_18) {
            int32_t cse_var_58 = (ax1_ax2_fused / 48);
            int32_t cse_var_57 = (kw * 4);
            int32_t cse_var_56 = (oci_c_18 + 72);
            ((float*)DepthwiseConv2d_global_let)[cse_var_56] = (((float*)DepthwiseConv2d_global_let)[cse_var_56] + (((float*)PaddedInput_let)[(((((((cse_var_58 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_57) + oci_c_18) + 72)] * ((float*)fused_constant_1_let)[((((cse_var_58 * 36) + (kh * 12)) + cse_var_57) + oci_c_18)]));
          }
          for (int32_t oci_c_19 = 0; oci_c_19 < 4; ++oci_c_19) {
            int32_t cse_var_61 = (ax1_ax2_fused / 48);
            int32_t cse_var_60 = (kw * 4);
            int32_t cse_var_59 = (oci_c_19 + 76);
            ((float*)DepthwiseConv2d_global_let)[cse_var_59] = (((float*)DepthwiseConv2d_global_let)[cse_var_59] + (((float*)PaddedInput_let)[(((((((cse_var_61 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_60) + oci_c_19) + 76)] * ((float*)fused_constant_1_let)[((((cse_var_61 * 36) + (kh * 12)) + cse_var_60) + oci_c_19)]));
          }
          for (int32_t oci_c_20 = 0; oci_c_20 < 4; ++oci_c_20) {
            int32_t cse_var_64 = (ax1_ax2_fused / 48);
            int32_t cse_var_63 = (kw * 4);
            int32_t cse_var_62 = (oci_c_20 + 80);
            ((float*)DepthwiseConv2d_global_let)[cse_var_62] = (((float*)DepthwiseConv2d_global_let)[cse_var_62] + (((float*)PaddedInput_let)[(((((((cse_var_64 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_63) + oci_c_20) + 80)] * ((float*)fused_constant_1_let)[((((cse_var_64 * 36) + (kh * 12)) + cse_var_63) + oci_c_20)]));
          }
          for (int32_t oci_c_21 = 0; oci_c_21 < 4; ++oci_c_21) {
            int32_t cse_var_67 = (ax1_ax2_fused / 48);
            int32_t cse_var_66 = (kw * 4);
            int32_t cse_var_65 = (oci_c_21 + 84);
            ((float*)DepthwiseConv2d_global_let)[cse_var_65] = (((float*)DepthwiseConv2d_global_let)[cse_var_65] + (((float*)PaddedInput_let)[(((((((cse_var_67 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_66) + oci_c_21) + 84)] * ((float*)fused_constant_1_let)[((((cse_var_67 * 36) + (kh * 12)) + cse_var_66) + oci_c_21)]));
          }
          for (int32_t oci_c_22 = 0; oci_c_22 < 4; ++oci_c_22) {
            int32_t cse_var_70 = (ax1_ax2_fused / 48);
            int32_t cse_var_69 = (kw * 4);
            int32_t cse_var_68 = (oci_c_22 + 88);
            ((float*)DepthwiseConv2d_global_let)[cse_var_68] = (((float*)DepthwiseConv2d_global_let)[cse_var_68] + (((float*)PaddedInput_let)[(((((((cse_var_70 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_69) + oci_c_22) + 88)] * ((float*)fused_constant_1_let)[((((cse_var_70 * 36) + (kh * 12)) + cse_var_69) + oci_c_22)]));
          }
          for (int32_t oci_c_23 = 0; oci_c_23 < 4; ++oci_c_23) {
            int32_t cse_var_73 = (ax1_ax2_fused / 48);
            int32_t cse_var_72 = (kw * 4);
            int32_t cse_var_71 = (oci_c_23 + 92);
            ((float*)DepthwiseConv2d_global_let)[cse_var_71] = (((float*)DepthwiseConv2d_global_let)[cse_var_71] + (((float*)PaddedInput_let)[(((((((cse_var_73 * 10000) + (kh * 200)) + ((ax1_ax2_fused % 48) * 200)) + (ow_outer * 96)) + cse_var_72) + oci_c_23) + 92)] * ((float*)fused_constant_1_let)[((((cse_var_73 * 36) + (kh * 12)) + cse_var_72) + oci_c_23)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 24; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_74 = (ow_inner * 4);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 96) + cse_var_74) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_74 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 24; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_76 = (ax3_outer * 96);
          int32_t cse_var_75 = (ax3_inner * 4);
          float v_ = ((float*)DepthwiseConv2d_let)[((cse_var_76 + cse_var_75) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_let)[(((ax1_ax2_fused / 48) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax1_ax2_fused * 192) + cse_var_76) + cse_var_75) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__1(float* p0, float* T_cast, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_10_var[842624]));
  void* fused_constant_3_let = (&(global_const_workspace_10_var[833280]));
  void* PaddedInput_let = (&(global_workspace_11_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 196; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 49; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 49);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 196) + cse_var_1) + i4)] = (((cse_var_2 < 48) && (i3 < 48)) ? p0[(((((i0_i1_fused_i2_fused / 49) * 9216) + (cse_var_2 * 192)) + cse_var_1) + i4)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 96; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_11_var[153664]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_11_var[154048]));
    for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 4; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 4; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 4; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 4; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 4; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_6 = 0; oci_c_init_6 < 4; ++oci_c_init_6) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_7 = 0; oci_c_init_7 < 4; ++oci_c_init_7) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_8 = 0; oci_c_init_8 < 4; ++oci_c_init_8) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_9 = 0; oci_c_init_9 < 4; ++oci_c_init_9) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_10 = 0; oci_c_init_10 < 4; ++oci_c_init_10) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_11 = 0; oci_c_init_11 < 4; ++oci_c_init_11) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_12 = 0; oci_c_init_12 < 4; ++oci_c_init_12) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_12 + 48)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_13 = 0; oci_c_init_13 < 4; ++oci_c_init_13) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_13 + 52)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_14 = 0; oci_c_init_14 < 4; ++oci_c_init_14) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_14 + 56)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_15 = 0; oci_c_init_15 < 4; ++oci_c_init_15) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_15 + 60)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_16 = 0; oci_c_init_16 < 4; ++oci_c_init_16) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_16 + 64)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_17 = 0; oci_c_init_17 < 4; ++oci_c_init_17) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_17 + 68)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_18 = 0; oci_c_init_18 < 4; ++oci_c_init_18) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_18 + 72)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_19 = 0; oci_c_init_19 < 4; ++oci_c_init_19) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_19 + 76)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_20 = 0; oci_c_init_20 < 4; ++oci_c_init_20) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_20 + 80)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_21 = 0; oci_c_init_21 < 4; ++oci_c_init_21) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_21 + 84)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_22 = 0; oci_c_init_22 < 4; ++oci_c_init_22) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_22 + 88)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_23 = 0; oci_c_init_23 < 4; ++oci_c_init_23) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_23 + 92)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 24);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_3) + oci_c)] * ((float*)fused_constant_3_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 24);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_3_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 24);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_3_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 24);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_12) + oci_c_3) + 24)] * ((float*)fused_constant_3_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 24);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_15) + oci_c_4) + 32)] * ((float*)fused_constant_3_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 24);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_18) + oci_c_5) + 40)] * ((float*)fused_constant_3_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 24);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_21) + oci_c_6) + 48)] * ((float*)fused_constant_3_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 24);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_24) + oci_c_7) + 56)] * ((float*)fused_constant_3_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 24);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_27) + oci_c_8) + 64)] * ((float*)fused_constant_3_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 24);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_30) + oci_c_9) + 72)] * ((float*)fused_constant_3_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 24);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_33) + oci_c_10) + 80)] * ((float*)fused_constant_3_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 24);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_36) + oci_c_11) + 88)] * ((float*)fused_constant_3_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 24);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_39) + oci_c_12) + 96)] * ((float*)fused_constant_3_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 24);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_42) + oci_c_13) + 104)] * ((float*)fused_constant_3_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
        for (int32_t oci_c_14 = 0; oci_c_14 < 4; ++oci_c_14) {
          int32_t cse_var_46 = (ax1_ax2_fused / 24);
          int32_t cse_var_45 = (kw * 4);
          int32_t cse_var_44 = (oci_c_14 + 56);
          ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[((((((cse_var_46 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_45) + oci_c_14) + 112)] * ((float*)fused_constant_3_let)[((((cse_var_46 * 36) + (kh * 12)) + cse_var_45) + oci_c_14)]));
        }
        for (int32_t oci_c_15 = 0; oci_c_15 < 4; ++oci_c_15) {
          int32_t cse_var_49 = (ax1_ax2_fused / 24);
          int32_t cse_var_48 = (kw * 4);
          int32_t cse_var_47 = (oci_c_15 + 60);
          ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[((((((cse_var_49 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_48) + oci_c_15) + 120)] * ((float*)fused_constant_3_let)[((((cse_var_49 * 36) + (kh * 12)) + cse_var_48) + oci_c_15)]));
        }
        for (int32_t oci_c_16 = 0; oci_c_16 < 4; ++oci_c_16) {
          int32_t cse_var_52 = (ax1_ax2_fused / 24);
          int32_t cse_var_51 = (kw * 4);
          int32_t cse_var_50 = (oci_c_16 + 64);
          ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_let)[((((((cse_var_52 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_51) + oci_c_16) + 128)] * ((float*)fused_constant_3_let)[((((cse_var_52 * 36) + (kh * 12)) + cse_var_51) + oci_c_16)]));
        }
        for (int32_t oci_c_17 = 0; oci_c_17 < 4; ++oci_c_17) {
          int32_t cse_var_55 = (ax1_ax2_fused / 24);
          int32_t cse_var_54 = (kw * 4);
          int32_t cse_var_53 = (oci_c_17 + 68);
          ((float*)DepthwiseConv2d_global_let)[cse_var_53] = (((float*)DepthwiseConv2d_global_let)[cse_var_53] + (((float*)PaddedInput_let)[((((((cse_var_55 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_54) + oci_c_17) + 136)] * ((float*)fused_constant_3_let)[((((cse_var_55 * 36) + (kh * 12)) + cse_var_54) + oci_c_17)]));
        }
        for (int32_t oci_c_18 = 0; oci_c_18 < 4; ++oci_c_18) {
          int32_t cse_var_58 = (ax1_ax2_fused / 24);
          int32_t cse_var_57 = (kw * 4);
          int32_t cse_var_56 = (oci_c_18 + 72);
          ((float*)DepthwiseConv2d_global_let)[cse_var_56] = (((float*)DepthwiseConv2d_global_let)[cse_var_56] + (((float*)PaddedInput_let)[((((((cse_var_58 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_57) + oci_c_18) + 144)] * ((float*)fused_constant_3_let)[((((cse_var_58 * 36) + (kh * 12)) + cse_var_57) + oci_c_18)]));
        }
        for (int32_t oci_c_19 = 0; oci_c_19 < 4; ++oci_c_19) {
          int32_t cse_var_61 = (ax1_ax2_fused / 24);
          int32_t cse_var_60 = (kw * 4);
          int32_t cse_var_59 = (oci_c_19 + 76);
          ((float*)DepthwiseConv2d_global_let)[cse_var_59] = (((float*)DepthwiseConv2d_global_let)[cse_var_59] + (((float*)PaddedInput_let)[((((((cse_var_61 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_60) + oci_c_19) + 152)] * ((float*)fused_constant_3_let)[((((cse_var_61 * 36) + (kh * 12)) + cse_var_60) + oci_c_19)]));
        }
        for (int32_t oci_c_20 = 0; oci_c_20 < 4; ++oci_c_20) {
          int32_t cse_var_64 = (ax1_ax2_fused / 24);
          int32_t cse_var_63 = (kw * 4);
          int32_t cse_var_62 = (oci_c_20 + 80);
          ((float*)DepthwiseConv2d_global_let)[cse_var_62] = (((float*)DepthwiseConv2d_global_let)[cse_var_62] + (((float*)PaddedInput_let)[((((((cse_var_64 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_63) + oci_c_20) + 160)] * ((float*)fused_constant_3_let)[((((cse_var_64 * 36) + (kh * 12)) + cse_var_63) + oci_c_20)]));
        }
        for (int32_t oci_c_21 = 0; oci_c_21 < 4; ++oci_c_21) {
          int32_t cse_var_67 = (ax1_ax2_fused / 24);
          int32_t cse_var_66 = (kw * 4);
          int32_t cse_var_65 = (oci_c_21 + 84);
          ((float*)DepthwiseConv2d_global_let)[cse_var_65] = (((float*)DepthwiseConv2d_global_let)[cse_var_65] + (((float*)PaddedInput_let)[((((((cse_var_67 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_66) + oci_c_21) + 168)] * ((float*)fused_constant_3_let)[((((cse_var_67 * 36) + (kh * 12)) + cse_var_66) + oci_c_21)]));
        }
        for (int32_t oci_c_22 = 0; oci_c_22 < 4; ++oci_c_22) {
          int32_t cse_var_70 = (ax1_ax2_fused / 24);
          int32_t cse_var_69 = (kw * 4);
          int32_t cse_var_68 = (oci_c_22 + 88);
          ((float*)DepthwiseConv2d_global_let)[cse_var_68] = (((float*)DepthwiseConv2d_global_let)[cse_var_68] + (((float*)PaddedInput_let)[((((((cse_var_70 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_69) + oci_c_22) + 176)] * ((float*)fused_constant_3_let)[((((cse_var_70 * 36) + (kh * 12)) + cse_var_69) + oci_c_22)]));
        }
        for (int32_t oci_c_23 = 0; oci_c_23 < 4; ++oci_c_23) {
          int32_t cse_var_73 = (ax1_ax2_fused / 24);
          int32_t cse_var_72 = (kw * 4);
          int32_t cse_var_71 = (oci_c_23 + 92);
          ((float*)DepthwiseConv2d_global_let)[cse_var_71] = (((float*)DepthwiseConv2d_global_let)[cse_var_71] + (((float*)PaddedInput_let)[((((((cse_var_73 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_72) + oci_c_23) + 184)] * ((float*)fused_constant_3_let)[((((cse_var_73 * 36) + (kh * 12)) + cse_var_72) + oci_c_23)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 24; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_74 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_74] = ((float*)DepthwiseConv2d_global_let)[cse_var_74];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 24; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_75 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_75 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_1_let)[(((ax1_ax2_fused / 24) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax1_ax2_fused * 96) + cse_var_75) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__10(float* p0, float* T_cast, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_10_let = (&(global_const_workspace_46_var[836416]));
  void* fused_constant_21_let = (&(global_const_workspace_46_var[792064]));
  void* PaddedInput_let = (&(global_workspace_47_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 256; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 8; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 7);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 32) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 7)) && (1 <= i3)) && (i3 < 7)) ? p0[((((((i0_i1_fused_i2_fused >> 3) * 144) + (cse_var_2 * 24)) + cse_var_1) + i4) - 28)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 192; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_47_var[51200]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_47_var[51296]));
    for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 4; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 4; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 4; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 4; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 4; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 6);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_3) + oci_c)] * ((float*)fused_constant_21_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 6);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_21_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 6);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_21_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 6);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_21_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 6);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_21_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 6);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_21_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 6; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_20 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_20] = ((float*)DepthwiseConv2d_global_let)[cse_var_20];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_21 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_21 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_10_let)[(((ax1_ax2_fused / 6) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax1_ax2_fused * 24) + cse_var_21) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__11(float* p0, float* T_cast, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_11_let = (&(global_const_workspace_50_var[835904]));
  void* fused_constant_23_let = (&(global_const_workspace_50_var[787456]));
  void* PaddedInput_let = (&(global_workspace_51_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 224; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 7; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 7);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 28) + cse_var_1) + i4)] = (((cse_var_2 < 6) && (i3 < 6)) ? p0[(((((i0_i1_fused_i2_fused / 7) * 144) + (cse_var_2 * 24)) + cse_var_1) + i4)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 96; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_51_var[25088]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_51_var[25136]));
    for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 4; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 4; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 3);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 196) + ((ax1_ax2_fused % 3) * 56)) + (kh * 28)) + cse_var_3) + oci_c)] * ((float*)fused_constant_23_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 3);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 196) + ((ax1_ax2_fused % 3) * 56)) + (kh * 28)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_23_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 3);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 196) + ((ax1_ax2_fused % 3) * 56)) + (kh * 28)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_23_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 3; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_11 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_11] = ((float*)DepthwiseConv2d_global_let)[cse_var_11];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_12 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_12 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_11_let)[(((ax1_ax2_fused / 3) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax1_ax2_fused * 12) + cse_var_12) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__12(float* p0, float* T_cast, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_12_let = (&(global_const_workspace_54_var[830208]));
  void* fused_constant_25_let = (&(global_const_workspace_54_var[770048]));
  void* PaddedInput_let = (&(global_workspace_55_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 320; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 5; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 5);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 20) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 4)) && (1 <= i3)) && (i3 < 4)) ? p0[((((((i0_i1_fused_i2_fused / 5) * 36) + (cse_var_2 * 12)) + cse_var_1) + i4) - 16)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 192; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_55_var[34816]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_55_var[34864]));
    for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 4; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 4; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 3);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 100) + (kh * 20)) + ((ax1_ax2_fused % 3) * 20)) + cse_var_3) + oci_c)] * ((float*)fused_constant_25_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 3);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 100) + (kh * 20)) + ((ax1_ax2_fused % 3) * 20)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_25_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 3);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 100) + (kh * 20)) + ((ax1_ax2_fused % 3) * 20)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_25_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 3; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_11 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_11] = ((float*)DepthwiseConv2d_global_let)[cse_var_11];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_12 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_12 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_12_let)[(((ax1_ax2_fused / 3) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax1_ax2_fused * 12) + cse_var_12) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__2(float* p0, float* T_cast, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_2_let = (&(global_const_workspace_14_var[842240]));
  void* fused_constant_5_let = (&(global_const_workspace_14_var[829056]));
  void* PaddedInput_let = (&(global_workspace_15_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 208; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 26; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 26);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 104) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 25)) && (1 <= i3)) && (i3 < 25)) ? p0[((((((i0_i1_fused_i2_fused / 26) * 2304) + (cse_var_2 * 96)) + cse_var_1) + i4) - 100)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 192; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_15_var[160256]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_15_var[160640]));
    for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 4; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 4; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 4; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 4; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 4; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_6 = 0; oci_c_init_6 < 4; ++oci_c_init_6) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_7 = 0; oci_c_init_7 < 4; ++oci_c_init_7) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_8 = 0; oci_c_init_8 < 4; ++oci_c_init_8) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_9 = 0; oci_c_init_9 < 4; ++oci_c_init_9) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_10 = 0; oci_c_init_10 < 4; ++oci_c_init_10) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_11 = 0; oci_c_init_11 < 4; ++oci_c_init_11) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_12 = 0; oci_c_init_12 < 4; ++oci_c_init_12) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_12 + 48)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_13 = 0; oci_c_init_13 < 4; ++oci_c_init_13) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_13 + 52)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_14 = 0; oci_c_init_14 < 4; ++oci_c_init_14) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_14 + 56)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_15 = 0; oci_c_init_15 < 4; ++oci_c_init_15) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_15 + 60)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_16 = 0; oci_c_init_16 < 4; ++oci_c_init_16) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_16 + 64)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_17 = 0; oci_c_init_17 < 4; ++oci_c_init_17) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_17 + 68)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_18 = 0; oci_c_init_18 < 4; ++oci_c_init_18) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_18 + 72)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_19 = 0; oci_c_init_19 < 4; ++oci_c_init_19) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_19 + 76)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_20 = 0; oci_c_init_20 < 4; ++oci_c_init_20) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_20 + 80)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_21 = 0; oci_c_init_21 < 4; ++oci_c_init_21) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_21 + 84)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_22 = 0; oci_c_init_22 < 4; ++oci_c_init_22) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_22 + 88)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_23 = 0; oci_c_init_23 < 4; ++oci_c_init_23) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_23 + 92)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 24);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_3) + oci_c)] * ((float*)fused_constant_5_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 24);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_5_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 24);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_5_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 24);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_5_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 24);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_5_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 24);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_5_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 24);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_5_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 24);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_5_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 24);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_5_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 24);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_5_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 24);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_5_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 24);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_5_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 24);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_5_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 24);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_42) + oci_c_13) + 52)] * ((float*)fused_constant_5_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
        for (int32_t oci_c_14 = 0; oci_c_14 < 4; ++oci_c_14) {
          int32_t cse_var_46 = (ax1_ax2_fused / 24);
          int32_t cse_var_45 = (kw * 4);
          int32_t cse_var_44 = (oci_c_14 + 56);
          ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[((((((cse_var_46 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_45) + oci_c_14) + 56)] * ((float*)fused_constant_5_let)[((((cse_var_46 * 36) + (kh * 12)) + cse_var_45) + oci_c_14)]));
        }
        for (int32_t oci_c_15 = 0; oci_c_15 < 4; ++oci_c_15) {
          int32_t cse_var_49 = (ax1_ax2_fused / 24);
          int32_t cse_var_48 = (kw * 4);
          int32_t cse_var_47 = (oci_c_15 + 60);
          ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[((((((cse_var_49 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_48) + oci_c_15) + 60)] * ((float*)fused_constant_5_let)[((((cse_var_49 * 36) + (kh * 12)) + cse_var_48) + oci_c_15)]));
        }
        for (int32_t oci_c_16 = 0; oci_c_16 < 4; ++oci_c_16) {
          int32_t cse_var_52 = (ax1_ax2_fused / 24);
          int32_t cse_var_51 = (kw * 4);
          int32_t cse_var_50 = (oci_c_16 + 64);
          ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_let)[((((((cse_var_52 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_51) + oci_c_16) + 64)] * ((float*)fused_constant_5_let)[((((cse_var_52 * 36) + (kh * 12)) + cse_var_51) + oci_c_16)]));
        }
        for (int32_t oci_c_17 = 0; oci_c_17 < 4; ++oci_c_17) {
          int32_t cse_var_55 = (ax1_ax2_fused / 24);
          int32_t cse_var_54 = (kw * 4);
          int32_t cse_var_53 = (oci_c_17 + 68);
          ((float*)DepthwiseConv2d_global_let)[cse_var_53] = (((float*)DepthwiseConv2d_global_let)[cse_var_53] + (((float*)PaddedInput_let)[((((((cse_var_55 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_54) + oci_c_17) + 68)] * ((float*)fused_constant_5_let)[((((cse_var_55 * 36) + (kh * 12)) + cse_var_54) + oci_c_17)]));
        }
        for (int32_t oci_c_18 = 0; oci_c_18 < 4; ++oci_c_18) {
          int32_t cse_var_58 = (ax1_ax2_fused / 24);
          int32_t cse_var_57 = (kw * 4);
          int32_t cse_var_56 = (oci_c_18 + 72);
          ((float*)DepthwiseConv2d_global_let)[cse_var_56] = (((float*)DepthwiseConv2d_global_let)[cse_var_56] + (((float*)PaddedInput_let)[((((((cse_var_58 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_57) + oci_c_18) + 72)] * ((float*)fused_constant_5_let)[((((cse_var_58 * 36) + (kh * 12)) + cse_var_57) + oci_c_18)]));
        }
        for (int32_t oci_c_19 = 0; oci_c_19 < 4; ++oci_c_19) {
          int32_t cse_var_61 = (ax1_ax2_fused / 24);
          int32_t cse_var_60 = (kw * 4);
          int32_t cse_var_59 = (oci_c_19 + 76);
          ((float*)DepthwiseConv2d_global_let)[cse_var_59] = (((float*)DepthwiseConv2d_global_let)[cse_var_59] + (((float*)PaddedInput_let)[((((((cse_var_61 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_60) + oci_c_19) + 76)] * ((float*)fused_constant_5_let)[((((cse_var_61 * 36) + (kh * 12)) + cse_var_60) + oci_c_19)]));
        }
        for (int32_t oci_c_20 = 0; oci_c_20 < 4; ++oci_c_20) {
          int32_t cse_var_64 = (ax1_ax2_fused / 24);
          int32_t cse_var_63 = (kw * 4);
          int32_t cse_var_62 = (oci_c_20 + 80);
          ((float*)DepthwiseConv2d_global_let)[cse_var_62] = (((float*)DepthwiseConv2d_global_let)[cse_var_62] + (((float*)PaddedInput_let)[((((((cse_var_64 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_63) + oci_c_20) + 80)] * ((float*)fused_constant_5_let)[((((cse_var_64 * 36) + (kh * 12)) + cse_var_63) + oci_c_20)]));
        }
        for (int32_t oci_c_21 = 0; oci_c_21 < 4; ++oci_c_21) {
          int32_t cse_var_67 = (ax1_ax2_fused / 24);
          int32_t cse_var_66 = (kw * 4);
          int32_t cse_var_65 = (oci_c_21 + 84);
          ((float*)DepthwiseConv2d_global_let)[cse_var_65] = (((float*)DepthwiseConv2d_global_let)[cse_var_65] + (((float*)PaddedInput_let)[((((((cse_var_67 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_66) + oci_c_21) + 84)] * ((float*)fused_constant_5_let)[((((cse_var_67 * 36) + (kh * 12)) + cse_var_66) + oci_c_21)]));
        }
        for (int32_t oci_c_22 = 0; oci_c_22 < 4; ++oci_c_22) {
          int32_t cse_var_70 = (ax1_ax2_fused / 24);
          int32_t cse_var_69 = (kw * 4);
          int32_t cse_var_68 = (oci_c_22 + 88);
          ((float*)DepthwiseConv2d_global_let)[cse_var_68] = (((float*)DepthwiseConv2d_global_let)[cse_var_68] + (((float*)PaddedInput_let)[((((((cse_var_70 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_69) + oci_c_22) + 88)] * ((float*)fused_constant_5_let)[((((cse_var_70 * 36) + (kh * 12)) + cse_var_69) + oci_c_22)]));
        }
        for (int32_t oci_c_23 = 0; oci_c_23 < 4; ++oci_c_23) {
          int32_t cse_var_73 = (ax1_ax2_fused / 24);
          int32_t cse_var_72 = (kw * 4);
          int32_t cse_var_71 = (oci_c_23 + 92);
          ((float*)DepthwiseConv2d_global_let)[cse_var_71] = (((float*)DepthwiseConv2d_global_let)[cse_var_71] + (((float*)PaddedInput_let)[((((((cse_var_73 * 2704) + (kh * 104)) + ((ax1_ax2_fused % 24) * 104)) + cse_var_72) + oci_c_23) + 92)] * ((float*)fused_constant_5_let)[((((cse_var_73 * 36) + (kh * 12)) + cse_var_72) + oci_c_23)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 24; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_74 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_74] = ((float*)DepthwiseConv2d_global_let)[cse_var_74];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 24; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_75 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_75 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_2_let)[(((ax1_ax2_fused / 24) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax1_ax2_fused * 96) + cse_var_75) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__3(float* p0, float* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_3_let = (&(global_const_workspace_18_var[842112]));
  void* fused_constant_7_let = (&(global_const_workspace_18_var[827904]));
  void* PaddedInput_let = (&(global_workspace_19_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 200; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 25; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 25);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 100) + cse_var_1) + i4)] = (((cse_var_2 < 24) && (i3 < 24)) ? p0[(((((i0_i1_fused_i2_fused / 25) * 2304) + (cse_var_2 * 96)) + cse_var_1) + i4)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 96; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_19_var[80000]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_19_var[80192]));
    for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 4; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 4; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 4; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 4; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 4; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_6 = 0; oci_c_init_6 < 4; ++oci_c_init_6) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_7 = 0; oci_c_init_7 < 4; ++oci_c_init_7) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_8 = 0; oci_c_init_8 < 4; ++oci_c_init_8) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_9 = 0; oci_c_init_9 < 4; ++oci_c_init_9) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_10 = 0; oci_c_init_10 < 4; ++oci_c_init_10) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_11 = 0; oci_c_init_11 < 4; ++oci_c_init_11) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 12);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_3) + oci_c)] * ((float*)fused_constant_7_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 12);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_7_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 12);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_7_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 12);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_12) + oci_c_3) + 24)] * ((float*)fused_constant_7_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 12);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_15) + oci_c_4) + 32)] * ((float*)fused_constant_7_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 12);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_18) + oci_c_5) + 40)] * ((float*)fused_constant_7_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 12);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_21) + oci_c_6) + 48)] * ((float*)fused_constant_7_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 12);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_24) + oci_c_7) + 56)] * ((float*)fused_constant_7_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 12);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_27) + oci_c_8) + 64)] * ((float*)fused_constant_7_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 12);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_30) + oci_c_9) + 72)] * ((float*)fused_constant_7_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 12);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_33) + oci_c_10) + 80)] * ((float*)fused_constant_7_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 12);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_36) + oci_c_11) + 88)] * ((float*)fused_constant_7_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 12; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_38 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_38] = ((float*)DepthwiseConv2d_global_let)[cse_var_38];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 12; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_39 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_39 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_3_let)[(((ax1_ax2_fused / 12) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax1_ax2_fused * 48) + cse_var_39) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__4(float* p0, float* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_4_let = (&(global_const_workspace_22_var[841344]));
  void* fused_constant_9_let = (&(global_const_workspace_22_var[819200]));
  void* PaddedInput_let = (&(global_workspace_23_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 224; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 14; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 14);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 56) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 13)) && (1 <= i3)) && (i3 < 13)) ? p0[((((((i0_i1_fused_i2_fused / 14) * 576) + (cse_var_2 * 48)) + cse_var_1) + i4) - 52)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 192; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_23_var[87040]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_23_var[87232]));
    for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 4; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 4; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 4; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 4; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 4; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_6 = 0; oci_c_init_6 < 4; ++oci_c_init_6) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_7 = 0; oci_c_init_7 < 4; ++oci_c_init_7) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_8 = 0; oci_c_init_8 < 4; ++oci_c_init_8) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_9 = 0; oci_c_init_9 < 4; ++oci_c_init_9) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_10 = 0; oci_c_init_10 < 4; ++oci_c_init_10) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_11 = 0; oci_c_init_11 < 4; ++oci_c_init_11) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 12);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_3) + oci_c)] * ((float*)fused_constant_9_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 12);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_9_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 12);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_9_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 12);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_9_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 12);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_9_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 12);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_9_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 12);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_9_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 12);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_9_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 12);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_9_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 12);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_9_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 12);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_9_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 12);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_9_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 12; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_38 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_38] = ((float*)DepthwiseConv2d_global_let)[cse_var_38];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 12; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_39 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_39 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_4_let)[(((ax1_ax2_fused / 12) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax1_ax2_fused * 48) + cse_var_39) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__5(float* p0, float* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_5_let = (&(global_const_workspace_26_var[841088]));
  void* fused_constant_11_let = (&(global_const_workspace_26_var[821504]));
  void* PaddedInput_let = (&(global_workspace_27_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 208; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 13; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 13);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 52) + cse_var_1) + i4)] = (((cse_var_2 < 12) && (i3 < 12)) ? p0[(((((i0_i1_fused_i2_fused / 13) * 576) + (cse_var_2 * 48)) + cse_var_1) + i4)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 96; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_27_var[43264]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_27_var[43360]));
    for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 4; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 4; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 4; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 4; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 4; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 6);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 676) + ((ax1_ax2_fused % 6) * 104)) + (kh * 52)) + cse_var_3) + oci_c)] * ((float*)fused_constant_11_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 6);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 676) + ((ax1_ax2_fused % 6) * 104)) + (kh * 52)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_11_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 6);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 676) + ((ax1_ax2_fused % 6) * 104)) + (kh * 52)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_11_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 6);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 676) + ((ax1_ax2_fused % 6) * 104)) + (kh * 52)) + cse_var_12) + oci_c_3) + 24)] * ((float*)fused_constant_11_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 6);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 676) + ((ax1_ax2_fused % 6) * 104)) + (kh * 52)) + cse_var_15) + oci_c_4) + 32)] * ((float*)fused_constant_11_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 6);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 676) + ((ax1_ax2_fused % 6) * 104)) + (kh * 52)) + cse_var_18) + oci_c_5) + 40)] * ((float*)fused_constant_11_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 6; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_20 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_20] = ((float*)DepthwiseConv2d_global_let)[cse_var_20];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_21 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_21 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_5_let)[(((ax1_ax2_fused / 6) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax1_ax2_fused * 24) + cse_var_21) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__6(float* p0, float* T_cast, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_6_let = (&(global_const_workspace_30_var[835392]));
  void* fused_constant_13_let = (&(global_const_workspace_30_var[810496]));
  void* PaddedInput_let = (&(global_workspace_31_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 256; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 8; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 7);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 32) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 7)) && (1 <= i3)) && (i3 < 7)) ? p0[((((((i0_i1_fused_i2_fused >> 3) * 144) + (cse_var_2 * 24)) + cse_var_1) + i4) - 28)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 192; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_31_var[51200]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_31_var[51296]));
    for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 4; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 4; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 4; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 4; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 4; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 6);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_3) + oci_c)] * ((float*)fused_constant_13_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 6);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_13_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 6);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_13_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 6);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_13_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 6);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_13_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 6);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_13_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 6; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_20 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_20] = ((float*)DepthwiseConv2d_global_let)[cse_var_20];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_21 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_21 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_6_let)[(((ax1_ax2_fused / 6) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax1_ax2_fused * 24) + cse_var_21) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__7(float* p0, float* T_cast, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_7_let = (&(global_const_workspace_34_var[834880]));
  void* fused_constant_15_let = (&(global_const_workspace_34_var[805888]));
  void* PaddedInput_let = (&(global_workspace_35_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 256; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 8; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 7);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 32) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 7)) && (1 <= i3)) && (i3 < 7)) ? p0[((((((i0_i1_fused_i2_fused >> 3) * 144) + (cse_var_2 * 24)) + cse_var_1) + i4) - 28)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 192; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_35_var[51200]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_35_var[51296]));
    for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 4; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 4; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 4; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 4; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 4; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 6);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_3) + oci_c)] * ((float*)fused_constant_15_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 6);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_15_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 6);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_15_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 6);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_15_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 6);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_15_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 6);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_15_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 6; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_20 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_20] = ((float*)DepthwiseConv2d_global_let)[cse_var_20];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_21 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_21 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_7_let)[(((ax1_ax2_fused / 6) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax1_ax2_fused * 24) + cse_var_21) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__8(float* p0, float* T_cast, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_8_let = (&(global_const_workspace_38_var[834368]));
  void* fused_constant_17_let = (&(global_const_workspace_38_var[801280]));
  void* PaddedInput_let = (&(global_workspace_39_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 256; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 8; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 7);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 32) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 7)) && (1 <= i3)) && (i3 < 7)) ? p0[((((((i0_i1_fused_i2_fused >> 3) * 144) + (cse_var_2 * 24)) + cse_var_1) + i4) - 28)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 192; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_39_var[51200]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_39_var[51296]));
    for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 4; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 4; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 4; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 4; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 4; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 6);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_3) + oci_c)] * ((float*)fused_constant_17_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 6);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_17_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 6);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_17_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 6);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_17_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 6);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_17_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 6);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_17_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 6; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_20 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_20] = ((float*)DepthwiseConv2d_global_let)[cse_var_20];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_21 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_21 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_8_let)[(((ax1_ax2_fused / 6) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax1_ax2_fused * 24) + cse_var_21) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__9(float* p0, float* T_cast, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_9_let = (&(global_const_workspace_42_var[833856]));
  void* fused_constant_19_let = (&(global_const_workspace_42_var[796672]));
  void* PaddedInput_let = (&(global_workspace_43_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 256; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 8; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 7);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 32) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 7)) && (1 <= i3)) && (i3 < 7)) ? p0[((((((i0_i1_fused_i2_fused >> 3) * 144) + (cse_var_2 * 24)) + cse_var_1) + i4) - 28)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 192; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_43_var[51200]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_43_var[51296]));
    for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 4; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 4; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 4; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 4; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 4; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 6);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_3) + oci_c)] * ((float*)fused_constant_19_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 6);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_19_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 6);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_19_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 6);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_19_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 6);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_19_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 6);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_19_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 6; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_20 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_20] = ((float*)DepthwiseConv2d_global_let)[cse_var_20];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_21 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_21 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_9_let)[(((ax1_ax2_fused / 6) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax1_ax2_fused * 24) + cse_var_21) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_69_var[32]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 2; ++k) {
    float v_ = ((float*)T_softmax_maxelem_let)[0];
    float v__1 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  void* T_softmax_exp_let = (&(global_workspace_69_var[0]));
  for (int32_t i1 = 0; i1 < 2; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  void* T_softmax_expsum_let = (&(global_workspace_69_var[32]));
  ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 2; ++k_1) {
    ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
  }
  void* T_softmax_norm_let = (&(global_workspace_69_var[16]));
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    ((float*)T_softmax_norm_let)[i1_1] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    float v__2 = roundf((((float*)T_softmax_norm_let)[ax1] * 2.560000e+02f)) + -1.280000e+02f;
    float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
    T_cast[ax1] = ((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract_cast_layout_transform(int8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 96; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused * 96) + ax3);
      T_layout_trans[cse_var_1] = ((float)(((int32_t)p0[cse_var_1]) + 1));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(int8_t* input_buffer_var, int8_t* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_26_let = (&(global_workspace_1_var[25600]));
  void* sid_22_let = (&(global_workspace_1_var[51200]));
  void* sid_21_let = (&(global_workspace_1_var[32768]));
  void* sid_32_let = (&(global_workspace_1_var[32]));
  void* sid_25_let = (&(global_workspace_1_var[34816]));
  void* sid_29_let = (&(global_workspace_1_var[9216]));
  void* sid_20_let = (&(global_workspace_1_var[51200]));
  void* sid_17_let = (&(global_workspace_1_var[32768]));
  void* sid_28_let = (&(global_workspace_1_var[0]));
  void* sid_24_let = (&(global_workspace_1_var[51200]));
  void* sid_16_let = (&(global_workspace_1_var[51200]));
  void* sid_27_let = (&(global_workspace_1_var[25600]));
  void* sid_23_let = (&(global_workspace_1_var[32768]));
  void* sid_30_let = (&(global_workspace_1_var[1024]));
  void* sid_1_let = (&(global_workspace_1_var[0]));
  void* sid_15_let = (&(global_workspace_1_var[32768]));
  void* sid_19_let = (&(global_workspace_1_var[32768]));
  void* sid_6_let = (&(global_workspace_1_var[86528]));
  void* sid_4_let = (&(global_workspace_1_var[153664]));
  void* sid_8_let = (&(global_workspace_1_var[160256]));
  void* sid_5_let = (&(global_workspace_1_var[160256]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[87040]));
  void* sid_10_let = (&(global_workspace_1_var[50176]));
  void* sid_7_let = (&(global_workspace_1_var[86528]));
  void* sid_2_let = (&(global_workspace_1_var[0]));
  void* sid_11_let = (&(global_workspace_1_var[50176]));
  void* sid_12_let = (&(global_workspace_1_var[87040]));
  void* sid_18_let = (&(global_workspace_1_var[51200]));
  void* sid_13_let = (&(global_workspace_1_var[51200]));
  void* sid_14_let = (&(global_workspace_1_var[32768]));
  void* sid_31_let = (&(global_workspace_1_var[0]));
  void* sid_33_let = (&(global_workspace_1_var[16]));
  if (tvmgen_default_fused_reshape_cast_subtract_cast_layout_transform(input_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96_(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f_(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__1(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__1(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__2(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__2(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__3(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__3(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__4(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__4(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__5(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__5(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__6(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__6(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__7(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__7(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__8(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__8(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__9(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__9(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__10(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__10(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__11(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__11(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__12(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__12(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109_(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_layout_transform(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_avg_pool2d_divide_round_add_clip_cast(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_reshape_cast_subtract_cast_layout_transform(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_reshape_cast_subtract_cast_multiply(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(sid_33_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

