// tvm target: c -keys=cpu -model=esp32
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_esp_main_0(int8_t*, int8_t*, int8_t*, int8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_esp_main_1(int8_t*, int8_t*, int8_t*, int8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_esp_main_2(int8_t*, int8_t*, int8_t*, int8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_esp_main_3(int8_t*, int8_t*, int8_t*, int8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_esp_main_4(int8_t*, int8_t*, int8_t*, int8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_esp_main_5(int8_t*, int8_t*, int8_t*, int8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_esp_main_6(int8_t*, int8_t*, int8_t*, int8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_esp_main_7(int8_t*, int8_t*, int8_t*, int8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_esp_main_8(int8_t*, int8_t*, int8_t*, int8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_multiply_cast_multiply_add_divide_round_clip_cast_nn_relu(int8_t* p0, int8_t* p1, int8_t* T_relu, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 32; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 32; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 512) + (ax2 * 16)) + ax3_inner);
        float v_ = roundf((((((float)p0[cse_var_1]) * 1.250000e-01f) + (((float)p1[cse_var_1]) * 1.250000e-01f)) * 8.000000e+00f));
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        int8_t v__2 = (int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f));
        int8_t v__3 = (int8_t)0;
        T_relu[cse_var_1] = ((v__2) > (v__3) ? (v__2) : (v__3));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_multiply_cast_multiply_add_divide_round_clip_cast_nn_relu_cast_multip_b2ce8dcca7699c27_(int8_t* p0, int8_t* p1, float* T_multiply, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_1 = ((((ax0_ax1_fused * 512) + (ax2 * 64)) + (ax3_outer * 16)) + ax3_inner);
          float v_ = roundf((((((float)p0[cse_var_1]) * 1.250000e-01f) + (((float)p1[cse_var_1]) * 2.500000e-01f)) * 2.000000e+00f));
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          int8_t v__2 = (int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f));
          int8_t v__3 = (int8_t)0;
          T_multiply[cse_var_1] = (((float)((v__2) > (v__3) ? (v__2) : (v__3))) * 5.000000e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_multiply_cast_multiply_add_divide_round_clip_multiply_nn_relu_divide__278ba95c92af7616_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 16; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_1 = ((((ax0_ax1_fused * 512) + (ax2 * 32)) + (ax3_outer * 16)) + ax3_inner);
          float v_ = roundf((((((float)p0[cse_var_1]) * 6.250000e-02f) + (((float)p1[cse_var_1]) * 1.250000e-01f)) * 4.000000e+00f));
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          float v__2 = ((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)) * 2.500000e-01f;
          float v__3 = roundf((((v__2) > (0.000000e+00f) ? (v__2) : (0.000000e+00f)) * 8.000000e+00f));
          float v__4 = (v__3) < (1.270000e+02f) ? (v__3) : (1.270000e+02f);
          T_cast[cse_var_1] = ((int8_t)((v__4) > (-1.280000e+02f) ? (v__4) : (-1.280000e+02f)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_multiply_nn_relu_divide_round_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_1 = ((((ax0_ax1_fused * 512) + (ax2 * 64)) + (ax3_outer * 16)) + ax3_inner);
          float v_ = ((float)p0[cse_var_1]) * 1.250000e-01f;
          float v__1 = roundf((((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f)) * 1.600000e+01f));
          float v__2 = (v__1) < (1.270000e+02f) ? (v__1) : (1.270000e+02f);
          T_cast[cse_var_1] = ((int8_t)((v__2) > (-1.280000e+02f) ? (v__2) : (-1.280000e+02f)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 32; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 32; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 96) + (ax2 * 3)) + ax3_inner);
        float v_ = roundf((p0[cse_var_1] * 2.500000e-01f));
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_cast[cse_var_1] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_reshape_cast(int8_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_divide_round_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* pool_sum_let = (&(global_workspace_13_var[16384]));
  for (int32_t ax3_init = 0; ax3_init < 64; ++ax3_init) {
    ((float*)pool_sum_let)[ax3_init] = 0.000000e+00f;
  }
  for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 64; ++rv0_rv1_fused) {
    for (int32_t ax3 = 0; ax3 < 64; ++ax3) {
      ((float*)pool_sum_let)[ax3] = (((float*)pool_sum_let)[ax3] + p0[((rv0_rv1_fused * 64) + ax3)]);
    }
  }
  for (int32_t ax3_1 = 0; ax3_1 < 64; ++ax3_1) {
    float v_ = roundf(((((float*)pool_sum_let)[ax3_1] * 1.562500e-02f) * 1.600000e+01f));
    float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
    T_cast[ax3_1] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_where_add_righ_467e114bd6595de9_(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_constant_1_let = (&(global_const_workspace_16_var[78000]));
  void* fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_constant_let = (&(global_const_workspace_16_var[78080]));
  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_16_var[78352]));
  void* fused_constant_let = (&(global_const_workspace_16_var[75776]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_17_var[208]));
    void* compute_global_let = (&(global_workspace_17_var[176]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax(float* p0, float* T_softmax_norm, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_19_var[48]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 10; ++k) {
    float v_ = ((float*)T_softmax_maxelem_let)[0];
    float v__1 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  void* T_softmax_exp_let = (&(global_workspace_19_var[0]));
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  void* T_softmax_expsum_let = (&(global_workspace_19_var[48]));
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
TVM_DLL int32_t tvmgen_default___tvm_main__(float* input_1_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* constant_12_let = (&(global_const_workspace_0_var[73728]));
  void* constant_14_let = (&(global_const_workspace_0_var[36864]));
  void* constant_9_let = (&(global_const_workspace_0_var[78400]));
  void* constant_8_let = (&(global_const_workspace_0_var[64512]));
  void* constant_4_let = (&(global_const_workspace_0_var[69120]));
  void* constant_7_let = (&(global_const_workspace_0_var[78432]));
  void* constant_10_let = (&(global_const_workspace_0_var[55296]));
  void* constant_1_let = (&(global_const_workspace_0_var[78528]));
  void* constant_11_let = (&(global_const_workspace_0_var[78464]));
  void* constant_5_let = (&(global_const_workspace_0_var[78496]));
  void* constant_6_let = (&(global_const_workspace_0_var[77056]));
  void* constant_3_let = (&(global_const_workspace_0_var[78512]));
  void* constant_2_let = (&(global_const_workspace_0_var[71424]));
  void* constant_0_let = (&(global_const_workspace_0_var[77568]));
  void* constant_13_let = (&(global_const_workspace_0_var[78288]));
  void* constant_15_let = (&(global_const_workspace_0_var[78224]));
  void* constant_16_let = (&(global_const_workspace_0_var[0]));
  void* constant_17_let = (&(global_const_workspace_0_var[78160]));
  void* sid_33_let = (&(global_workspace_1_var[128]));
  void* sid_17_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[16384]));
  void* sid_27_let = (&(global_workspace_1_var[8192]));
  void* sid_4_let = (&(global_workspace_1_var[0]));
  void* sid_24_let = (&(global_workspace_1_var[16384]));
  void* sid_10_let = (&(global_workspace_1_var[32768]));
  void* sid_7_let = (&(global_workspace_1_var[16384]));
  void* sid_14_let = (&(global_workspace_1_var[8192]));
  void* sid_11_let = (&(global_workspace_1_var[16384]));
  void* sid_28_let = (&(global_workspace_1_var[0]));
  void* sid_21_let = (&(global_workspace_1_var[0]));
  void* sid_20_let = (&(global_workspace_1_var[16384]));
  void* sid_31_let = (&(global_workspace_1_var[20480]));
  void* sid_32_let = (&(global_workspace_1_var[0]));
  void* sid_34_let = (&(global_workspace_1_var[0]));
  void* sid_35_let = (&(global_workspace_1_var[128]));
  if (tvmgen_default_fused_divide_round_clip_cast(input_1_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_esp_main_0(sid_1_let, constant_0_let, constant_1_let, sid_4_let) != 0 ) return -1;
  if (tvmgen_default_esp_main_1(sid_4_let, constant_2_let, constant_3_let, sid_7_let) != 0 ) return -1;
  if (tvmgen_default_esp_main_2(sid_7_let, constant_4_let, constant_5_let, sid_10_let) != 0 ) return -1;
  if (tvmgen_default_fused_cast_multiply_cast_multiply_add_divide_round_clip_cast_nn_relu(sid_4_let, sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_esp_main_3(sid_11_let, constant_6_let, constant_7_let, sid_14_let) != 0 ) return -1;
  if (tvmgen_default_esp_main_4(sid_11_let, constant_8_let, constant_9_let, sid_17_let) != 0 ) return -1;
  if (tvmgen_default_esp_main_5(sid_17_let, constant_10_let, constant_11_let, sid_20_let) != 0 ) return -1;
  if (tvmgen_default_fused_cast_multiply_cast_multiply_add_divide_round_clip_multiply_nn_relu_divide__278ba95c92af7616_(sid_14_let, sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_esp_main_6(sid_21_let, constant_12_let, constant_13_let, sid_24_let) != 0 ) return -1;
  if (tvmgen_default_esp_main_7(sid_21_let, constant_14_let, constant_15_let, sid_27_let) != 0 ) return -1;
  if (tvmgen_default_fused_cast_multiply_nn_relu_divide_round_clip_cast(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_esp_main_8(sid_28_let, constant_16_let, constant_17_let, sid_31_let) != 0 ) return -1;
  if (tvmgen_default_fused_cast_multiply_cast_multiply_add_divide_round_clip_cast_nn_relu_cast_multip_b2ce8dcca7699c27_(sid_24_let, sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_avg_pool2d_divide_round_clip_cast(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_reshape_cast(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_where_add_righ_467e114bd6595de9_(sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax(sid_35_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

