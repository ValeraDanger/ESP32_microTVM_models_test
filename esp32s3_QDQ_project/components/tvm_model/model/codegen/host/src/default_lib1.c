// tvm target: c -keys=cpu -model=esp32
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          T_layout_trans[((((ax0_ax1_fused * 512) + (ax2 * 64)) + (ax3_outer * 16)) + ax3_inner)] = p0[(((((ax3_outer * 1024) + ((ax3_inner >> 2) * 256)) + (ax0_ax1_fused * 32)) + (ax2 * 4)) + (ax3_inner & 3))];
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_reshape_divide_round_clip(float* p0, float* compute, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  for (int32_t i1_outer = 0; i1_outer < 4; ++i1_outer) {
    for (int32_t i1_inner = 0; i1_inner < 16; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 16) + i1_inner);
      float v_ = roundf((p0[cse_var_1] * 3.919435e+00f));
      float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
      compute[cse_var_1] = ((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_divide_round_clip_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* pool_sum_let = (&(global_workspace_25_var[0]));
  for (int32_t ax3_init = 0; ax3_init < 64; ++ax3_init) {
    ((float*)pool_sum_let)[ax3_init] = 0.000000e+00f;
  }
  for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 64; ++rv0_rv1_fused) {
    for (int32_t ax3 = 0; ax3 < 64; ++ax3) {
      ((float*)pool_sum_let)[ax3] = (((float*)pool_sum_let)[ax3] + p0[((rv0_rv1_fused * 64) + ax3)]);
    }
  }
  for (int32_t ax3_1 = 0; ax3_1 < 64; ++ax3_1) {
    float v_ = roundf(((((float*)pool_sum_let)[ax3_1] * 1.562500e-02f) * 3.919435e+00f));
    float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
    T_multiply[ax3_1] = (((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)) * 2.551388e-01f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_nn_relu_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_let = (&(global_const_workspace_4_var[310720]));
  void* fused_constant_let = (&(global_const_workspace_4_var[307712]));
  void* data_pad_let = (&(global_workspace_5_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 34; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 34; ++i3) {
      for (int32_t i4 = 0; i4 < 3; ++i4) {
        int32_t cse_var_1 = (i3 * 3);
        ((float*)data_pad_let)[(((i0_i1_fused_i2_fused * 102) + cse_var_1) + i4)] = (((((1 <= i0_i1_fused_i2_fused) && (i0_i1_fused_i2_fused < 33)) && (1 <= i3)) && (i3 < 33)) ? p0[((((i0_i1_fused_i2_fused * 96) + cse_var_1) + i4) - 99)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_5_var[13872]));
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      void* conv2d_NCHWc_global_let = (&(global_workspace_5_var[14384]));
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
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 3; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (((float*)data_pad_let)[(((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c)]));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_2 = (oc_block_c_1 + 4);
              ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 3)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_1)]));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_3 = (oc_block_c_2 + 8);
              ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 6)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_2)]));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_4 = (oc_block_c_3 + 12);
              ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 9)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_3)]));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_5 = (oc_block_c_4 + 16);
              ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 12)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_4)]));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_6 = (oc_block_c_5 + 20);
              ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 15)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_5)]));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_7 = (oc_block_c_6 + 24);
              ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 18)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_6)]));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_8 = (oc_block_c_7 + 28);
              ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 21)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_7)]));
            }
            for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
              int32_t cse_var_9 = (oc_block_c_8 + 32);
              ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 24)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_8)]));
            }
            for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
              int32_t cse_var_10 = (oc_block_c_9 + 36);
              ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 27)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_9)]));
            }
            for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
              int32_t cse_var_11 = (oc_block_c_10 + 40);
              ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 30)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_10)]));
            }
            for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
              int32_t cse_var_12 = (oc_block_c_11 + 44);
              ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 33)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_11)]));
            }
            for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
              int32_t cse_var_13 = (oc_block_c_12 + 48);
              ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 36)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_12)]));
            }
            for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
              int32_t cse_var_14 = (oc_block_c_13 + 52);
              ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 39)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_13)]));
            }
            for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
              int32_t cse_var_15 = (oc_block_c_14 + 56);
              ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 42)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_14)]));
            }
            for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
              int32_t cse_var_16 = (oc_block_c_15 + 60);
              ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (((float*)data_pad_let)[((((((kh * 102) + ((ax0_ax1_fused_ax2_fused & 31) * 102)) + (ow_outer * 48)) + (kw * 3)) + ic_inner) + 45)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_15)]));
            }
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_17 = (ow_inner * 4);
          ((float*)conv2d_NCHWc_let)[(((ow_outer * 64) + cse_var_17) + oc_block)] = ((float*)conv2d_NCHWc_global_let)[(cse_var_17 + oc_block)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_19 = (ax3_outer * 64);
          int32_t cse_var_18 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_19 + cse_var_18) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_let)[(((ax0_ax1_fused_ax2_fused >> 5) * 4) + ax4)]) * 1.264266e+01f));
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          int8_t v__2 = (int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f));
          int8_t v__3 = (int8_t)0;
          T_multiply[((((ax0_ax1_fused_ax2_fused * 128) + cse_var_19) + cse_var_18) + ax4)] = (((float)((v__2) > (v__3) ? (v__2) : (v__3))) * 7.909729e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_4_let = (&(global_const_workspace_12_var[310336]));
  void* fused_constant_4_let = (&(global_const_workspace_12_var[221184]));
  void* data_pad_let = (&(global_workspace_13_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 144; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 18; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 18);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)data_pad_let)[(((i0_i1_fused_i2_fused * 72) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 17)) && (1 <= i3)) && (i3 < 17)) ? p0[((((((i0_i1_fused_i2_fused / 18) * 1024) + (cse_var_2 * 64)) + cse_var_1) + i4) - 68)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_13_var[41472]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_13_var[41728]));
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
    for (int32_t ic_outer = 0; ic_outer < 8; ++ic_outer) {
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (((float*)data_pad_let)[(((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)]));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_3 = (oc_block_c_1 + 4);
              ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 4)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_4 = (oc_block_c_2 + 8);
              ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 8)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_5 = (oc_block_c_3 + 12);
              ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 12)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_6 = (oc_block_c_4 + 16);
              ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 16)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_7 = (oc_block_c_5 + 20);
              ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 20)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_8 = (oc_block_c_6 + 24);
              ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 24)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_9 = (oc_block_c_7 + 28);
              ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 28)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
            }
            for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
              int32_t cse_var_10 = (oc_block_c_8 + 32);
              ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 32)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
            }
            for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
              int32_t cse_var_11 = (oc_block_c_9 + 36);
              ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 36)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
            }
            for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
              int32_t cse_var_12 = (oc_block_c_10 + 40);
              ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 40)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
            }
            for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
              int32_t cse_var_13 = (oc_block_c_11 + 44);
              ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 44)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
            }
            for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
              int32_t cse_var_14 = (oc_block_c_12 + 48);
              ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 48)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
            }
            for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
              int32_t cse_var_15 = (oc_block_c_13 + 52);
              ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 52)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
            }
            for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
              int32_t cse_var_16 = (oc_block_c_14 + 56);
              ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 56)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
            }
            for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
              int32_t cse_var_17 = (oc_block_c_15 + 60);
              ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (((float*)data_pad_let)[((((((ic_outer * 1296) + (kh * 72)) + ((ax0_ax1_fused_ax2_fused & 15) * 72)) + (kw * 4)) + ic_inner) + 60)] * ((float*)fused_constant_4_let)[(((((((ax0_ax1_fused_ax2_fused >> 4) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
            }
          }
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_18 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_18] = ((float*)conv2d_NCHWc_global_let)[cse_var_18];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_19 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_19 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_4_let)[(((ax0_ax1_fused_ax2_fused >> 4) * 4) + ax4)]) * 8.502056e+00f));
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_multiply[(((ax0_ax1_fused_ax2_fused * 64) + cse_var_19) + ax4)] = (((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)) * 1.176186e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_7_let = (&(global_const_workspace_18_var[309696]));
  void* fused_constant_7_let = (&(global_const_workspace_18_var[0]));
  void* data_pad_let = (&(global_workspace_19_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 160; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 10; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 10);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)data_pad_let)[(((i0_i1_fused_i2_fused * 40) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= i3)) && (i3 < 9)) ? p0[((((((i0_i1_fused_i2_fused / 10) * 256) + (cse_var_2 * 32)) + cse_var_1) + i4) - 36)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_19_var[25600]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_19_var[25728]));
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
    for (int32_t ic_outer = 0; ic_outer < 16; ++ic_outer) {
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (((float*)data_pad_let)[(((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner)] * ((float*)fused_constant_7_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)]));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_3 = (oc_block_c_1 + 4);
              ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (((float*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 4)] * ((float*)fused_constant_7_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_4 = (oc_block_c_2 + 8);
              ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (((float*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 8)] * ((float*)fused_constant_7_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_5 = (oc_block_c_3 + 12);
              ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (((float*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 12)] * ((float*)fused_constant_7_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_6 = (oc_block_c_4 + 16);
              ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (((float*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 16)] * ((float*)fused_constant_7_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_7 = (oc_block_c_5 + 20);
              ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (((float*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 20)] * ((float*)fused_constant_7_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_8 = (oc_block_c_6 + 24);
              ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (((float*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 24)] * ((float*)fused_constant_7_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_9 = (oc_block_c_7 + 28);
              ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (((float*)data_pad_let)[((((((ic_outer * 400) + (kh * 40)) + ((ax0_ax1_fused_ax2_fused & 7) * 40)) + (kw * 4)) + ic_inner) + 28)] * ((float*)fused_constant_7_let)[(((((((ax0_ax1_fused_ax2_fused >> 3) * 2304) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
            }
          }
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 8; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_10 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_10] = ((float*)conv2d_NCHWc_global_let)[cse_var_10];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_11 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_11 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_7_let)[(((ax0_ax1_fused_ax2_fused >> 3) * 4) + ax4)]) * 4.539733e+00f));
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_multiply[(((ax0_ax1_fused_ax2_fused * 32) + cse_var_11) + ax4)] = (((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)) * 2.202773e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_add_divide_round_cl_6aaab29e758b926e_(float* p0, float* p1, float* compute, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_2_let = (&(global_const_workspace_8_var[310592]));
  void* fused_constant_2_let = (&(global_const_workspace_8_var[276480]));
  void* data_pad_let = (&(global_workspace_9_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 136; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 34; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 34);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)data_pad_let)[(((i0_i1_fused_i2_fused * 136) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 33)) && (1 <= i3)) && (i3 < 33)) ? p0[((((((i0_i1_fused_i2_fused / 34) * 4096) + (cse_var_2 * 128)) + cse_var_1) + i4) - 132)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 128; ++i0_i1_fused_i2_fused_1) {
    void* conv2d_NCHWc_let = (&(global_workspace_9_var[205056]));
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      void* conv2d_NCHWc_global_let = (&(global_workspace_9_var[205568]));
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
      for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
        for (int32_t kh = 0; kh < 3; ++kh) {
          for (int32_t kw = 0; kw < 3; ++kw) {
            for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
              for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
                ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (((float*)data_pad_let)[((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)]));
              }
              for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
                int32_t cse_var_3 = (oc_block_c_1 + 4);
                ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 4)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
              }
              for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
                int32_t cse_var_4 = (oc_block_c_2 + 8);
                ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 8)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
              }
              for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
                int32_t cse_var_5 = (oc_block_c_3 + 12);
                ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 12)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
              }
              for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
                int32_t cse_var_6 = (oc_block_c_4 + 16);
                ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 16)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
              }
              for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
                int32_t cse_var_7 = (oc_block_c_5 + 20);
                ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 20)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
              }
              for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
                int32_t cse_var_8 = (oc_block_c_6 + 24);
                ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 24)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
              }
              for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
                int32_t cse_var_9 = (oc_block_c_7 + 28);
                ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 28)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
              }
              for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
                int32_t cse_var_10 = (oc_block_c_8 + 32);
                ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 32)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
              }
              for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
                int32_t cse_var_11 = (oc_block_c_9 + 36);
                ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 36)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
              }
              for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
                int32_t cse_var_12 = (oc_block_c_10 + 40);
                ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 40)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
              }
              for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
                int32_t cse_var_13 = (oc_block_c_11 + 44);
                ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 44)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
              }
              for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
                int32_t cse_var_14 = (oc_block_c_12 + 48);
                ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 48)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
              }
              for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
                int32_t cse_var_15 = (oc_block_c_13 + 52);
                ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 52)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
              }
              for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
                int32_t cse_var_16 = (oc_block_c_14 + 56);
                ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 56)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
              }
              for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
                int32_t cse_var_17 = (oc_block_c_15 + 60);
                ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 60)] * ((float*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
              }
            }
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_18 = (ow_inner * 4);
          ((float*)conv2d_NCHWc_let)[(((ow_outer * 64) + cse_var_18) + oc_block)] = ((float*)conv2d_NCHWc_global_let)[(cse_var_18 + oc_block)];
        }
      }
    }
    for (int32_t i3_outer = 0; i3_outer < 2; ++i3_outer) {
      for (int32_t i3_inner = 0; i3_inner < 16; ++i3_inner) {
        for (int32_t i4_1 = 0; i4_1 < 4; ++i4_1) {
          int32_t cse_var_21 = (i3_outer * 64);
          int32_t cse_var_20 = (i3_inner * 4);
          int32_t cse_var_19 = ((((i0_i1_fused_i2_fused_1 * 128) + cse_var_21) + cse_var_20) + i4_1);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_21 + cse_var_20) + i4_1)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_2_let)[(((i0_i1_fused_i2_fused_1 >> 5) * 4) + i4_1)]) * 9.262127e+00f));
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          float v__2 = roundf(((p1[cse_var_19] + (((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)) * 1.079666e-01f)) * 9.262127e+00f));
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          float v__4 = ((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)) * 1.079666e-01f;
          float v__5 = roundf((((v__4) > (0.000000e+00f) ? (v__4) : (0.000000e+00f)) * 9.775893e+00f));
          float v__6 = (v__5) < (1.270000e+02f) ? (v__5) : (1.270000e+02f);
          compute[cse_var_19] = ((v__6) > (-1.280000e+02f) ? (v__6) : (-1.280000e+02f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_add_divide_round_cl_6aaab29e758b926e__1(float* p0, float* p1, float* compute, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_5_let = (&(global_const_workspace_14_var[310208]));
  void* fused_constant_5_let = (&(global_const_workspace_14_var[305664]));
  for (int32_t i0_i1_fused_i2_outer_fused = 0; i0_i1_fused_i2_outer_fused < 128; ++i0_i1_fused_i2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_15_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_15_var[256]));
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
    for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 8)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 16)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 24)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 32)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 40)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 48)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 56)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 64)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 72)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 80)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 88)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 96)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 104)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 112)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 4096) + ((i0_i1_fused_i2_outer_fused & 15) * 256)) + ic_inner) + 120)] * ((float*)fused_constant_5_let)[(((((i0_i1_fused_i2_outer_fused >> 4) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_16 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_16] = ((float*)conv2d_NCHWc_global_let)[cse_var_16];
      }
    }
    for (int32_t i3_inner = 0; i3_inner < 16; ++i3_inner) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_18 = (i3_inner * 4);
        int32_t cse_var_17 = (((i0_i1_fused_i2_outer_fused * 64) + cse_var_18) + i4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_18 + i4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_5_let)[(((i0_i1_fused_i2_outer_fused >> 4) * 4) + i4)]) * 1.966271e+01f));
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = roundf((((((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)) * 5.085768e-02f) + p1[cse_var_17]) * 7.279275e+00f));
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        float v__4 = ((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)) * 1.373763e-01f;
        float v__5 = roundf((((v__4) > (0.000000e+00f) ? (v__4) : (0.000000e+00f)) * 9.355273e+00f));
        float v__6 = (v__5) < (1.270000e+02f) ? (v__5) : (1.270000e+02f);
        compute[cse_var_17] = ((v__6) > (-1.280000e+02f) ? (v__6) : (-1.280000e+02f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_add_divide_round_cl_b548f82d7712f8a2_(float* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_8_let = (&(global_const_workspace_20_var[309440]));
  void* fused_constant_8_let = (&(global_const_workspace_20_var[294912]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 64; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_21_var[16384]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_21_var[16640]));
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
    for (int32_t ic_outer = 0; ic_outer < 8; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 8)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 16)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 24)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 32)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 40)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 48)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 56)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 128)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 136)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 144)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 152)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 160)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 168)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 176)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 256)) + ic_inner) + 184)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 8; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_16 = (((oh_inner * 32) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_16] = ((float*)conv2d_NCHWc_global_let)[cse_var_16];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_19 = (ax2_inner * 32);
          int32_t cse_var_18 = (ax3_inner * 4);
          int32_t cse_var_17 = ((((ax0_ax1_fused_ax2_outer_fused * 64) + cse_var_19) + cse_var_18) + ax4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_19 + cse_var_18) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_8_let)[(((ax0_ax1_fused_ax2_outer_fused >> 2) * 4) + ax4)]) * 9.122702e+00f));
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          float v__2 = roundf((((((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)) * 1.096167e-01f) + p1[cse_var_17]) * 3.864023e+00f));
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          float v__4 = ((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)) * 2.587976e-01f;
          float v__5 = roundf((((v__4) > (0.000000e+00f) ? (v__4) : (0.000000e+00f)) * 3.919435e+00f));
          float v__6 = (v__5) < (1.270000e+02f) ? (v__5) : (1.270000e+02f);
          T_multiply[cse_var_17] = (((v__6) > (-1.280000e+02f) ? (v__6) : (-1.280000e+02f)) * 2.551388e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_nn_relu_divide_roun_5cb9b9c4908db7b1_(float* p0, float* compute, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_6_var[310656]));
  void* fused_constant_1_let = (&(global_const_workspace_6_var[285696]));
  void* data_pad_let = (&(global_workspace_7_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 136; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 34; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 34);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)data_pad_let)[(((i0_i1_fused_i2_fused * 136) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 33)) && (1 <= i3)) && (i3 < 33)) ? p0[((((((i0_i1_fused_i2_fused / 34) * 4096) + (cse_var_2 * 128)) + cse_var_1) + i4) - 132)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 128; ++i0_i1_fused_i2_fused_1) {
    void* conv2d_NCHWc_let = (&(global_workspace_7_var[205056]));
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      void* conv2d_NCHWc_global_let = (&(global_workspace_7_var[205568]));
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
      for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
        for (int32_t kh = 0; kh < 3; ++kh) {
          for (int32_t kw = 0; kw < 3; ++kw) {
            for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
              for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
                ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (((float*)data_pad_let)[((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)]));
              }
              for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
                int32_t cse_var_3 = (oc_block_c_1 + 4);
                ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 4)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
              }
              for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
                int32_t cse_var_4 = (oc_block_c_2 + 8);
                ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 8)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
              }
              for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
                int32_t cse_var_5 = (oc_block_c_3 + 12);
                ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 12)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
              }
              for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
                int32_t cse_var_6 = (oc_block_c_4 + 16);
                ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 16)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
              }
              for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
                int32_t cse_var_7 = (oc_block_c_5 + 20);
                ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 20)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
              }
              for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
                int32_t cse_var_8 = (oc_block_c_6 + 24);
                ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 24)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
              }
              for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
                int32_t cse_var_9 = (oc_block_c_7 + 28);
                ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 28)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
              }
              for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
                int32_t cse_var_10 = (oc_block_c_8 + 32);
                ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 32)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
              }
              for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
                int32_t cse_var_11 = (oc_block_c_9 + 36);
                ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 36)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
              }
              for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
                int32_t cse_var_12 = (oc_block_c_10 + 40);
                ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 40)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
              }
              for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
                int32_t cse_var_13 = (oc_block_c_11 + 44);
                ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 44)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
              }
              for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
                int32_t cse_var_14 = (oc_block_c_12 + 48);
                ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 48)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
              }
              for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
                int32_t cse_var_15 = (oc_block_c_13 + 52);
                ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 52)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
              }
              for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
                int32_t cse_var_16 = (oc_block_c_14 + 56);
                ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 56)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
              }
              for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
                int32_t cse_var_17 = (oc_block_c_15 + 60);
                ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (((float*)data_pad_let)[(((((((ic_outer * 4624) + (kh * 136)) + ((i0_i1_fused_i2_fused_1 & 31) * 136)) + (ow_outer * 64)) + (kw * 4)) + ic_inner) + 60)] * ((float*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 >> 5) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
              }
            }
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_18 = (ow_inner * 4);
          ((float*)conv2d_NCHWc_let)[(((ow_outer * 64) + cse_var_18) + oc_block)] = ((float*)conv2d_NCHWc_global_let)[(cse_var_18 + oc_block)];
        }
      }
    }
    for (int32_t i3_outer = 0; i3_outer < 2; ++i3_outer) {
      for (int32_t i3_inner = 0; i3_inner < 16; ++i3_inner) {
        for (int32_t i4_1 = 0; i4_1 < 4; ++i4_1) {
          int32_t cse_var_20 = (i3_outer * 64);
          int32_t cse_var_19 = (i3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_20 + cse_var_19) + i4_1)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_1_let)[(((i0_i1_fused_i2_fused_1 >> 5) * 4) + i4_1)]) * 4.960814e+00f));
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          float v__2 = ((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)) * 2.015798e-01f;
          float v__3 = roundf((((v__2) > (0.000000e+00f) ? (v__2) : (0.000000e+00f)) * 6.527968e+00f));
          float v__4 = (v__3) < (1.270000e+02f) ? (v__3) : (1.270000e+02f);
          compute[((((i0_i1_fused_i2_fused_1 * 128) + cse_var_20) + cse_var_19) + i4_1)] = ((v__4) > (-1.280000e+02f) ? (v__4) : (-1.280000e+02f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_nn_relu_divide_roun_5cb9b9c4908db7b1__1(float* p0, float* compute, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_3_let = (&(global_const_workspace_10_var[310464]));
  void* fused_constant_3_let = (&(global_const_workspace_10_var[258048]));
  void* data_pad_let = (&(global_workspace_11_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 132; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 33; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 33);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)data_pad_let)[(((i0_i1_fused_i2_fused * 132) + cse_var_1) + i4)] = (((cse_var_2 < 32) && (i3 < 32)) ? p0[(((((i0_i1_fused_i2_fused / 33) * 4096) + (cse_var_2 * 128)) + cse_var_1) + i4)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 128; ++i0_i1_fused_i2_fused_1) {
    void* conv2d_NCHWc_let = (&(global_workspace_11_var[69696]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_11_var[69952]));
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
    for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (((float*)data_pad_let)[(((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)]));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_3 = (oc_block_c_1 + 4);
              ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 8)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_4 = (oc_block_c_2 + 8);
              ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 16)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_5 = (oc_block_c_3 + 12);
              ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 24)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_6 = (oc_block_c_4 + 16);
              ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 32)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_7 = (oc_block_c_5 + 20);
              ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 40)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_8 = (oc_block_c_6 + 24);
              ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 48)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_9 = (oc_block_c_7 + 28);
              ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 56)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
            }
            for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
              int32_t cse_var_10 = (oc_block_c_8 + 32);
              ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 64)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
            }
            for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
              int32_t cse_var_11 = (oc_block_c_9 + 36);
              ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 72)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
            }
            for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
              int32_t cse_var_12 = (oc_block_c_10 + 40);
              ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 80)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
            }
            for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
              int32_t cse_var_13 = (oc_block_c_11 + 44);
              ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 88)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
            }
            for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
              int32_t cse_var_14 = (oc_block_c_12 + 48);
              ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 96)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
            }
            for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
              int32_t cse_var_15 = (oc_block_c_13 + 52);
              ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 104)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
            }
            for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
              int32_t cse_var_16 = (oc_block_c_14 + 56);
              ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 112)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
            }
            for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
              int32_t cse_var_17 = (oc_block_c_15 + 60);
              ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (((float*)data_pad_let)[((((((ic_outer * 4356) + ((i0_i1_fused_i2_fused_1 & 15) * 264)) + (kh * 132)) + (kw * 4)) + ic_inner) + 120)] * ((float*)fused_constant_3_let)[(((((((i0_i1_fused_i2_fused_1 >> 4) * 576) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
            }
          }
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_18 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_18] = ((float*)conv2d_NCHWc_global_let)[cse_var_18];
      }
    }
    for (int32_t i3_inner = 0; i3_inner < 16; ++i3_inner) {
      for (int32_t i4_1 = 0; i4_1 < 4; ++i4_1) {
        int32_t cse_var_19 = (i3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_19 + i4_1)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_3_let)[(((i0_i1_fused_i2_fused_1 >> 4) * 4) + i4_1)]) * 1.031696e+01f));
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = ((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)) * 9.692780e-02f;
        float v__3 = roundf((((v__2) > (0.000000e+00f) ? (v__2) : (0.000000e+00f)) * 1.090450e+01f));
        float v__4 = (v__3) < (1.270000e+02f) ? (v__3) : (1.270000e+02f);
        compute[(((i0_i1_fused_i2_fused_1 * 64) + cse_var_19) + i4_1)] = ((v__4) > (-1.280000e+02f) ? (v__4) : (-1.280000e+02f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_nn_relu_divide_roun_5cb9b9c4908db7b1__2(float* p0, float* compute, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_6_let = (&(global_const_workspace_16_var[309952]));
  void* fused_constant_6_let = (&(global_const_workspace_16_var[147456]));
  void* data_pad_let = (&(global_workspace_17_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 136; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 17; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 17);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)data_pad_let)[(((i0_i1_fused_i2_fused * 68) + cse_var_1) + i4)] = (((cse_var_2 < 16) && (i3 < 16)) ? p0[(((((i0_i1_fused_i2_fused / 17) * 1024) + (cse_var_2 * 64)) + cse_var_1) + i4)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 128; ++i0_i1_fused_i2_fused_1) {
    void* conv2d_NCHWc_let = (&(global_workspace_17_var[86144]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_17_var[86272]));
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
    for (int32_t ic_outer = 0; ic_outer < 8; ++ic_outer) {
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (((float*)data_pad_let)[(((((ic_outer * 1156) + ((i0_i1_fused_i2_fused_1 & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner)] * ((float*)fused_constant_6_let)[(((((((i0_i1_fused_i2_fused_1 >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)]));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_3 = (oc_block_c_1 + 4);
              ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (((float*)data_pad_let)[((((((ic_outer * 1156) + ((i0_i1_fused_i2_fused_1 & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 8)] * ((float*)fused_constant_6_let)[(((((((i0_i1_fused_i2_fused_1 >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_4 = (oc_block_c_2 + 8);
              ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (((float*)data_pad_let)[((((((ic_outer * 1156) + ((i0_i1_fused_i2_fused_1 & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 16)] * ((float*)fused_constant_6_let)[(((((((i0_i1_fused_i2_fused_1 >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_5 = (oc_block_c_3 + 12);
              ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (((float*)data_pad_let)[((((((ic_outer * 1156) + ((i0_i1_fused_i2_fused_1 & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 24)] * ((float*)fused_constant_6_let)[(((((((i0_i1_fused_i2_fused_1 >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_6 = (oc_block_c_4 + 16);
              ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (((float*)data_pad_let)[((((((ic_outer * 1156) + ((i0_i1_fused_i2_fused_1 & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 32)] * ((float*)fused_constant_6_let)[(((((((i0_i1_fused_i2_fused_1 >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_7 = (oc_block_c_5 + 20);
              ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (((float*)data_pad_let)[((((((ic_outer * 1156) + ((i0_i1_fused_i2_fused_1 & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 40)] * ((float*)fused_constant_6_let)[(((((((i0_i1_fused_i2_fused_1 >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_8 = (oc_block_c_6 + 24);
              ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (((float*)data_pad_let)[((((((ic_outer * 1156) + ((i0_i1_fused_i2_fused_1 & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 48)] * ((float*)fused_constant_6_let)[(((((((i0_i1_fused_i2_fused_1 >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_9 = (oc_block_c_7 + 28);
              ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (((float*)data_pad_let)[((((((ic_outer * 1156) + ((i0_i1_fused_i2_fused_1 & 7) * 136)) + (kh * 68)) + (kw * 4)) + ic_inner) + 56)] * ((float*)fused_constant_6_let)[(((((((i0_i1_fused_i2_fused_1 >> 3) * 1152) + (ic_outer * 144)) + (kh * 48)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
            }
          }
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 8; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_10 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_10] = ((float*)conv2d_NCHWc_global_let)[cse_var_10];
      }
    }
    for (int32_t i3_inner = 0; i3_inner < 8; ++i3_inner) {
      for (int32_t i4_1 = 0; i4_1 < 4; ++i4_1) {
        int32_t cse_var_11 = (i3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_11 + i4_1)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_6_let)[(((i0_i1_fused_i2_fused_1 >> 3) * 4) + i4_1)]) * 1.291265e+01f));
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = ((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)) * 7.744341e-02f;
        float v__3 = roundf((((v__2) > (0.000000e+00f) ? (v__2) : (0.000000e+00f)) * 1.750566e+01f));
        float v__4 = (v__3) < (1.270000e+02f) ? (v__3) : (1.270000e+02f);
        compute[(((i0_i1_fused_i2_fused_1 * 32) + cse_var_11) + i4_1)] = ((v__4) > (-1.280000e+02f) ? (v__4) : (-1.280000e+02f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_divide_round_clip_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_28_var[310784]));
  void* fused_constant_9_let = (&(global_const_workspace_28_var[303104]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_29_var[336]));
    void* compute_global_let = (&(global_workspace_29_var[304]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((float*)compute_global_let)[x_c_init] = 0.000000e+00f;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((float*)compute_global_let)[x_c] = (((float*)compute_global_let)[x_c] + (p0[k_outer] * ((float*)fused_constant_9_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)]));
      }
    }
    for (int32_t x_inner_inner = 0; x_inner_inner < 5; ++x_inner_inner) {
      ((float*)compute_let)[x_inner_inner] = ((float*)compute_global_let)[x_inner_inner];
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      float v_ = roundf(((((float*)compute_let)[ax1_inner_inner] + ((float*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]) * 4.858533e+00f));
      float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
      T_multiply[cse_var_1] = (((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)) * 2.058235e-01f);
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
TVM_DLL int32_t tvmgen_default_fused_transpose_divide_round_clip_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 32; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 3; ++ax4_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 96) + (ax3 * 3)) + ax4_inner);
        float v_ = roundf((p0[cse_var_1] * 4.980392e-01f));
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_layout_trans[cse_var_1] = ((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* input_1_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_14_let = (&(global_workspace_1_var[256]));
  void* sid_12_let = (&(global_workspace_1_var[256]));
  void* sid_5_let = (&(global_workspace_1_var[139520]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_13_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[69760]));
  void* sid_3_let = (&(global_workspace_1_var[73984]));
  void* sid_7_let = (&(global_workspace_1_var[36992]));
  void* sid_2_let = (&(global_workspace_1_var[139520]));
  void* sid_11_let = (&(global_workspace_1_var[16384]));
  void* sid_4_let = (&(global_workspace_1_var[73984]));
  void* sid_8_let = (&(global_workspace_1_var[69760]));
  void* sid_6_let = (&(global_workspace_1_var[139520]));
  void* sid_1_let = (&(global_workspace_1_var[13872]));
  if (tvmgen_default_fused_transpose_divide_round_clip_layout_transform(input_1_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_nn_relu_cast_multiply(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_nn_relu_divide_roun_5cb9b9c4908db7b1_(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_add_divide_round_cl_6aaab29e758b926e_(sid_3_let, sid_2_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_nn_relu_divide_roun_5cb9b9c4908db7b1__1(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_add_divide_round_cl_6aaab29e758b926e__1(sid_4_let, sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_nn_relu_divide_roun_5cb9b9c4908db7b1__2(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_1(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_multiply_add_divide_round_cl_b548f82d7712f8a2_(sid_7_let, sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_layout_transform(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_avg_pool2d_divide_round_clip_multiply(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_reshape_divide_round_clip(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_divide_round_clip_multiply(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax(sid_14_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

