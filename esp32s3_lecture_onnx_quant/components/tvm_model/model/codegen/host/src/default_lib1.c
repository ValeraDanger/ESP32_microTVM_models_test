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
TVM_DLL int32_t tvmgen_default_fused_cast_nn_relu_reshape_divide_round_clip_cast_cast(int8_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 1152; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      float v_ = (float)p0[cse_var_1];
      float v__1 = roundf((((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f)) * 4.000000e+00f));
      float v__2 = (v__1) < (1.270000e+02f) ? (v__1) : (1.270000e+02f);
      T_cast[cse_var_1] = ((int16_t)((int8_t)((v__2) > (-1.280000e+02f) ? (v__2) : (-1.280000e+02f))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_where_add_righ_467e114bd6595de9_(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_constant_1_let = (&(global_const_workspace_8_var[388224]));
  void* fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_constant_let = (&(global_const_workspace_8_var[388304]));
  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_8_var[388448]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[0]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_9_var[36944]));
    void* compute_global_let = (&(global_workspace_9_var[36912]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 18432; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((ax1_outer_ax0_outer_fused * 92160) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t x_inner_inner = 0; x_inner_inner < 5; ++x_inner_inner) {
      ((int32_t*)compute_let)[x_inner_inner] = ((int32_t*)compute_global_let)[x_inner_inner];
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = (int32_t)((((((int64_t)((int32_t*)compute_let)[ax1_inner_inner]) * (int64_t)1073741824) + (((int64_t)((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]) * (int64_t)1073741824)) + ((0 < ((int32_t)((int64_t)0 <= (((int64_t)((int32_t*)compute_let)[ax1_inner_inner]) + ((int64_t)((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]))))) ? ((int64_t*)fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_constant_let)[cse_var_1] : ((int64_t*)fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_constant_1_let)[cse_var_1])) >> (int64_t)39);
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)((int8_t)((v__1) > (-128) ? (v__1) : (-128)))) * 2.500000e-01f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_multiply_nn_relu_round_c_d4b129127f0e4cd_(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_fixed_point_multiply_clip_cast_constant_let = (&(global_const_workspace_4_var[388384]));
  void* fused_constant_let = (&(global_const_workspace_4_var[387072]));
  void* pad_temp_let = (&(global_workspace_5_var[43264]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      int32_t cse_var_1 = ((i0_i1_fused * 28) + i2);
      ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 676; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_5_var[44832]));
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int16_t*)pad_temp_let)[(((((ax0_ax1_fused_ax2_fused / 26) * 28) + (ry * 28)) + rx) + (ax0_ax1_fused_ax2_fused % 26))]) * ((int32_t)((int16_t*)fused_constant_let)[(((ry * 192) + (rx * 64)) + ff)])));
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = (((int32_t*)conv2d_nhwc_let)[ax3_inner] + 128) >> 8;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      float v__2 = ((float)(((int8_t)((v__1) > (-128) ? (v__1) : (-128))) + ((int8_t*)fused_nn_conv2d_fixed_point_multiply_clip_cast_constant_let)[ax3_inner])) * 2.000000e+00f;
      float v__3 = roundf(((v__2) > (0.000000e+00f) ? (v__2) : (0.000000e+00f)));
      float v__4 = (v__3) < (1.270000e+02f) ? (v__3) : (1.270000e+02f);
      T_cast[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = ((int8_t)((v__4) > (-1.280000e+02f) ? (v__4) : (-1.280000e+02f)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax(float* p0, float* T_softmax_norm, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_11_var[48]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 10; ++k) {
    float v_ = ((float*)T_softmax_maxelem_let)[0];
    float v__1 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  void* T_softmax_exp_let = (&(global_workspace_11_var[0]));
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  void* T_softmax_expsum_let = (&(global_workspace_11_var[48]));
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
TVM_DLL int32_t tvmgen_default_fused_reshape_divide_round_clip_cast_layout_transform_cast(float* p0, int16_t* T_cast, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 28; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      int32_t cse_var_1 = ((ax0_ax1_fused * 28) + ax2);
      float v_ = roundf((p0[cse_var_1] * 2.500000e-01f));
      float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
      T_cast[cse_var_1] = ((int16_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* input_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* constant_0_let = (&(global_const_workspace_0_var[368640]));
  void* constant_1_let = (&(global_const_workspace_0_var[388496]));
  void* sid_5_let = (&(global_workspace_1_var[43264]));
  void* sid_6_let = (&(global_workspace_1_var[0]));
  void* sid_2_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[0]));
  void* sid_7_let = (&(global_workspace_1_var[36864]));
  if (tvmgen_default_fused_reshape_divide_round_clip_cast_layout_transform_cast(input_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_fixed_point_multiply_clip_cast_add_cast_multiply_nn_relu_round_c_d4b129127f0e4cd_(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_esp_main_0(sid_2_let, constant_0_let, constant_1_let, sid_5_let) != 0 ) return -1;
  if (tvmgen_default_fused_cast_nn_relu_reshape_divide_round_clip_cast_cast(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_cast_multiply_zeros_greater_equal_where_add_righ_467e114bd6595de9_(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax(sid_7_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

