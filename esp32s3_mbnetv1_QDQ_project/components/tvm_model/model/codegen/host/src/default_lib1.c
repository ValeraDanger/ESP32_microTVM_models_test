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
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          T_layout_trans[((((ax0_ax1_fused * 1024) + (ax2 * 256)) + (ax3_outer * 16)) + ax3_inner)] = p0[(((((ax3_outer * 256) + ((ax3_inner >> 2) * 64)) + (ax0_ax1_fused * 16)) + (ax2 * 4)) + (ax3_inner & 3))];
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_reshape_cast_cast_layout_transform(uint8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    T_layout_trans[ax0_ax1_fused_ax2_fused] = ((float)((int32_t)p0[ax0_ax1_fused_ax2_fused]));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_reshape_cast_subtract_cast_multiply(uint8_t* p0, float* T_multiply, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 63; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      if (((ax1_outer * 16) + ax1_inner) < 1001) {
        int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
        T_multiply[cse_var_1] = (((float)(((int32_t)p0[cse_var_1]) - 96)) * 1.308328e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_divide_round_clip_cast(float* p0, uint8_t* T_cast, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* pool_sum_let = (&(global_workspace_61_var[0]));
  for (int32_t ax3_outer_init = 0; ax3_outer_init < 4; ++ax3_outer_init) {
    for (int32_t ax3_inner_init = 0; ax3_inner_init < 64; ++ax3_inner_init) {
      ((float*)pool_sum_let)[((ax3_outer_init * 64) + ax3_inner_init)] = 0.000000e+00f;
    }
  }
  for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 16; ++rv0_rv1_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t cse_var_1 = (cse_var_2 + ax3_inner);
        ((float*)pool_sum_let)[cse_var_1] = (((float*)pool_sum_let)[cse_var_1] + p0[(((rv0_rv1_fused * 256) + cse_var_2) + ax3_inner)]);
      }
    }
  }
  for (int32_t ax3 = 0; ax3 < 256; ++ax3) {
    float v_ = roundf(((((float*)pool_sum_let)[ax3] * 6.250000e-02f) * 4.250169e+01f));
    float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
    T_cast[ax3] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast(float* p0, uint8_t* T_cast, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_14_let = (&(global_const_workspace_64_var[1844224]));
  void* fused_constant_27_let = (&(global_const_workspace_64_var[0]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 1001; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_65_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_65_var[2032]));
    ((float*)conv2d_NCHWc_global_let)[0] = 0.000000e+00f;
    for (int32_t ic_outer = 0; ic_outer < 256; ++ic_outer) {
      ((float*)conv2d_NCHWc_global_let)[0] = (((float*)conv2d_NCHWc_global_let)[0] + (p0[ic_outer] * ((float*)fused_constant_27_let)[((ax0_ax1_fused_ax2_outer_fused * 256) + ic_outer)]));
    }
    ((float*)conv2d_NCHWc_let)[0] = ((float*)conv2d_NCHWc_global_let)[0];
    float v_ = roundf(((((float*)conv2d_NCHWc_let)[0] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_14_let)[ax0_ax1_fused_ax2_outer_fused]) * 7.643341e+00f)) + 9.600000e+01f;
    float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
    T_cast[ax0_ax1_fused_ax2_outer_fused] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast(float* p0, float* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_let = (&(global_const_workspace_4_var[1870352]));
  void* fused_constant_let = (&(global_const_workspace_4_var[1860272]));
  void* data_pad_let = (&(global_workspace_5_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 129; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 129; ++i3) {
      for (int32_t i4 = 0; i4 < 3; ++i4) {
        int32_t cse_var_1 = (i3 * 3);
        ((float*)data_pad_let)[(((i0_i1_fused_i2_fused * 387) + cse_var_1) + i4)] = (((i0_i1_fused_i2_fused < 128) && (i3 < 128)) ? p0[(((i0_i1_fused_i2_fused * 384) + cse_var_1) + i4)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_5_var[199696]));
    for (int32_t ow_outer = 0; ow_outer < 4; ++ow_outer) {
      void* conv2d_NCHWc_global_let = (&(global_workspace_5_var[200720]));
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
              ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c)]));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_2 = (oc_block_c_1 + 4);
              ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 6)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_1)]));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_3 = (oc_block_c_2 + 8);
              ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 12)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_2)]));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_4 = (oc_block_c_3 + 12);
              ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 18)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_3)]));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_5 = (oc_block_c_4 + 16);
              ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 24)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_4)]));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_6 = (oc_block_c_5 + 20);
              ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 30)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_5)]));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_7 = (oc_block_c_6 + 24);
              ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 36)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_6)]));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_8 = (oc_block_c_7 + 28);
              ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 42)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_7)]));
            }
            for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
              int32_t cse_var_9 = (oc_block_c_8 + 32);
              ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 48)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_8)]));
            }
            for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
              int32_t cse_var_10 = (oc_block_c_9 + 36);
              ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 54)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_9)]));
            }
            for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
              int32_t cse_var_11 = (oc_block_c_10 + 40);
              ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 60)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_10)]));
            }
            for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
              int32_t cse_var_12 = (oc_block_c_11 + 44);
              ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 66)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_11)]));
            }
            for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
              int32_t cse_var_13 = (oc_block_c_12 + 48);
              ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 72)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_12)]));
            }
            for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
              int32_t cse_var_14 = (oc_block_c_13 + 52);
              ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 78)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_13)]));
            }
            for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
              int32_t cse_var_15 = (oc_block_c_14 + 56);
              ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 84)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_14)]));
            }
            for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
              int32_t cse_var_16 = (oc_block_c_15 + 60);
              ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused & 63) * 774) + (kh * 387)) + (ow_outer * 96)) + (kw * 3)) + ic_inner) + 90)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused >> 6) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_15)]));
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
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_19 = (ax3_outer * 64);
          int32_t cse_var_18 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_19 + cse_var_18) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_let)[(((ax0_ax1_fused_ax2_fused >> 6) * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_fused * 256) + cse_var_19) + cse_var_18) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_1(float* p0, float* T_cast, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_8_var[1870256]));
  void* fused_constant_2_let = (&(global_const_workspace_8_var[1867856]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 256; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_9_var[131072]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_9_var[132096]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 4; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 64) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_13) + 52)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_14) + 56)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_15) + 60)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 2; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 64);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 64);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 64);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 64);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 64);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 64);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 64);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 64);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 64);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 64);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 64);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 64);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 64);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
          for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
            int32_t cse_var_28 = (ow_c_outer * 64);
            int32_t cse_var_27 = ((cse_var_28 + oc_block_c_13) + 52);
            ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_28) + ic_inner) + 52)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
          }
          for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
            int32_t cse_var_30 = (ow_c_outer * 64);
            int32_t cse_var_29 = ((cse_var_30 + oc_block_c_14) + 56);
            ((float*)conv2d_NCHWc_global_let)[cse_var_29] = (((float*)conv2d_NCHWc_global_let)[cse_var_29] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_30) + ic_inner) + 56)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
          }
          for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
            int32_t cse_var_32 = (ow_c_outer * 64);
            int32_t cse_var_31 = ((cse_var_32 + oc_block_c_15) + 60);
            ((float*)conv2d_NCHWc_global_let)[cse_var_31] = (((float*)conv2d_NCHWc_global_let)[cse_var_31] + (p0[(((((ic_outer * 16384) + ((ax0_ax1_fused_ax2_outer_fused & 63) * 256)) + cse_var_32) + ic_inner) + 60)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 6) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 4; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_33 = (((ow_outer * 64) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_33] = ((float*)conv2d_NCHWc_global_let)[cse_var_33];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_35 = (ax3_outer * 64);
          int32_t cse_var_34 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_35 + cse_var_34) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_1_let)[(((ax0_ax1_fused_ax2_outer_fused >> 6) * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 256) + cse_var_35) + cse_var_34) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_10(float* p0, float* T_cast, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_10_let = (&(global_const_workspace_44_var[1867344]));
  void* fused_constant_20_let = (&(global_const_workspace_44_var[1483776]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 128; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_45_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_45_var[256]));
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
    for (int32_t ic_outer = 0; ic_outer < 32; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 4)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 8)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 12)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 16)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 20)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 24)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 28)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 32)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 36)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 40)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 44)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 48)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 52)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 56)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 60)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
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
          int32_t cse_var_18 = (ax2_inner * 32);
          int32_t cse_var_17 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_18 + cse_var_17) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_10_let)[(((ax0_ax1_fused_ax2_outer_fused >> 2) * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 64) + cse_var_18) + cse_var_17) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_11(float* p0, float* T_cast, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_11_let = (&(global_const_workspace_48_var[1866832]));
  void* fused_constant_22_let = (&(global_const_workspace_48_var[1418240]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 128; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_49_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_49_var[256]));
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
    for (int32_t ic_outer = 0; ic_outer < 32; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 4)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 8)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 12)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 16)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 20)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 24)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 28)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 32)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 36)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 40)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 44)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 48)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 52)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 56)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 60)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
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
          int32_t cse_var_18 = (ax2_inner * 32);
          int32_t cse_var_17 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_18 + cse_var_17) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_11_let)[(((ax0_ax1_fused_ax2_outer_fused >> 2) * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 64) + cse_var_18) + cse_var_17) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_12(float* p0, float* T_cast, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_12_let = (&(global_const_workspace_52_var[1859248]));
  void* fused_constant_24_let = (&(global_const_workspace_52_var[1287168]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 64; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_53_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_53_var[256]));
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
    for (int32_t ic_outer = 0; ic_outer < 32; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[((ic_outer * 64) + ic_inner)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[(((ic_outer * 64) + ic_inner) + 4)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[(((ic_outer * 64) + ic_inner) + 8)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((ic_outer * 64) + ic_inner) + 12)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[(((ic_outer * 64) + ic_inner) + 16)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((ic_outer * 64) + ic_inner) + 20)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[(((ic_outer * 64) + ic_inner) + 24)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((ic_outer * 64) + ic_inner) + 28)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[(((ic_outer * 64) + ic_inner) + 32)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((ic_outer * 64) + ic_inner) + 36)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[(((ic_outer * 64) + ic_inner) + 40)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((ic_outer * 64) + ic_inner) + 44)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[(((ic_outer * 64) + ic_inner) + 48)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((ic_outer * 64) + ic_inner) + 52)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[(((ic_outer * 64) + ic_inner) + 56)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((ic_outer * 64) + ic_inner) + 60)] * ((float*)fused_constant_24_let)[((((ax0_ax1_fused_ax2_outer_fused * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 4; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 4; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_16 = (((oh_inner * 16) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_16] = ((float*)conv2d_NCHWc_global_let)[cse_var_16];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 4; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_18 = (ax2_inner * 16);
          int32_t cse_var_17 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_18 + cse_var_17) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_12_let)[((ax0_ax1_fused_ax2_outer_fused * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 64) + cse_var_18) + cse_var_17) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_2(float* p0, float* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_2_let = (&(global_const_workspace_12_var[1870064]));
  void* fused_constant_4_let = (&(global_const_workspace_12_var[1852848]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 256; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_13_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_13_var[512]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 2; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 64) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_13) + 52)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_14) + 56)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_15) + 60)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 64);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 64);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 64);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 64);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 64);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 64);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 64);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 64);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 64);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 64);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 64);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 64);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 64);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
          for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
            int32_t cse_var_28 = (ow_c_outer * 64);
            int32_t cse_var_27 = ((cse_var_28 + oc_block_c_13) + 52);
            ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_28) + ic_inner) + 52)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
          }
          for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
            int32_t cse_var_30 = (ow_c_outer * 64);
            int32_t cse_var_29 = ((cse_var_30 + oc_block_c_14) + 56);
            ((float*)conv2d_NCHWc_global_let)[cse_var_29] = (((float*)conv2d_NCHWc_global_let)[cse_var_29] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_30) + ic_inner) + 56)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
          }
          for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
            int32_t cse_var_32 = (ow_c_outer * 64);
            int32_t cse_var_31 = ((cse_var_32 + oc_block_c_15) + 60);
            ((float*)conv2d_NCHWc_global_let)[cse_var_31] = (((float*)conv2d_NCHWc_global_let)[cse_var_31] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_32) + ic_inner) + 60)] * ((float*)fused_constant_4_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_33 = (((ow_outer * 64) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_33] = ((float*)conv2d_NCHWc_global_let)[cse_var_33];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_35 = (ax3_outer * 64);
          int32_t cse_var_34 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_35 + cse_var_34) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_2_let)[(((ax0_ax1_fused_ax2_outer_fused >> 5) * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 128) + cse_var_35) + cse_var_34) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_3(float* p0, float* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_3_let = (&(global_const_workspace_16_var[1869936]));
  void* fused_constant_6_let = (&(global_const_workspace_16_var[1840128]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 256; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_17_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_17_var[512]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 2; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 64) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_13) + 52)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_14) + 56)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 64) + oc_block_c_init_15) + 60)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 8; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 64);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 64);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 64);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 64);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 64);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 64);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 64);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 64);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 64);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 64);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 64);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 64);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 64);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
          for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
            int32_t cse_var_28 = (ow_c_outer * 64);
            int32_t cse_var_27 = ((cse_var_28 + oc_block_c_13) + 52);
            ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_28) + ic_inner) + 52)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
          }
          for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
            int32_t cse_var_30 = (ow_c_outer * 64);
            int32_t cse_var_29 = ((cse_var_30 + oc_block_c_14) + 56);
            ((float*)conv2d_NCHWc_global_let)[cse_var_29] = (((float*)conv2d_NCHWc_global_let)[cse_var_29] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_30) + ic_inner) + 56)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
          }
          for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
            int32_t cse_var_32 = (ow_c_outer * 64);
            int32_t cse_var_31 = ((cse_var_32 + oc_block_c_15) + 60);
            ((float*)conv2d_NCHWc_global_let)[cse_var_31] = (((float*)conv2d_NCHWc_global_let)[cse_var_31] + (p0[(((((ic_outer * 4096) + ((ax0_ax1_fused_ax2_outer_fused & 31) * 128)) + cse_var_32) + ic_inner) + 60)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 5) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_33 = (((ow_outer * 64) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_33] = ((float*)conv2d_NCHWc_global_let)[cse_var_33];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_35 = (ax3_outer * 64);
          int32_t cse_var_34 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_35 + cse_var_34) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_3_let)[(((ax0_ax1_fused_ax2_outer_fused >> 5) * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 128) + cse_var_35) + cse_var_34) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_4(float* p0, float* T_cast, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_4_let = (&(global_const_workspace_20_var[1869424]));
  void* fused_constant_8_let = (&(global_const_workspace_20_var[1804288]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 256; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_21_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_21_var[256]));
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
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 4)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 8)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 12)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 16)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 20)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 24)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 28)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 32)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 36)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 40)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 44)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 48)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 52)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 56)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 60)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_16 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_16] = ((float*)conv2d_NCHWc_global_let)[cse_var_16];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_17 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_17 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_4_let)[(((ax0_ax1_fused_ax2_outer_fused >> 4) * 4) + ax4)]) * 4.250169e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_outer_fused * 64) + cse_var_17) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_5(float* p0, float* T_cast, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_5_let = (&(global_const_workspace_24_var[1869168]));
  void* fused_constant_10_let = (&(global_const_workspace_24_var[1778688]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 256; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_25_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_25_var[256]));
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
    for (int32_t ic_outer = 0; ic_outer < 16; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 4)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 8)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 12)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 16)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 20)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 24)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 28)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 32)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 36)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 40)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 44)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 48)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 52)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 56)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 1024) + ((ax0_ax1_fused_ax2_outer_fused & 15) * 64)) + ic_inner) + 60)] * ((float*)fused_constant_10_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 4) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_16 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_16] = ((float*)conv2d_NCHWc_global_let)[cse_var_16];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_17 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_17 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_5_let)[(((ax0_ax1_fused_ax2_outer_fused >> 4) * 4) + ax4)]) * 4.250169e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_outer_fused * 64) + cse_var_17) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_6(float* p0, float* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_6_let = (&(global_const_workspace_28_var[1866320]));
  void* fused_constant_12_let = (&(global_const_workspace_28_var[1745920]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 128; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_29_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_29_var[256]));
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
    for (int32_t ic_outer = 0; ic_outer < 16; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 4)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 8)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 12)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 16)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 20)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 24)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 28)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 32)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 36)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 40)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 44)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 48)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 52)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 56)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 60)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 256) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
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
          int32_t cse_var_18 = (ax2_inner * 32);
          int32_t cse_var_17 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_18 + cse_var_17) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_6_let)[(((ax0_ax1_fused_ax2_outer_fused >> 2) * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 64) + cse_var_18) + cse_var_17) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_7(float* p0, float* T_cast, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_7_let = (&(global_const_workspace_32_var[1865808]));
  void* fused_constant_14_let = (&(global_const_workspace_32_var[1680384]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 128; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_33_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_33_var[256]));
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
    for (int32_t ic_outer = 0; ic_outer < 32; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 4)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 8)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 12)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 16)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 20)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 24)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 28)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 32)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 36)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 40)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 44)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 48)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 52)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 56)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 60)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
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
          int32_t cse_var_18 = (ax2_inner * 32);
          int32_t cse_var_17 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_18 + cse_var_17) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_7_let)[(((ax0_ax1_fused_ax2_outer_fused >> 2) * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 64) + cse_var_18) + cse_var_17) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_8(float* p0, float* T_cast, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_8_let = (&(global_const_workspace_36_var[1865296]));
  void* fused_constant_16_let = (&(global_const_workspace_36_var[1614848]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 128; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_37_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_37_var[256]));
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
    for (int32_t ic_outer = 0; ic_outer < 32; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 4)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 8)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 12)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 16)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 20)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 24)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 28)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 32)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 36)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 40)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 44)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 48)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 52)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 56)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 60)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
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
          int32_t cse_var_18 = (ax2_inner * 32);
          int32_t cse_var_17 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_18 + cse_var_17) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_8_let)[(((ax0_ax1_fused_ax2_outer_fused >> 2) * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 64) + cse_var_18) + cse_var_17) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_9(float* p0, float* T_cast, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_9_let = (&(global_const_workspace_40_var[1864784]));
  void* fused_constant_18_let = (&(global_const_workspace_40_var[1549312]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 128; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_41_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_41_var[256]));
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
    for (int32_t ic_outer = 0; ic_outer < 32; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 4)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 8)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 12)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 16)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 20)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 24)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 28)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 32)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 36)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 40)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 44)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 48)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 52)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 56)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 256) + ((ax0_ax1_fused_ax2_outer_fused & 3) * 64)) + ic_inner) + 60)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 2) * 512) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
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
          int32_t cse_var_18 = (ax2_inner * 32);
          int32_t cse_var_17 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_18 + cse_var_17) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_9_let)[(((ax0_ax1_fused_ax2_outer_fused >> 2) * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 64) + cse_var_18) + cse_var_17) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_13_let = (&(global_const_workspace_56_var[1858224]));
  void* fused_constant_26_let = (&(global_const_workspace_56_var[1025024]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 64; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_57_var[16384]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_57_var[16640]));
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
    for (int32_t ic_outer = 0; ic_outer < 64; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[((ic_outer * 64) + ic_inner)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[(((ic_outer * 64) + ic_inner) + 4)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[(((ic_outer * 64) + ic_inner) + 8)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((ic_outer * 64) + ic_inner) + 12)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[(((ic_outer * 64) + ic_inner) + 16)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((ic_outer * 64) + ic_inner) + 20)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[(((ic_outer * 64) + ic_inner) + 24)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((ic_outer * 64) + ic_inner) + 28)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[(((ic_outer * 64) + ic_inner) + 32)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((ic_outer * 64) + ic_inner) + 36)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[(((ic_outer * 64) + ic_inner) + 40)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((ic_outer * 64) + ic_inner) + 44)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[(((ic_outer * 64) + ic_inner) + 48)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((ic_outer * 64) + ic_inner) + 52)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[(((ic_outer * 64) + ic_inner) + 56)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((ic_outer * 64) + ic_inner) + 60)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1024) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 4; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 4; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_16 = (((oh_inner * 16) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_16] = ((float*)conv2d_NCHWc_global_let)[cse_var_16];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 4; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_18 = (ax2_inner * 16);
          int32_t cse_var_17 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_18 + cse_var_17) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_13_let)[((ax0_ax1_fused_ax2_outer_fused * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 64) + cse_var_18) + cse_var_17) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 2.352848e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast(float* p0, float* T_cast, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_let = (&(global_const_workspace_6_var[1870320]));
  void* fused_constant_1_let = (&(global_const_workspace_6_var[1868368]));
  void* PaddedInput_let = (&(global_workspace_7_var[131072]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 132; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 66; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 66);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 264) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 65)) && (1 <= i3)) && (i3 < 65)) ? p0[((((((i0_i1_fused_i2_fused / 66) * 16384) + (cse_var_2 * 256)) + cse_var_1) + i4) - 260)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 128; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_7_var[270464]));
    for (int32_t ow_outer = 0; ow_outer < 4; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_7_var[271488]));
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
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_4 = (ax1_ax2_fused >> 6);
            int32_t cse_var_3 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_3) + oci_c)] * ((float*)fused_constant_1_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
            int32_t cse_var_7 = (ax1_ax2_fused >> 6);
            int32_t cse_var_6 = (kw * 4);
            int32_t cse_var_5 = (oci_c_1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_1_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
          }
          for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
            int32_t cse_var_10 = (ax1_ax2_fused >> 6);
            int32_t cse_var_9 = (kw * 4);
            int32_t cse_var_8 = (oci_c_2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_1_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
          }
          for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
            int32_t cse_var_13 = (ax1_ax2_fused >> 6);
            int32_t cse_var_12 = (kw * 4);
            int32_t cse_var_11 = (oci_c_3 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[(((((((cse_var_13 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_1_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
          }
          for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
            int32_t cse_var_16 = (ax1_ax2_fused >> 6);
            int32_t cse_var_15 = (kw * 4);
            int32_t cse_var_14 = (oci_c_4 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[(((((((cse_var_16 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_1_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
          }
          for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
            int32_t cse_var_19 = (ax1_ax2_fused >> 6);
            int32_t cse_var_18 = (kw * 4);
            int32_t cse_var_17 = (oci_c_5 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[(((((((cse_var_19 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_1_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
          }
          for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
            int32_t cse_var_22 = (ax1_ax2_fused >> 6);
            int32_t cse_var_21 = (kw * 4);
            int32_t cse_var_20 = (oci_c_6 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[(((((((cse_var_22 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_1_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
          }
          for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
            int32_t cse_var_25 = (ax1_ax2_fused >> 6);
            int32_t cse_var_24 = (kw * 4);
            int32_t cse_var_23 = (oci_c_7 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[(((((((cse_var_25 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_1_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
          }
          for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
            int32_t cse_var_28 = (ax1_ax2_fused >> 6);
            int32_t cse_var_27 = (kw * 4);
            int32_t cse_var_26 = (oci_c_8 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[(((((((cse_var_28 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_1_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
          }
          for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
            int32_t cse_var_31 = (ax1_ax2_fused >> 6);
            int32_t cse_var_30 = (kw * 4);
            int32_t cse_var_29 = (oci_c_9 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[(((((((cse_var_31 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_1_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
          }
          for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
            int32_t cse_var_34 = (ax1_ax2_fused >> 6);
            int32_t cse_var_33 = (kw * 4);
            int32_t cse_var_32 = (oci_c_10 + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[(((((((cse_var_34 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_1_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
          }
          for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
            int32_t cse_var_37 = (ax1_ax2_fused >> 6);
            int32_t cse_var_36 = (kw * 4);
            int32_t cse_var_35 = (oci_c_11 + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[(((((((cse_var_37 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_1_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
          }
          for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
            int32_t cse_var_40 = (ax1_ax2_fused >> 6);
            int32_t cse_var_39 = (kw * 4);
            int32_t cse_var_38 = (oci_c_12 + 48);
            ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[(((((((cse_var_40 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_1_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
          }
          for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
            int32_t cse_var_43 = (ax1_ax2_fused >> 6);
            int32_t cse_var_42 = (kw * 4);
            int32_t cse_var_41 = (oci_c_13 + 52);
            ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[(((((((cse_var_43 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_42) + oci_c_13) + 52)] * ((float*)fused_constant_1_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
          }
          for (int32_t oci_c_14 = 0; oci_c_14 < 4; ++oci_c_14) {
            int32_t cse_var_46 = (ax1_ax2_fused >> 6);
            int32_t cse_var_45 = (kw * 4);
            int32_t cse_var_44 = (oci_c_14 + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[(((((((cse_var_46 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_45) + oci_c_14) + 56)] * ((float*)fused_constant_1_let)[((((cse_var_46 * 36) + (kh * 12)) + cse_var_45) + oci_c_14)]));
          }
          for (int32_t oci_c_15 = 0; oci_c_15 < 4; ++oci_c_15) {
            int32_t cse_var_49 = (ax1_ax2_fused >> 6);
            int32_t cse_var_48 = (kw * 4);
            int32_t cse_var_47 = (oci_c_15 + 60);
            ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[(((((((cse_var_49 * 17424) + (kh * 264)) + ((ax1_ax2_fused & 63) * 264)) + (ow_outer * 64)) + cse_var_48) + oci_c_15) + 60)] * ((float*)fused_constant_1_let)[((((cse_var_49 * 36) + (kh * 12)) + cse_var_48) + oci_c_15)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_50 = (ow_inner * 4);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 64) + cse_var_50) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_50 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_52 = (ax3_outer * 64);
          int32_t cse_var_51 = (ax3_inner * 4);
          float v_ = roundf(((((float*)DepthwiseConv2d_let)[((cse_var_52 + cse_var_51) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_let)[(((ax1_ax2_fused >> 6) * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax1_ax2_fused * 256) + cse_var_52) + cse_var_51) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_1(float* p0, float* T_cast, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_10_var[1870192]));
  void* fused_constant_3_let = (&(global_const_workspace_10_var[1861136]));
  void* PaddedInput_let = (&(global_workspace_11_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 260; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 65; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 65);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 260) + cse_var_1) + i4)] = (((cse_var_2 < 64) && (i3 < 64)) ? p0[(((((i0_i1_fused_i2_fused / 65) * 16384) + (cse_var_2 * 256)) + cse_var_1) + i4)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 128; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_11_var[270400]));
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_11_var[270912]));
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
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_4 = (ax1_ax2_fused >> 5);
            int32_t cse_var_3 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_3) + oci_c)] * ((float*)fused_constant_3_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
            int32_t cse_var_7 = (ax1_ax2_fused >> 5);
            int32_t cse_var_6 = (kw * 4);
            int32_t cse_var_5 = (oci_c_1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_3_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
          }
          for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
            int32_t cse_var_10 = (ax1_ax2_fused >> 5);
            int32_t cse_var_9 = (kw * 4);
            int32_t cse_var_8 = (oci_c_2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_3_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
          }
          for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
            int32_t cse_var_13 = (ax1_ax2_fused >> 5);
            int32_t cse_var_12 = (kw * 4);
            int32_t cse_var_11 = (oci_c_3 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[(((((((cse_var_13 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_12) + oci_c_3) + 24)] * ((float*)fused_constant_3_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
          }
          for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
            int32_t cse_var_16 = (ax1_ax2_fused >> 5);
            int32_t cse_var_15 = (kw * 4);
            int32_t cse_var_14 = (oci_c_4 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[(((((((cse_var_16 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_15) + oci_c_4) + 32)] * ((float*)fused_constant_3_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
          }
          for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
            int32_t cse_var_19 = (ax1_ax2_fused >> 5);
            int32_t cse_var_18 = (kw * 4);
            int32_t cse_var_17 = (oci_c_5 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[(((((((cse_var_19 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_18) + oci_c_5) + 40)] * ((float*)fused_constant_3_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
          }
          for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
            int32_t cse_var_22 = (ax1_ax2_fused >> 5);
            int32_t cse_var_21 = (kw * 4);
            int32_t cse_var_20 = (oci_c_6 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[(((((((cse_var_22 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_21) + oci_c_6) + 48)] * ((float*)fused_constant_3_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
          }
          for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
            int32_t cse_var_25 = (ax1_ax2_fused >> 5);
            int32_t cse_var_24 = (kw * 4);
            int32_t cse_var_23 = (oci_c_7 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[(((((((cse_var_25 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_24) + oci_c_7) + 56)] * ((float*)fused_constant_3_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
          }
          for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
            int32_t cse_var_28 = (ax1_ax2_fused >> 5);
            int32_t cse_var_27 = (kw * 4);
            int32_t cse_var_26 = (oci_c_8 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[(((((((cse_var_28 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_27) + oci_c_8) + 64)] * ((float*)fused_constant_3_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
          }
          for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
            int32_t cse_var_31 = (ax1_ax2_fused >> 5);
            int32_t cse_var_30 = (kw * 4);
            int32_t cse_var_29 = (oci_c_9 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[(((((((cse_var_31 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_30) + oci_c_9) + 72)] * ((float*)fused_constant_3_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
          }
          for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
            int32_t cse_var_34 = (ax1_ax2_fused >> 5);
            int32_t cse_var_33 = (kw * 4);
            int32_t cse_var_32 = (oci_c_10 + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[(((((((cse_var_34 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_33) + oci_c_10) + 80)] * ((float*)fused_constant_3_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
          }
          for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
            int32_t cse_var_37 = (ax1_ax2_fused >> 5);
            int32_t cse_var_36 = (kw * 4);
            int32_t cse_var_35 = (oci_c_11 + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[(((((((cse_var_37 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_36) + oci_c_11) + 88)] * ((float*)fused_constant_3_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
          }
          for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
            int32_t cse_var_40 = (ax1_ax2_fused >> 5);
            int32_t cse_var_39 = (kw * 4);
            int32_t cse_var_38 = (oci_c_12 + 48);
            ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[(((((((cse_var_40 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_39) + oci_c_12) + 96)] * ((float*)fused_constant_3_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
          }
          for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
            int32_t cse_var_43 = (ax1_ax2_fused >> 5);
            int32_t cse_var_42 = (kw * 4);
            int32_t cse_var_41 = (oci_c_13 + 52);
            ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[(((((((cse_var_43 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_42) + oci_c_13) + 104)] * ((float*)fused_constant_3_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
          }
          for (int32_t oci_c_14 = 0; oci_c_14 < 4; ++oci_c_14) {
            int32_t cse_var_46 = (ax1_ax2_fused >> 5);
            int32_t cse_var_45 = (kw * 4);
            int32_t cse_var_44 = (oci_c_14 + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[(((((((cse_var_46 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_45) + oci_c_14) + 112)] * ((float*)fused_constant_3_let)[((((cse_var_46 * 36) + (kh * 12)) + cse_var_45) + oci_c_14)]));
          }
          for (int32_t oci_c_15 = 0; oci_c_15 < 4; ++oci_c_15) {
            int32_t cse_var_49 = (ax1_ax2_fused >> 5);
            int32_t cse_var_48 = (kw * 4);
            int32_t cse_var_47 = (oci_c_15 + 60);
            ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[(((((((cse_var_49 * 16900) + ((ax1_ax2_fused & 31) * 520)) + (kh * 260)) + (ow_outer * 128)) + cse_var_48) + oci_c_15) + 120)] * ((float*)fused_constant_3_let)[((((cse_var_49 * 36) + (kh * 12)) + cse_var_48) + oci_c_15)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_50 = (ow_inner * 4);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 64) + cse_var_50) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_50 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_52 = (ax3_outer * 64);
          int32_t cse_var_51 = (ax3_inner * 4);
          float v_ = roundf(((((float*)DepthwiseConv2d_let)[((cse_var_52 + cse_var_51) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_1_let)[(((ax1_ax2_fused >> 5) * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax1_ax2_fused * 128) + cse_var_52) + cse_var_51) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_10(float* p0, float* T_cast, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_10_let = (&(global_const_workspace_46_var[1864272]));
  void* fused_constant_21_let = (&(global_const_workspace_46_var[1817088]));
  void* PaddedInput_let = (&(global_workspace_47_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 320; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 10; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 10);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 40) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= i3)) && (i3 < 9)) ? p0[((((((i0_i1_fused_i2_fused / 10) * 256) + (cse_var_2 * 32)) + cse_var_1) + i4) - 36)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 256; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_47_var[83968]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_47_var[84096]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 3);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_3) + oci_c)] * ((float*)fused_constant_21_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused >> 3);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_21_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused >> 3);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_21_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused >> 3);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_21_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused >> 3);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_21_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused >> 3);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_21_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused >> 3);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_21_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused >> 3);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_21_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 8; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_26 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_26] = ((float*)DepthwiseConv2d_global_let)[cse_var_26];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_27 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_27 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_10_let)[(((ax1_ax2_fused >> 3) * 4) + ax4)]) * 4.250169e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 32) + cse_var_27) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_11(float* p0, float* T_cast, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_11_let = (&(global_const_workspace_50_var[1863760]));
  void* fused_constant_23_let = (&(global_const_workspace_50_var[1812480]));
  void* PaddedInput_let = (&(global_workspace_51_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 288; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 9; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 9);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 36) + cse_var_1) + i4)] = (((cse_var_2 < 8) && (i3 < 8)) ? p0[(((((i0_i1_fused_i2_fused / 9) * 256) + (cse_var_2 * 32)) + cse_var_1) + i4)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 128; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_51_var[41472]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_51_var[41536]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 2);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 324) + ((ax1_ax2_fused & 3) * 72)) + (kh * 36)) + cse_var_3) + oci_c)] * ((float*)fused_constant_23_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused >> 2);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 324) + ((ax1_ax2_fused & 3) * 72)) + (kh * 36)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_23_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused >> 2);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 324) + ((ax1_ax2_fused & 3) * 72)) + (kh * 36)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_23_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused >> 2);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 324) + ((ax1_ax2_fused & 3) * 72)) + (kh * 36)) + cse_var_12) + oci_c_3) + 24)] * ((float*)fused_constant_23_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 4; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_14 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_14] = ((float*)DepthwiseConv2d_global_let)[cse_var_14];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_15 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_15 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_11_let)[(((ax1_ax2_fused >> 2) * 4) + ax4)]) * 4.250169e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 16) + cse_var_15) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_12(float* p0, float* T_cast, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_12_let = (&(global_const_workspace_54_var[1857200]));
  void* fused_constant_25_let = (&(global_const_workspace_54_var[1795072]));
  void* PaddedInput_let = (&(global_workspace_55_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 384; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 6; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 6);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 24) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 5)) && (1 <= i3)) && (i3 < 5)) ? p0[((((((i0_i1_fused_i2_fused / 6) * 64) + (cse_var_2 * 16)) + cse_var_1) + i4) - 20)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 256; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_55_var[53248]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_55_var[53312]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 2);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 144) + (kh * 24)) + ((ax1_ax2_fused & 3) * 24)) + cse_var_3) + oci_c)] * ((float*)fused_constant_25_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused >> 2);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 144) + (kh * 24)) + ((ax1_ax2_fused & 3) * 24)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_25_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused >> 2);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 144) + (kh * 24)) + ((ax1_ax2_fused & 3) * 24)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_25_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused >> 2);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 144) + (kh * 24)) + ((ax1_ax2_fused & 3) * 24)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_25_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 4; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_14 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_14] = ((float*)DepthwiseConv2d_global_let)[cse_var_14];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_15 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_15 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_12_let)[(((ax1_ax2_fused >> 2) * 4) + ax4)]) * 4.250169e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 16) + cse_var_15) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_2(float* p0, float* T_cast, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_2_let = (&(global_const_workspace_14_var[1869808]));
  void* fused_constant_5_let = (&(global_const_workspace_14_var[1856048]));
  void* PaddedInput_let = (&(global_workspace_15_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 272; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 34; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 34);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 136) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 33)) && (1 <= i3)) && (i3 < 33)) ? p0[((((((i0_i1_fused_i2_fused / 34) * 4096) + (cse_var_2 * 128)) + cse_var_1) + i4) - 132)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 256; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_15_var[279040]));
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_15_var[279552]));
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
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_4 = (ax1_ax2_fused >> 5);
            int32_t cse_var_3 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_3) + oci_c)] * ((float*)fused_constant_5_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
            int32_t cse_var_7 = (ax1_ax2_fused >> 5);
            int32_t cse_var_6 = (kw * 4);
            int32_t cse_var_5 = (oci_c_1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_5_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
          }
          for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
            int32_t cse_var_10 = (ax1_ax2_fused >> 5);
            int32_t cse_var_9 = (kw * 4);
            int32_t cse_var_8 = (oci_c_2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_5_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
          }
          for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
            int32_t cse_var_13 = (ax1_ax2_fused >> 5);
            int32_t cse_var_12 = (kw * 4);
            int32_t cse_var_11 = (oci_c_3 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[(((((((cse_var_13 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_5_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
          }
          for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
            int32_t cse_var_16 = (ax1_ax2_fused >> 5);
            int32_t cse_var_15 = (kw * 4);
            int32_t cse_var_14 = (oci_c_4 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[(((((((cse_var_16 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_5_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
          }
          for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
            int32_t cse_var_19 = (ax1_ax2_fused >> 5);
            int32_t cse_var_18 = (kw * 4);
            int32_t cse_var_17 = (oci_c_5 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[(((((((cse_var_19 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_5_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
          }
          for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
            int32_t cse_var_22 = (ax1_ax2_fused >> 5);
            int32_t cse_var_21 = (kw * 4);
            int32_t cse_var_20 = (oci_c_6 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[(((((((cse_var_22 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_5_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
          }
          for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
            int32_t cse_var_25 = (ax1_ax2_fused >> 5);
            int32_t cse_var_24 = (kw * 4);
            int32_t cse_var_23 = (oci_c_7 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[(((((((cse_var_25 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_5_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
          }
          for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
            int32_t cse_var_28 = (ax1_ax2_fused >> 5);
            int32_t cse_var_27 = (kw * 4);
            int32_t cse_var_26 = (oci_c_8 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[(((((((cse_var_28 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_5_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
          }
          for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
            int32_t cse_var_31 = (ax1_ax2_fused >> 5);
            int32_t cse_var_30 = (kw * 4);
            int32_t cse_var_29 = (oci_c_9 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[(((((((cse_var_31 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_5_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
          }
          for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
            int32_t cse_var_34 = (ax1_ax2_fused >> 5);
            int32_t cse_var_33 = (kw * 4);
            int32_t cse_var_32 = (oci_c_10 + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[(((((((cse_var_34 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_5_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
          }
          for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
            int32_t cse_var_37 = (ax1_ax2_fused >> 5);
            int32_t cse_var_36 = (kw * 4);
            int32_t cse_var_35 = (oci_c_11 + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[(((((((cse_var_37 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_5_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
          }
          for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
            int32_t cse_var_40 = (ax1_ax2_fused >> 5);
            int32_t cse_var_39 = (kw * 4);
            int32_t cse_var_38 = (oci_c_12 + 48);
            ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[(((((((cse_var_40 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_5_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
          }
          for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
            int32_t cse_var_43 = (ax1_ax2_fused >> 5);
            int32_t cse_var_42 = (kw * 4);
            int32_t cse_var_41 = (oci_c_13 + 52);
            ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[(((((((cse_var_43 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_42) + oci_c_13) + 52)] * ((float*)fused_constant_5_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
          }
          for (int32_t oci_c_14 = 0; oci_c_14 < 4; ++oci_c_14) {
            int32_t cse_var_46 = (ax1_ax2_fused >> 5);
            int32_t cse_var_45 = (kw * 4);
            int32_t cse_var_44 = (oci_c_14 + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[(((((((cse_var_46 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_45) + oci_c_14) + 56)] * ((float*)fused_constant_5_let)[((((cse_var_46 * 36) + (kh * 12)) + cse_var_45) + oci_c_14)]));
          }
          for (int32_t oci_c_15 = 0; oci_c_15 < 4; ++oci_c_15) {
            int32_t cse_var_49 = (ax1_ax2_fused >> 5);
            int32_t cse_var_48 = (kw * 4);
            int32_t cse_var_47 = (oci_c_15 + 60);
            ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[(((((((cse_var_49 * 4624) + (kh * 136)) + ((ax1_ax2_fused & 31) * 136)) + (ow_outer * 64)) + cse_var_48) + oci_c_15) + 60)] * ((float*)fused_constant_5_let)[((((cse_var_49 * 36) + (kh * 12)) + cse_var_48) + oci_c_15)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_50 = (ow_inner * 4);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 64) + cse_var_50) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_50 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_52 = (ax3_outer * 64);
          int32_t cse_var_51 = (ax3_inner * 4);
          float v_ = roundf(((((float*)DepthwiseConv2d_let)[((cse_var_52 + cse_var_51) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_2_let)[(((ax1_ax2_fused >> 5) * 4) + ax4)]) * 4.250169e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax1_ax2_fused * 128) + cse_var_52) + cse_var_51) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_3(float* p0, float* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_3_let = (&(global_const_workspace_18_var[1869680]));
  void* fused_constant_7_let = (&(global_const_workspace_18_var[1854896]));
  void* PaddedInput_let = (&(global_workspace_19_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 264; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 33; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 33);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 132) + cse_var_1) + i4)] = (((cse_var_2 < 32) && (i3 < 32)) ? p0[(((((i0_i1_fused_i2_fused / 33) * 4096) + (cse_var_2 * 128)) + cse_var_1) + i4)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 128; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_19_var[139392]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_19_var[139648]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 4);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_3) + oci_c)] * ((float*)fused_constant_7_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused >> 4);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_7_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused >> 4);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_7_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused >> 4);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_12) + oci_c_3) + 24)] * ((float*)fused_constant_7_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused >> 4);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_15) + oci_c_4) + 32)] * ((float*)fused_constant_7_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused >> 4);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_18) + oci_c_5) + 40)] * ((float*)fused_constant_7_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused >> 4);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_21) + oci_c_6) + 48)] * ((float*)fused_constant_7_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused >> 4);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_24) + oci_c_7) + 56)] * ((float*)fused_constant_7_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused >> 4);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_27) + oci_c_8) + 64)] * ((float*)fused_constant_7_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused >> 4);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_30) + oci_c_9) + 72)] * ((float*)fused_constant_7_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused >> 4);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_33) + oci_c_10) + 80)] * ((float*)fused_constant_7_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused >> 4);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_36) + oci_c_11) + 88)] * ((float*)fused_constant_7_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused >> 4);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_39) + oci_c_12) + 96)] * ((float*)fused_constant_7_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused >> 4);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_42) + oci_c_13) + 104)] * ((float*)fused_constant_7_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
        for (int32_t oci_c_14 = 0; oci_c_14 < 4; ++oci_c_14) {
          int32_t cse_var_46 = (ax1_ax2_fused >> 4);
          int32_t cse_var_45 = (kw * 4);
          int32_t cse_var_44 = (oci_c_14 + 56);
          ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[((((((cse_var_46 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_45) + oci_c_14) + 112)] * ((float*)fused_constant_7_let)[((((cse_var_46 * 36) + (kh * 12)) + cse_var_45) + oci_c_14)]));
        }
        for (int32_t oci_c_15 = 0; oci_c_15 < 4; ++oci_c_15) {
          int32_t cse_var_49 = (ax1_ax2_fused >> 4);
          int32_t cse_var_48 = (kw * 4);
          int32_t cse_var_47 = (oci_c_15 + 60);
          ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[((((((cse_var_49 * 4356) + ((ax1_ax2_fused & 15) * 264)) + (kh * 132)) + cse_var_48) + oci_c_15) + 120)] * ((float*)fused_constant_7_let)[((((cse_var_49 * 36) + (kh * 12)) + cse_var_48) + oci_c_15)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_50 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_50] = ((float*)DepthwiseConv2d_global_let)[cse_var_50];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_51 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_51 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_3_let)[(((ax1_ax2_fused >> 4) * 4) + ax4)]) * 4.250169e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 64) + cse_var_51) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_4(float* p0, float* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_4_let = (&(global_const_workspace_22_var[1868912]));
  void* fused_constant_9_let = (&(global_const_workspace_22_var[1848240]));
  void* PaddedInput_let = (&(global_workspace_23_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 288; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 18; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 18);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 72) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 17)) && (1 <= i3)) && (i3 < 17)) ? p0[((((((i0_i1_fused_i2_fused / 18) * 1024) + (cse_var_2 * 64)) + cse_var_1) + i4) - 68)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 256; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_23_var[148480]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_23_var[148736]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 4);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_3) + oci_c)] * ((float*)fused_constant_9_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused >> 4);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_9_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused >> 4);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_9_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused >> 4);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_9_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused >> 4);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_9_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused >> 4);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_9_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused >> 4);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_9_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused >> 4);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_9_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused >> 4);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_9_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused >> 4);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_9_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused >> 4);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_9_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused >> 4);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_9_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused >> 4);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_9_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused >> 4);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_42) + oci_c_13) + 52)] * ((float*)fused_constant_9_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
        for (int32_t oci_c_14 = 0; oci_c_14 < 4; ++oci_c_14) {
          int32_t cse_var_46 = (ax1_ax2_fused >> 4);
          int32_t cse_var_45 = (kw * 4);
          int32_t cse_var_44 = (oci_c_14 + 56);
          ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[((((((cse_var_46 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_45) + oci_c_14) + 56)] * ((float*)fused_constant_9_let)[((((cse_var_46 * 36) + (kh * 12)) + cse_var_45) + oci_c_14)]));
        }
        for (int32_t oci_c_15 = 0; oci_c_15 < 4; ++oci_c_15) {
          int32_t cse_var_49 = (ax1_ax2_fused >> 4);
          int32_t cse_var_48 = (kw * 4);
          int32_t cse_var_47 = (oci_c_15 + 60);
          ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[((((((cse_var_49 * 1296) + (kh * 72)) + ((ax1_ax2_fused & 15) * 72)) + cse_var_48) + oci_c_15) + 60)] * ((float*)fused_constant_9_let)[((((cse_var_49 * 36) + (kh * 12)) + cse_var_48) + oci_c_15)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 16; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_50 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_50] = ((float*)DepthwiseConv2d_global_let)[cse_var_50];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_51 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_51 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_4_let)[(((ax1_ax2_fused >> 4) * 4) + ax4)]) * 4.250169e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 64) + cse_var_51) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_5(float* p0, float* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_5_let = (&(global_const_workspace_26_var[1868656]));
  void* fused_constant_11_let = (&(global_const_workspace_26_var[1850544]));
  void* PaddedInput_let = (&(global_workspace_27_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 272; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 17; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 17);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 68) + cse_var_1) + i4)] = (((cse_var_2 < 16) && (i3 < 16)) ? p0[(((((i0_i1_fused_i2_fused / 17) * 1024) + (cse_var_2 * 64)) + cse_var_1) + i4)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 128; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_27_var[73984]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_27_var[74112]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 3);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 1156) + ((ax1_ax2_fused & 7) * 136)) + (kh * 68)) + cse_var_3) + oci_c)] * ((float*)fused_constant_11_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused >> 3);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 1156) + ((ax1_ax2_fused & 7) * 136)) + (kh * 68)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_11_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused >> 3);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 1156) + ((ax1_ax2_fused & 7) * 136)) + (kh * 68)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_11_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused >> 3);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 1156) + ((ax1_ax2_fused & 7) * 136)) + (kh * 68)) + cse_var_12) + oci_c_3) + 24)] * ((float*)fused_constant_11_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused >> 3);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 1156) + ((ax1_ax2_fused & 7) * 136)) + (kh * 68)) + cse_var_15) + oci_c_4) + 32)] * ((float*)fused_constant_11_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused >> 3);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 1156) + ((ax1_ax2_fused & 7) * 136)) + (kh * 68)) + cse_var_18) + oci_c_5) + 40)] * ((float*)fused_constant_11_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused >> 3);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 1156) + ((ax1_ax2_fused & 7) * 136)) + (kh * 68)) + cse_var_21) + oci_c_6) + 48)] * ((float*)fused_constant_11_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused >> 3);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 1156) + ((ax1_ax2_fused & 7) * 136)) + (kh * 68)) + cse_var_24) + oci_c_7) + 56)] * ((float*)fused_constant_11_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 8; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_26 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_26] = ((float*)DepthwiseConv2d_global_let)[cse_var_26];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_27 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_27 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_5_let)[(((ax1_ax2_fused >> 3) * 4) + ax4)]) * 4.250169e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 32) + cse_var_27) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_6(float* p0, float* T_cast, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_6_let = (&(global_const_workspace_30_var[1863248]));
  void* fused_constant_13_let = (&(global_const_workspace_30_var[1835520]));
  void* PaddedInput_let = (&(global_workspace_31_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 320; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 10; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 10);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 40) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= i3)) && (i3 < 9)) ? p0[((((((i0_i1_fused_i2_fused / 10) * 256) + (cse_var_2 * 32)) + cse_var_1) + i4) - 36)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 256; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_31_var[83968]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_31_var[84096]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 3);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_3) + oci_c)] * ((float*)fused_constant_13_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused >> 3);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_13_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused >> 3);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_13_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused >> 3);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_13_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused >> 3);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_13_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused >> 3);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_13_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused >> 3);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_13_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused >> 3);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_13_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 8; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_26 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_26] = ((float*)DepthwiseConv2d_global_let)[cse_var_26];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_27 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_27 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_6_let)[(((ax1_ax2_fused >> 3) * 4) + ax4)]) * 4.250169e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 32) + cse_var_27) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_7(float* p0, float* T_cast, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_7_let = (&(global_const_workspace_34_var[1862736]));
  void* fused_constant_15_let = (&(global_const_workspace_34_var[1830912]));
  void* PaddedInput_let = (&(global_workspace_35_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 320; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 10; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 10);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 40) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= i3)) && (i3 < 9)) ? p0[((((((i0_i1_fused_i2_fused / 10) * 256) + (cse_var_2 * 32)) + cse_var_1) + i4) - 36)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 256; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_35_var[83968]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_35_var[84096]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 3);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_3) + oci_c)] * ((float*)fused_constant_15_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused >> 3);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_15_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused >> 3);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_15_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused >> 3);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_15_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused >> 3);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_15_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused >> 3);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_15_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused >> 3);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_15_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused >> 3);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_15_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 8; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_26 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_26] = ((float*)DepthwiseConv2d_global_let)[cse_var_26];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_27 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_27 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_7_let)[(((ax1_ax2_fused >> 3) * 4) + ax4)]) * 4.250169e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 32) + cse_var_27) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_8(float* p0, float* T_cast, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_8_let = (&(global_const_workspace_38_var[1862224]));
  void* fused_constant_17_let = (&(global_const_workspace_38_var[1826304]));
  void* PaddedInput_let = (&(global_workspace_39_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 320; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 10; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 10);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 40) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= i3)) && (i3 < 9)) ? p0[((((((i0_i1_fused_i2_fused / 10) * 256) + (cse_var_2 * 32)) + cse_var_1) + i4) - 36)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 256; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_39_var[83968]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_39_var[84096]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 3);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_3) + oci_c)] * ((float*)fused_constant_17_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused >> 3);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_17_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused >> 3);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_17_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused >> 3);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_17_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused >> 3);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_17_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused >> 3);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_17_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused >> 3);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_17_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused >> 3);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_17_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 8; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_26 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_26] = ((float*)DepthwiseConv2d_global_let)[cse_var_26];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_27 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_27 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_8_let)[(((ax1_ax2_fused >> 3) * 4) + ax4)]) * 4.250169e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 32) + cse_var_27) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_9(float* p0, float* T_cast, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_9_let = (&(global_const_workspace_42_var[1861712]));
  void* fused_constant_19_let = (&(global_const_workspace_42_var[1821696]));
  void* PaddedInput_let = (&(global_workspace_43_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 320; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 10; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 10);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 40) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= i3)) && (i3 < 9)) ? p0[((((((i0_i1_fused_i2_fused / 10) * 256) + (cse_var_2 * 32)) + cse_var_1) + i4) - 36)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 256; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_43_var[83968]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_43_var[84096]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused >> 3);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_3) + oci_c)] * ((float*)fused_constant_19_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused >> 3);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_19_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused >> 3);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_19_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused >> 3);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_19_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused >> 3);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_19_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused >> 3);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_19_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused >> 3);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_19_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused >> 3);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 400) + (kh * 40)) + ((ax1_ax2_fused & 7) * 40)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_19_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 8; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_26 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_26] = ((float*)DepthwiseConv2d_global_let)[cse_var_26];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_27 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_27 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_9_let)[(((ax1_ax2_fused >> 3) * 4) + ax4)]) * 4.250169e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 32) + cse_var_27) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_clip_cast(float* p0, uint8_t* T_cast, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_69_var[8032]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 1001; ++k) {
    float v_ = ((float*)T_softmax_maxelem_let)[0];
    float v__1 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  void* T_softmax_exp_let = (&(global_workspace_69_var[0]));
  for (int32_t i1 = 0; i1 < 1001; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  void* T_softmax_expsum_let = (&(global_workspace_69_var[8032]));
  ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 1001; ++k_1) {
    ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
  }
  void* T_softmax_norm_let = (&(global_workspace_69_var[4016]));
  for (int32_t i1_1 = 0; i1_1 < 1001; ++i1_1) {
    ((float*)T_softmax_norm_let)[i1_1] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
  }
  for (int32_t ax1 = 0; ax1 < 1001; ++ax1) {
    float v__2 = roundf((((float*)T_softmax_norm_let)[ax1] * 2.560000e+02f));
    float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
    T_cast[ax1] = ((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_transpose_cast_subtract_cast_layout_transform(uint8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 3; ++ax4_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 384) + (ax3 * 3)) + ax4_inner);
        T_layout_trans[cse_var_1] = ((float)(((int32_t)p0[cse_var_1]) - 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(uint8_t* input_buffer_var, uint8_t* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_26_let = (&(global_workspace_1_var[36864]));
  void* sid_25_let = (&(global_workspace_1_var[53248]));
  void* sid_27_let = (&(global_workspace_1_var[36864]));
  void* sid_23_let = (&(global_workspace_1_var[51200]));
  void* sid_19_let = (&(global_workspace_1_var[51200]));
  void* sid_22_let = (&(global_workspace_1_var[83968]));
  void* sid_18_let = (&(global_workspace_1_var[83968]));
  void* sid_24_let = (&(global_workspace_1_var[83968]));
  void* sid_20_let = (&(global_workspace_1_var[83968]));
  void* sid_16_let = (&(global_workspace_1_var[83968]));
  void* sid_29_let = (&(global_workspace_1_var[16384]));
  void* sid_6_let = (&(global_workspace_1_var[147968]));
  void* sid_17_let = (&(global_workspace_1_var[51200]));
  void* sid_12_let = (&(global_workspace_1_var[148480]));
  void* sid_2_let = (&(global_workspace_1_var[270464]));
  void* sid_15_let = (&(global_workspace_1_var[51200]));
  void* sid_4_let = (&(global_workspace_1_var[270400]));
  void* sid_8_let = (&(global_workspace_1_var[279040]));
  void* sid_7_let = (&(global_workspace_1_var[147968]));
  void* sid_5_let = (&(global_workspace_1_var[279040]));
  void* sid_30_let = (&(global_workspace_1_var[1024]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[148480]));
  void* sid_21_let = (&(global_workspace_1_var[51200]));
  void* sid_10_let = (&(global_workspace_1_var[82944]));
  void* sid_11_let = (&(global_workspace_1_var[82944]));
  void* sid_13_let = (&(global_workspace_1_var[83968]));
  void* sid_1_let = (&(global_workspace_1_var[199696]));
  void* sid_28_let = (&(global_workspace_1_var[0]));
  void* sid_14_let = (&(global_workspace_1_var[51200]));
  void* sid_31_let = (&(global_workspace_1_var[0]));
  void* sid_32_let = (&(global_workspace_1_var[1024]));
  void* sid_33_let = (&(global_workspace_1_var[4016]));
  if (tvmgen_default_fused_transpose_cast_subtract_cast_layout_transform(input_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_1(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_1(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_2(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_2(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_3(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_3(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_4(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_4(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_5(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_5(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_6(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_6(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_7(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_7(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_8(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_8(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_9(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_9(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_10(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_10(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_11(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_11(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_12(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_12(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_layout_transform(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_avg_pool2d_divide_round_clip_cast(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_reshape_cast_cast_layout_transform(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_reshape_cast_subtract_cast_multiply(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_clip_cast(sid_33_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

