// tvm target: c -keys=cpu -model=esp32
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_transpose_reshape(float* p0, float* T_reshape, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 324; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      T_reshape[((ax1_outer * 16) + ax1_inner)] = p0[(((((ax1_outer % 36) * 144) + ((ax1_inner >> 2) * 36)) + ((ax1_outer / 36) * 4)) + (ax1_inner & 3))];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add(float* p0, float* T_add, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_10_var[1731520]));
  void* fused_constant_2_let = (&(global_const_workspace_10_var[1719072]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 96; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_11_var[36864]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_11_var[37248]));
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
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 4)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 8)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 12)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 16)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 20)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 24)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 28)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 32)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 36)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 40)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 44)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 48)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 52)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 56)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 60)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 64)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 68)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 72)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 76)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 80)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 84)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 88)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 92)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
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
        T_add[(((ax0_ax1_fused_ax2_outer_fused * 96) + cse_var_25) + ax4)] = (((float*)conv2d_NCHWc_let)[(cse_var_25 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_1_let)[(((ax0_ax1_fused_ax2_outer_fused / 24) * 4) + ax4)]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_1(float* p0, float* T_add, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_3_let = (&(global_const_workspace_18_var[1731360]));
  void* fused_constant_5_let = (&(global_const_workspace_18_var[1675008]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 36; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_19_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_19_var[384]));
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
    for (int32_t ic_outer = 0; ic_outer < 18; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 4)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 8)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 12)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 16)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 20)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 24)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 28)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 32)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 36)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 40)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 44)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 48)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 52)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 56)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 60)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 64)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 68)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 72)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 76)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 80)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 84)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 88)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 92)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
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
          T_add[((((ax0_ax1_fused_ax2_outer_fused * 96) + cse_var_26) + cse_var_25) + ax4)] = (((float*)conv2d_NCHWc_let)[((cse_var_26 + cse_var_25) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_3_let)[(((ax0_ax1_fused_ax2_outer_fused / 6) * 4) + ax4)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_2(float* p0, float* T_add, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_7_let = (&(global_const_workspace_32_var[1730944]));
  void* fused_constant_11_let = (&(global_const_workspace_32_var[1605888]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 20; ++ax0_ax1_fused_ax2_outer_fused) {
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
    for (int32_t ic_outer = 0; ic_outer < 24; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
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
          T_add[((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_20) + cse_var_19) + ax4)] = (((float*)conv2d_NCHWc_let)[((cse_var_20 + cse_var_19) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_7_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_3(float* p0, float* T_add, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_13_let = (&(global_const_workspace_50_var[1730592]));
  void* fused_constant_20_let = (&(global_const_workspace_50_var[1522176]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 24; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_51_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_51_var[288]));
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
    for (int32_t ic_outer = 0; ic_outer < 30; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 480) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
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
          T_add[((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_20) + cse_var_19) + ax4)] = (((float*)conv2d_NCHWc_let)[((cse_var_20 + cse_var_19) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_13_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_4(float* p0, float* T_add, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_17_let = (&(global_const_workspace_64_var[1728736]));
  void* fused_constant_26_let = (&(global_const_workspace_64_var[1105920]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 24; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_65_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_65_var[144]));
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
    for (int32_t ic_outer = 0; ic_outer < 72; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[((ic_outer * 36) + ic_inner)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[(((ic_outer * 36) + ic_inner) + 4)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[(((ic_outer * 36) + ic_inner) + 8)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((ic_outer * 36) + ic_inner) + 12)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[(((ic_outer * 36) + ic_inner) + 16)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((ic_outer * 36) + ic_inner) + 20)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[(((ic_outer * 36) + ic_inner) + 24)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((ic_outer * 36) + ic_inner) + 28)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[(((ic_outer * 36) + ic_inner) + 32)] * ((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_outer_fused * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
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
          T_add[((((ax0_ax1_fused_ax2_outer_fused * 36) + cse_var_11) + cse_var_10) + ax4)] = (((float*)conv2d_NCHWc_let)[((cse_var_11 + cse_var_10) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_17_let)[((ax0_ax1_fused_ax2_outer_fused * 4) + ax4)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_add(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_5_let = (&(global_const_workspace_24_var[1731264]));
  void* fused_constant_8_let = (&(global_const_workspace_24_var[1658112]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 36; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_25_var[13824]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_25_var[14208]));
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
    for (int32_t ic_outer = 0; ic_outer < 22; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 4)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 8)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 12)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 16)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 20)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 24)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 28)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 32)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 36)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 40)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 44)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 48)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 52)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 56)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 60)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 64)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 68)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 72)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 76)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 80)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 84)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 88)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 92)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 352) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
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
          int32_t cse_var_27 = (ax2_inner * 48);
          int32_t cse_var_26 = (ax3_inner * 4);
          int32_t cse_var_25 = ((((ax0_ax1_fused_ax2_outer_fused * 96) + cse_var_27) + cse_var_26) + ax4);
          T_add[cse_var_25] = (p1[cse_var_25] + (((float*)conv2d_NCHWc_let)[((cse_var_27 + cse_var_26) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_5_let)[(((ax0_ax1_fused_ax2_outer_fused / 6) * 4) + ax4)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_add_1(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_9_let = (&(global_const_workspace_38_var[1730784]));
  void* fused_constant_14_let = (&(global_const_workspace_38_var[1390080]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 20; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_39_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_39_var[288]));
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
    for (int32_t ic_outer = 0; ic_outer < 60; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
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
          int32_t cse_var_21 = (ax2_inner * 24);
          int32_t cse_var_20 = (ax3_inner * 4);
          int32_t cse_var_19 = ((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_21) + cse_var_20) + ax4);
          T_add[cse_var_19] = (p1[cse_var_19] + (((float*)conv2d_NCHWc_let)[((cse_var_21 + cse_var_20) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_9_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_add_2(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_11_let = (&(global_const_workspace_44_var[1731104]));
  void* fused_constant_17_let = (&(global_const_workspace_44_var[1313280]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 20; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_45_var[5760]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_45_var[6048]));
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
    for (int32_t ic_outer = 0; ic_outer < 60; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 960) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
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
          int32_t cse_var_21 = (ax2_inner * 24);
          int32_t cse_var_20 = (ax3_inner * 4);
          int32_t cse_var_19 = ((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_21) + cse_var_20) + ax4);
          T_add[cse_var_19] = (p1[cse_var_19] + (((float*)conv2d_NCHWc_let)[((cse_var_21 + cse_var_20) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_11_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_add_3(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_15_let = (&(global_const_workspace_56_var[1730400]));
  void* fused_constant_23_let = (&(global_const_workspace_56_var[1466880]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 24; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_57_var[6912]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_57_var[7200]));
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
    for (int32_t ic_outer = 0; ic_outer < 36; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 576) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
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
          int32_t cse_var_21 = (ax2_inner * 24);
          int32_t cse_var_20 = (ax3_inner * 4);
          int32_t cse_var_19 = ((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_21) + cse_var_20) + ax4);
          T_add[cse_var_19] = (p1[cse_var_19] + (((float*)conv2d_NCHWc_let)[((cse_var_21 + cse_var_20) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_15_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_add_4(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_19_let = (&(global_const_workspace_70_var[1728352]));
  void* fused_constant_29_let = (&(global_const_workspace_70_var[663552]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 24; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_71_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_71_var[144]));
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
    for (int32_t ic_outer = 0; ic_outer < 144; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[((ic_outer * 36) + ic_inner)] * ((float*)fused_constant_29_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[(((ic_outer * 36) + ic_inner) + 4)] * ((float*)fused_constant_29_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[(((ic_outer * 36) + ic_inner) + 8)] * ((float*)fused_constant_29_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((ic_outer * 36) + ic_inner) + 12)] * ((float*)fused_constant_29_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[(((ic_outer * 36) + ic_inner) + 16)] * ((float*)fused_constant_29_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((ic_outer * 36) + ic_inner) + 20)] * ((float*)fused_constant_29_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[(((ic_outer * 36) + ic_inner) + 24)] * ((float*)fused_constant_29_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((ic_outer * 36) + ic_inner) + 28)] * ((float*)fused_constant_29_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[(((ic_outer * 36) + ic_inner) + 32)] * ((float*)fused_constant_29_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
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
          int32_t cse_var_12 = (ax2_inner * 12);
          int32_t cse_var_11 = (ax3_inner * 4);
          int32_t cse_var_10 = ((((ax0_ax1_fused_ax2_outer_fused * 36) + cse_var_12) + cse_var_11) + ax4);
          T_add[cse_var_10] = (p1[cse_var_10] + (((float*)conv2d_NCHWc_let)[((cse_var_12 + cse_var_11) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_19_let)[((ax0_ax1_fused_ax2_outer_fused * 4) + ax4)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_add_5(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_21_let = (&(global_const_workspace_76_var[1727968]));
  void* fused_constant_32_let = (&(global_const_workspace_76_var[221184]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 24; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_77_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_77_var[144]));
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
    for (int32_t ic_outer = 0; ic_outer < 144; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[((ic_outer * 36) + ic_inner)] * ((float*)fused_constant_32_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[(((ic_outer * 36) + ic_inner) + 4)] * ((float*)fused_constant_32_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[(((ic_outer * 36) + ic_inner) + 8)] * ((float*)fused_constant_32_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((ic_outer * 36) + ic_inner) + 12)] * ((float*)fused_constant_32_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[(((ic_outer * 36) + ic_inner) + 16)] * ((float*)fused_constant_32_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((ic_outer * 36) + ic_inner) + 20)] * ((float*)fused_constant_32_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[(((ic_outer * 36) + ic_inner) + 24)] * ((float*)fused_constant_32_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((ic_outer * 36) + ic_inner) + 28)] * ((float*)fused_constant_32_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[(((ic_outer * 36) + ic_inner) + 32)] * ((float*)fused_constant_32_let)[((((ax0_ax1_fused_ax2_outer_fused * 2304) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
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
          int32_t cse_var_12 = (ax2_inner * 12);
          int32_t cse_var_11 = (ax3_inner * 4);
          int32_t cse_var_10 = ((((ax0_ax1_fused_ax2_outer_fused * 36) + cse_var_12) + cse_var_11) + ax4);
          T_add[cse_var_10] = (p1[cse_var_10] + (((float*)conv2d_NCHWc_let)[((cse_var_12 + cse_var_11) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_21_let)[((ax0_ax1_fused_ax2_outer_fused * 4) + ax4)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu(float* p0, float* T_relu, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_let = (&(global_const_workspace_4_var[1731584]));
  void* fused_constant_let = (&(global_const_workspace_4_var[1725664]));
  void* data_pad_let = (&(global_workspace_5_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 97; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 97; ++i3) {
      ((float*)data_pad_let)[((i0_i1_fused_i2_fused * 97) + i3)] = (((i0_i1_fused_i2_fused < 96) && (i3 < 96)) ? p0[((i0_i1_fused_i2_fused * 96) + i3)] : 0.000000e+00f);
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 192; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_5_var[37648]));
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      void* conv2d_NCHWc_global_let = (&(global_workspace_5_var[38416]));
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
          T_relu[((((ax0_ax1_fused_ax2_fused * 192) + cse_var_26) + cse_var_25) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_1(float* p0, float* T_relu, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_2_let = (&(global_const_workspace_12_var[1730112]));
  void* fused_constant_3_let = (&(global_const_workspace_12_var[1687104]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 432; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_13_var[36864]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_13_var[37248]));
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
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 4)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 8)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 12)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 16)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 20)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 24)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 28)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 32)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 36)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 40)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 44)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 48)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 52)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 56)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 60)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 64)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 68)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 72)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 76)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 80)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 84)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 88)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 2304) + ((ax0_ax1_fused_ax2_outer_fused % 24) * 96)) + ic_inner) + 92)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 24) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
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
        T_relu[(((ax0_ax1_fused_ax2_outer_fused * 96) + cse_var_25) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_10(float* p0, float* T_relu, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_20_let = (&(global_const_workspace_72_var[1712160]));
  void* fused_constant_30_let = (&(global_const_workspace_72_var[442368]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 144; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_73_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_73_var[144]));
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
    for (int32_t ic_outer = 0; ic_outer < 24; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[((ic_outer * 36) + ic_inner)] * ((float*)fused_constant_30_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[(((ic_outer * 36) + ic_inner) + 4)] * ((float*)fused_constant_30_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[(((ic_outer * 36) + ic_inner) + 8)] * ((float*)fused_constant_30_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((ic_outer * 36) + ic_inner) + 12)] * ((float*)fused_constant_30_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[(((ic_outer * 36) + ic_inner) + 16)] * ((float*)fused_constant_30_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((ic_outer * 36) + ic_inner) + 20)] * ((float*)fused_constant_30_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[(((ic_outer * 36) + ic_inner) + 24)] * ((float*)fused_constant_30_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((ic_outer * 36) + ic_inner) + 28)] * ((float*)fused_constant_30_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[(((ic_outer * 36) + ic_inner) + 32)] * ((float*)fused_constant_30_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
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
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_11 + cse_var_10) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_20_let)[((ax0_ax1_fused_ax2_outer_fused * 4) + ax4)];
          T_relu[((((ax0_ax1_fused_ax2_outer_fused * 36) + cse_var_11) + cse_var_10) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_11(float* p0, float* T_relu, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_22_let = (&(global_const_workspace_78_var[1709856]));
  void* fused_constant_33_let = (&(global_const_workspace_78_var[0]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 144; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_79_var[24192]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_79_var[24336]));
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
    for (int32_t ic_outer = 0; ic_outer < 24; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[((ic_outer * 36) + ic_inner)] * ((float*)fused_constant_33_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[(((ic_outer * 36) + ic_inner) + 4)] * ((float*)fused_constant_33_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[(((ic_outer * 36) + ic_inner) + 8)] * ((float*)fused_constant_33_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((ic_outer * 36) + ic_inner) + 12)] * ((float*)fused_constant_33_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[(((ic_outer * 36) + ic_inner) + 16)] * ((float*)fused_constant_33_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((ic_outer * 36) + ic_inner) + 20)] * ((float*)fused_constant_33_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[(((ic_outer * 36) + ic_inner) + 24)] * ((float*)fused_constant_33_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((ic_outer * 36) + ic_inner) + 28)] * ((float*)fused_constant_33_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[(((ic_outer * 36) + ic_inner) + 32)] * ((float*)fused_constant_33_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
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
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_11 + cse_var_10) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_22_let)[((ax0_ax1_fused_ax2_outer_fused * 4) + ax4)];
          T_relu[((((ax0_ax1_fused_ax2_outer_fused * 36) + cse_var_11) + cse_var_10) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_2(float* p0, float* T_relu, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_4_let = (&(global_const_workspace_20_var[1729472]));
  void* fused_constant_6_let = (&(global_const_workspace_20_var[1666560]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 132; ++ax0_ax1_fused_ax2_outer_fused) {
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
    for (int32_t ic_outer = 0; ic_outer < 6; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 4)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 8)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 12)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 16)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 20)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 24)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 28)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 32)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 36)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 40)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 44)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 48)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 52)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 56)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 60)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 64)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 68)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 72)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 76)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 80)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 84)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 88)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 92)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
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
          T_relu[((((ax0_ax1_fused_ax2_outer_fused * 96) + cse_var_26) + cse_var_25) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_3(float* p0, float* T_relu, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_6_let = (&(global_const_workspace_26_var[1727584]));
  void* fused_constant_9_let = (&(global_const_workspace_26_var[1631616]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 144; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_27_var[13824]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_27_var[14208]));
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
    for (int32_t ic_outer = 0; ic_outer < 6; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 4)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 8)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 12)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 16)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 20)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 24)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 28)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 32)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 36)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 40)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 44)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 48)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 52)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 56)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 60)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 64)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 68)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 72)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 76)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 80)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 84)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 88)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 576) + ((ax0_ax1_fused_ax2_outer_fused % 6) * 96)) + ic_inner) + 92)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 6) * 96) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
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
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_26 + cse_var_25) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_6_let)[(((ax0_ax1_fused_ax2_outer_fused / 6) * 4) + ax4)];
          T_relu[((((ax0_ax1_fused_ax2_outer_fused * 96) + cse_var_26) + cse_var_25) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_4(float* p0, float* T_relu, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_8_let = (&(global_const_workspace_34_var[1722016]));
  void* fused_constant_12_let = (&(global_const_workspace_34_var[1428480]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 120; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_35_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_35_var[288]));
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
    for (int32_t ic_outer = 0; ic_outer < 10; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
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
          T_relu[((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_20) + cse_var_19) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_5(float* p0, float* T_relu, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_10_let = (&(global_const_workspace_40_var[1722976]));
  void* fused_constant_15_let = (&(global_const_workspace_40_var[1351680]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 120; ++ax0_ax1_fused_ax2_outer_fused) {
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
    for (int32_t ic_outer = 0; ic_outer < 10; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
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
          T_relu[((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_20) + cse_var_19) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_6(float* p0, float* T_relu, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_12_let = (&(global_const_workspace_46_var[1726720]));
  void* fused_constant_18_let = (&(global_const_workspace_46_var[1586688]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 60; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_47_var[5760]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_47_var[6048]));
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
    for (int32_t ic_outer = 0; ic_outer < 10; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 160) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
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
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_20 + cse_var_19) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_12_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)];
          T_relu[((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_20) + cse_var_19) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_7(float* p0, float* T_relu, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_14_let = (&(global_const_workspace_52_var[1724512]));
  void* fused_constant_21_let = (&(global_const_workspace_52_var[1494528]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 72; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_53_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_53_var[288]));
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
    for (int32_t ic_outer = 0; ic_outer < 12; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
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
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_20 + cse_var_19) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_14_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)];
          T_relu[((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_20) + cse_var_19) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_8(float* p0, float* T_relu, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_16_let = (&(global_const_workspace_58_var[1717920]));
  void* fused_constant_24_let = (&(global_const_workspace_58_var[1216512]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 144; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_59_var[6912]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_59_var[7200]));
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
    for (int32_t ic_outer = 0; ic_outer < 12; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 4)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 8)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 12)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 16)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 20)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 24)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 28)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 32)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 36)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 40)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 44)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 48)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 52)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 56)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 60)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 64)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 144) + ((ax0_ax1_fused_ax2_outer_fused & 1) * 72)) + ic_inner) + 68)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused >> 1) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
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
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_20 + cse_var_19) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_16_let)[(((ax0_ax1_fused_ax2_outer_fused >> 1) * 4) + ax4)];
          T_relu[((((ax0_ax1_fused_ax2_outer_fused * 72) + cse_var_20) + cse_var_19) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_9(float* p0, float* T_relu, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_18_let = (&(global_const_workspace_66_var[1714464]));
  void* fused_constant_27_let = (&(global_const_workspace_66_var[884736]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 144; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_67_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_67_var[144]));
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
    for (int32_t ic_outer = 0; ic_outer < 24; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[((ic_outer * 36) + ic_inner)] * ((float*)fused_constant_27_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[(((ic_outer * 36) + ic_inner) + 4)] * ((float*)fused_constant_27_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[(((ic_outer * 36) + ic_inner) + 8)] * ((float*)fused_constant_27_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((ic_outer * 36) + ic_inner) + 12)] * ((float*)fused_constant_27_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[(((ic_outer * 36) + ic_inner) + 16)] * ((float*)fused_constant_27_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((ic_outer * 36) + ic_inner) + 20)] * ((float*)fused_constant_27_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[(((ic_outer * 36) + ic_inner) + 24)] * ((float*)fused_constant_27_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((ic_outer * 36) + ic_inner) + 28)] * ((float*)fused_constant_27_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[(((ic_outer * 36) + ic_inner) + 32)] * ((float*)fused_constant_27_let)[((((ax0_ax1_fused_ax2_outer_fused * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
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
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_11 + cse_var_10) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_18_let)[((ax0_ax1_fused_ax2_outer_fused * 4) + ax4)];
          T_relu[((((ax0_ax1_fused_ax2_outer_fused * 36) + cse_var_11) + cse_var_10) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack(float* p0, float* compute, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  void* fused_constant_34_let = (&(global_const_workspace_82_var[1271808]));
  void* compute_global_let = (&(global_workspace_83_var[0]));
  for (int32_t x_c_init = 0; x_c_init < 2; ++x_c_init) {
    ((float*)compute_global_let)[x_c_init] = 0.000000e+00f;
  }
  for (int32_t k_outer = 0; k_outer < 5184; ++k_outer) {
    for (int32_t x_c = 0; x_c < 2; ++x_c) {
      ((float*)compute_global_let)[x_c] = (((float*)compute_global_let)[x_c] + (p0[k_outer] * ((float*)fused_constant_34_let)[((k_outer * 2) + x_c)]));
    }
  }
  for (int32_t x_inner_inner = 0; x_inner_inner < 2; ++x_inner_inner) {
    compute[x_inner_inner] = ((float*)compute_global_let)[x_inner_inner];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu(float* p0, float* T_relu, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_let = (&(global_const_workspace_8_var[1731456]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[1725088]));
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 96; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_9_var[190912]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_9_var[190528]));
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
          int32_t cse_var_2 = (ax1_ax2_fused / 24);
          int32_t cse_var_1 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[(((((cse_var_2 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_1) + oci_c)] * ((float*)fused_constant_1_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_5 = (ax1_ax2_fused / 24);
          int32_t cse_var_4 = (kw * 4);
          int32_t cse_var_3 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[((((((cse_var_5 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_4) + oci_c_1) + 8)] * ((float*)fused_constant_1_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_8 = (ax1_ax2_fused / 24);
          int32_t cse_var_7 = (kw * 4);
          int32_t cse_var_6 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[((((((cse_var_8 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_7) + oci_c_2) + 16)] * ((float*)fused_constant_1_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_11 = (ax1_ax2_fused / 24);
          int32_t cse_var_10 = (kw * 4);
          int32_t cse_var_9 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (p0[((((((cse_var_11 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_10) + oci_c_3) + 24)] * ((float*)fused_constant_1_let)[((((cse_var_11 * 36) + (kh * 12)) + cse_var_10) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_14 = (ax1_ax2_fused / 24);
          int32_t cse_var_13 = (kw * 4);
          int32_t cse_var_12 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (p0[((((((cse_var_14 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_13) + oci_c_4) + 32)] * ((float*)fused_constant_1_let)[((((cse_var_14 * 36) + (kh * 12)) + cse_var_13) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_17 = (ax1_ax2_fused / 24);
          int32_t cse_var_16 = (kw * 4);
          int32_t cse_var_15 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (p0[((((((cse_var_17 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_16) + oci_c_5) + 40)] * ((float*)fused_constant_1_let)[((((cse_var_17 * 36) + (kh * 12)) + cse_var_16) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_20 = (ax1_ax2_fused / 24);
          int32_t cse_var_19 = (kw * 4);
          int32_t cse_var_18 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (p0[((((((cse_var_20 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_19) + oci_c_6) + 48)] * ((float*)fused_constant_1_let)[((((cse_var_20 * 36) + (kh * 12)) + cse_var_19) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_23 = (ax1_ax2_fused / 24);
          int32_t cse_var_22 = (kw * 4);
          int32_t cse_var_21 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (p0[((((((cse_var_23 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_22) + oci_c_7) + 56)] * ((float*)fused_constant_1_let)[((((cse_var_23 * 36) + (kh * 12)) + cse_var_22) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_26 = (ax1_ax2_fused / 24);
          int32_t cse_var_25 = (kw * 4);
          int32_t cse_var_24 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (p0[((((((cse_var_26 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_25) + oci_c_8) + 64)] * ((float*)fused_constant_1_let)[((((cse_var_26 * 36) + (kh * 12)) + cse_var_25) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_29 = (ax1_ax2_fused / 24);
          int32_t cse_var_28 = (kw * 4);
          int32_t cse_var_27 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (p0[((((((cse_var_29 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_28) + oci_c_9) + 72)] * ((float*)fused_constant_1_let)[((((cse_var_29 * 36) + (kh * 12)) + cse_var_28) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_32 = (ax1_ax2_fused / 24);
          int32_t cse_var_31 = (kw * 4);
          int32_t cse_var_30 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (p0[((((((cse_var_32 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_31) + oci_c_10) + 80)] * ((float*)fused_constant_1_let)[((((cse_var_32 * 36) + (kh * 12)) + cse_var_31) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_35 = (ax1_ax2_fused / 24);
          int32_t cse_var_34 = (kw * 4);
          int32_t cse_var_33 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_33] = (((float*)DepthwiseConv2d_global_let)[cse_var_33] + (p0[((((((cse_var_35 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_34) + oci_c_11) + 88)] * ((float*)fused_constant_1_let)[((((cse_var_35 * 36) + (kh * 12)) + cse_var_34) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_38 = (ax1_ax2_fused / 24);
          int32_t cse_var_37 = (kw * 4);
          int32_t cse_var_36 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_36] = (((float*)DepthwiseConv2d_global_let)[cse_var_36] + (p0[((((((cse_var_38 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_37) + oci_c_12) + 96)] * ((float*)fused_constant_1_let)[((((cse_var_38 * 36) + (kh * 12)) + cse_var_37) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_41 = (ax1_ax2_fused / 24);
          int32_t cse_var_40 = (kw * 4);
          int32_t cse_var_39 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_39] = (((float*)DepthwiseConv2d_global_let)[cse_var_39] + (p0[((((((cse_var_41 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_40) + oci_c_13) + 104)] * ((float*)fused_constant_1_let)[((((cse_var_41 * 36) + (kh * 12)) + cse_var_40) + oci_c_13)]));
        }
        for (int32_t oci_c_14 = 0; oci_c_14 < 4; ++oci_c_14) {
          int32_t cse_var_44 = (ax1_ax2_fused / 24);
          int32_t cse_var_43 = (kw * 4);
          int32_t cse_var_42 = (oci_c_14 + 56);
          ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (p0[((((((cse_var_44 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_43) + oci_c_14) + 112)] * ((float*)fused_constant_1_let)[((((cse_var_44 * 36) + (kh * 12)) + cse_var_43) + oci_c_14)]));
        }
        for (int32_t oci_c_15 = 0; oci_c_15 < 4; ++oci_c_15) {
          int32_t cse_var_47 = (ax1_ax2_fused / 24);
          int32_t cse_var_46 = (kw * 4);
          int32_t cse_var_45 = (oci_c_15 + 60);
          ((float*)DepthwiseConv2d_global_let)[cse_var_45] = (((float*)DepthwiseConv2d_global_let)[cse_var_45] + (p0[((((((cse_var_47 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_46) + oci_c_15) + 120)] * ((float*)fused_constant_1_let)[((((cse_var_47 * 36) + (kh * 12)) + cse_var_46) + oci_c_15)]));
        }
        for (int32_t oci_c_16 = 0; oci_c_16 < 4; ++oci_c_16) {
          int32_t cse_var_50 = (ax1_ax2_fused / 24);
          int32_t cse_var_49 = (kw * 4);
          int32_t cse_var_48 = (oci_c_16 + 64);
          ((float*)DepthwiseConv2d_global_let)[cse_var_48] = (((float*)DepthwiseConv2d_global_let)[cse_var_48] + (p0[((((((cse_var_50 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_49) + oci_c_16) + 128)] * ((float*)fused_constant_1_let)[((((cse_var_50 * 36) + (kh * 12)) + cse_var_49) + oci_c_16)]));
        }
        for (int32_t oci_c_17 = 0; oci_c_17 < 4; ++oci_c_17) {
          int32_t cse_var_53 = (ax1_ax2_fused / 24);
          int32_t cse_var_52 = (kw * 4);
          int32_t cse_var_51 = (oci_c_17 + 68);
          ((float*)DepthwiseConv2d_global_let)[cse_var_51] = (((float*)DepthwiseConv2d_global_let)[cse_var_51] + (p0[((((((cse_var_53 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_52) + oci_c_17) + 136)] * ((float*)fused_constant_1_let)[((((cse_var_53 * 36) + (kh * 12)) + cse_var_52) + oci_c_17)]));
        }
        for (int32_t oci_c_18 = 0; oci_c_18 < 4; ++oci_c_18) {
          int32_t cse_var_56 = (ax1_ax2_fused / 24);
          int32_t cse_var_55 = (kw * 4);
          int32_t cse_var_54 = (oci_c_18 + 72);
          ((float*)DepthwiseConv2d_global_let)[cse_var_54] = (((float*)DepthwiseConv2d_global_let)[cse_var_54] + (p0[((((((cse_var_56 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_55) + oci_c_18) + 144)] * ((float*)fused_constant_1_let)[((((cse_var_56 * 36) + (kh * 12)) + cse_var_55) + oci_c_18)]));
        }
        for (int32_t oci_c_19 = 0; oci_c_19 < 4; ++oci_c_19) {
          int32_t cse_var_59 = (ax1_ax2_fused / 24);
          int32_t cse_var_58 = (kw * 4);
          int32_t cse_var_57 = (oci_c_19 + 76);
          ((float*)DepthwiseConv2d_global_let)[cse_var_57] = (((float*)DepthwiseConv2d_global_let)[cse_var_57] + (p0[((((((cse_var_59 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_58) + oci_c_19) + 152)] * ((float*)fused_constant_1_let)[((((cse_var_59 * 36) + (kh * 12)) + cse_var_58) + oci_c_19)]));
        }
        for (int32_t oci_c_20 = 0; oci_c_20 < 4; ++oci_c_20) {
          int32_t cse_var_62 = (ax1_ax2_fused / 24);
          int32_t cse_var_61 = (kw * 4);
          int32_t cse_var_60 = (oci_c_20 + 80);
          ((float*)DepthwiseConv2d_global_let)[cse_var_60] = (((float*)DepthwiseConv2d_global_let)[cse_var_60] + (p0[((((((cse_var_62 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_61) + oci_c_20) + 160)] * ((float*)fused_constant_1_let)[((((cse_var_62 * 36) + (kh * 12)) + cse_var_61) + oci_c_20)]));
        }
        for (int32_t oci_c_21 = 0; oci_c_21 < 4; ++oci_c_21) {
          int32_t cse_var_65 = (ax1_ax2_fused / 24);
          int32_t cse_var_64 = (kw * 4);
          int32_t cse_var_63 = (oci_c_21 + 84);
          ((float*)DepthwiseConv2d_global_let)[cse_var_63] = (((float*)DepthwiseConv2d_global_let)[cse_var_63] + (p0[((((((cse_var_65 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_64) + oci_c_21) + 168)] * ((float*)fused_constant_1_let)[((((cse_var_65 * 36) + (kh * 12)) + cse_var_64) + oci_c_21)]));
        }
        for (int32_t oci_c_22 = 0; oci_c_22 < 4; ++oci_c_22) {
          int32_t cse_var_68 = (ax1_ax2_fused / 24);
          int32_t cse_var_67 = (kw * 4);
          int32_t cse_var_66 = (oci_c_22 + 88);
          ((float*)DepthwiseConv2d_global_let)[cse_var_66] = (((float*)DepthwiseConv2d_global_let)[cse_var_66] + (p0[((((((cse_var_68 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_67) + oci_c_22) + 176)] * ((float*)fused_constant_1_let)[((((cse_var_68 * 36) + (kh * 12)) + cse_var_67) + oci_c_22)]));
        }
        for (int32_t oci_c_23 = 0; oci_c_23 < 4; ++oci_c_23) {
          int32_t cse_var_71 = (ax1_ax2_fused / 24);
          int32_t cse_var_70 = (kw * 4);
          int32_t cse_var_69 = (oci_c_23 + 92);
          ((float*)DepthwiseConv2d_global_let)[cse_var_69] = (((float*)DepthwiseConv2d_global_let)[cse_var_69] + (p0[((((((cse_var_71 * 9604) + ((ax1_ax2_fused % 24) * 392)) + (kh * 196)) + cse_var_70) + oci_c_23) + 184)] * ((float*)fused_constant_1_let)[((((cse_var_71 * 36) + (kh * 12)) + cse_var_70) + oci_c_23)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 24; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_72 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_72] = ((float*)DepthwiseConv2d_global_let)[cse_var_72];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 24; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_73 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_73 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_let)[(((ax1_ax2_fused / 24) * 4) + ax4)];
        T_relu[(((ax1_ax2_fused * 96) + cse_var_73) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_1(float* p0, float* T_relu, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_16_var[1729824]));
  void* fused_constant_4_let = (&(global_const_workspace_16_var[1702656]));
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 216; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_17_var[221472]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_17_var[221664]));
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
          int32_t cse_var_2 = (ax1_ax2_fused / 12);
          int32_t cse_var_1 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[(((((cse_var_2 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_1) + oci_c)] * ((float*)fused_constant_4_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_5 = (ax1_ax2_fused / 12);
          int32_t cse_var_4 = (kw * 4);
          int32_t cse_var_3 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[((((((cse_var_5 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_4) + oci_c_1) + 8)] * ((float*)fused_constant_4_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_8 = (ax1_ax2_fused / 12);
          int32_t cse_var_7 = (kw * 4);
          int32_t cse_var_6 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[((((((cse_var_8 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_7) + oci_c_2) + 16)] * ((float*)fused_constant_4_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_11 = (ax1_ax2_fused / 12);
          int32_t cse_var_10 = (kw * 4);
          int32_t cse_var_9 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (p0[((((((cse_var_11 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_10) + oci_c_3) + 24)] * ((float*)fused_constant_4_let)[((((cse_var_11 * 36) + (kh * 12)) + cse_var_10) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_14 = (ax1_ax2_fused / 12);
          int32_t cse_var_13 = (kw * 4);
          int32_t cse_var_12 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (p0[((((((cse_var_14 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_13) + oci_c_4) + 32)] * ((float*)fused_constant_4_let)[((((cse_var_14 * 36) + (kh * 12)) + cse_var_13) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_17 = (ax1_ax2_fused / 12);
          int32_t cse_var_16 = (kw * 4);
          int32_t cse_var_15 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (p0[((((((cse_var_17 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_16) + oci_c_5) + 40)] * ((float*)fused_constant_4_let)[((((cse_var_17 * 36) + (kh * 12)) + cse_var_16) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_20 = (ax1_ax2_fused / 12);
          int32_t cse_var_19 = (kw * 4);
          int32_t cse_var_18 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (p0[((((((cse_var_20 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_19) + oci_c_6) + 48)] * ((float*)fused_constant_4_let)[((((cse_var_20 * 36) + (kh * 12)) + cse_var_19) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_23 = (ax1_ax2_fused / 12);
          int32_t cse_var_22 = (kw * 4);
          int32_t cse_var_21 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (p0[((((((cse_var_23 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_22) + oci_c_7) + 56)] * ((float*)fused_constant_4_let)[((((cse_var_23 * 36) + (kh * 12)) + cse_var_22) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_26 = (ax1_ax2_fused / 12);
          int32_t cse_var_25 = (kw * 4);
          int32_t cse_var_24 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (p0[((((((cse_var_26 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_25) + oci_c_8) + 64)] * ((float*)fused_constant_4_let)[((((cse_var_26 * 36) + (kh * 12)) + cse_var_25) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_29 = (ax1_ax2_fused / 12);
          int32_t cse_var_28 = (kw * 4);
          int32_t cse_var_27 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (p0[((((((cse_var_29 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_28) + oci_c_9) + 72)] * ((float*)fused_constant_4_let)[((((cse_var_29 * 36) + (kh * 12)) + cse_var_28) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_32 = (ax1_ax2_fused / 12);
          int32_t cse_var_31 = (kw * 4);
          int32_t cse_var_30 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (p0[((((((cse_var_32 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_31) + oci_c_10) + 80)] * ((float*)fused_constant_4_let)[((((cse_var_32 * 36) + (kh * 12)) + cse_var_31) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_35 = (ax1_ax2_fused / 12);
          int32_t cse_var_34 = (kw * 4);
          int32_t cse_var_33 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_33] = (((float*)DepthwiseConv2d_global_let)[cse_var_33] + (p0[((((((cse_var_35 * 2500) + ((ax1_ax2_fused % 12) * 200)) + (kh * 100)) + cse_var_34) + oci_c_11) + 88)] * ((float*)fused_constant_4_let)[((((cse_var_35 * 36) + (kh * 12)) + cse_var_34) + oci_c_11)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 12; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_36 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_36] = ((float*)DepthwiseConv2d_global_let)[cse_var_36];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 12; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_37 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_37 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_1_let)[(((ax1_ax2_fused / 12) * 4) + ax4)];
        T_relu[(((ax1_ax2_fused * 48) + cse_var_37) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_10(float* p0, float* T_relu, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_10_let = (&(global_const_workspace_74_var[1707552]));
  void* fused_constant_31_let = (&(global_const_workspace_74_var[1545216]));
  void* PaddedInput_let = (&(global_workspace_75_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 720; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 5; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 5);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 20) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 4)) && (1 <= i3)) && (i3 < 4)) ? p0[((((((i0_i1_fused_i2_fused / 5) * 36) + (cse_var_2 * 12)) + cse_var_1) + i4) - 16)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 432; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_75_var[81792]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_75_var[81840]));
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
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 100) + (kh * 20)) + ((ax1_ax2_fused % 3) * 20)) + cse_var_3) + oci_c)] * ((float*)fused_constant_31_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 3);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 100) + (kh * 20)) + ((ax1_ax2_fused % 3) * 20)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_31_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 3);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 100) + (kh * 20)) + ((ax1_ax2_fused % 3) * 20)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_31_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
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
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_12 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_10_let)[(((ax1_ax2_fused / 3) * 4) + ax4)];
        T_relu[(((ax1_ax2_fused * 12) + cse_var_12) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_2(float* p0, float* T_relu, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_2_let = (&(global_const_workspace_22_var[1729120]));
  void* fused_constant_7_let = (&(global_const_workspace_22_var[1699488]));
  void* PaddedInput_let = (&(global_workspace_23_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 308; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 14; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 14);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 56) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 13)) && (1 <= i3)) && (i3 < 13)) ? p0[((((((i0_i1_fused_i2_fused / 14) * 576) + (cse_var_2 * 48)) + cse_var_1) + i4) - 52)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 264; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_23_var[133504]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_23_var[133696]));
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
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_3) + oci_c)] * ((float*)fused_constant_7_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 12);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_7_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 12);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_7_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 12);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_7_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 12);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_7_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 12);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_7_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 12);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_7_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 12);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_7_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 12);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_7_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 12);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_7_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 12);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_7_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 12);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 784) + (kh * 56)) + ((ax1_ax2_fused % 12) * 56)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_7_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
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
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_39 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_2_let)[(((ax1_ax2_fused / 12) * 4) + ax4)];
        T_relu[(((ax1_ax2_fused * 48) + cse_var_39) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_3(float* p0, float* T_relu, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_3_let = (&(global_const_workspace_30_var[1727200]));
  void* fused_constant_10_let = (&(global_const_workspace_30_var[1696032]));
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 144; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_31_var[78720]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_31_var[78816]));
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
          int32_t cse_var_2 = (ax1_ax2_fused / 6);
          int32_t cse_var_1 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[(((((cse_var_2 * 676) + ((ax1_ax2_fused % 6) * 104)) + (kh * 52)) + cse_var_1) + oci_c)] * ((float*)fused_constant_10_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_5 = (ax1_ax2_fused / 6);
          int32_t cse_var_4 = (kw * 4);
          int32_t cse_var_3 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[((((((cse_var_5 * 676) + ((ax1_ax2_fused % 6) * 104)) + (kh * 52)) + cse_var_4) + oci_c_1) + 8)] * ((float*)fused_constant_10_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_8 = (ax1_ax2_fused / 6);
          int32_t cse_var_7 = (kw * 4);
          int32_t cse_var_6 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[((((((cse_var_8 * 676) + ((ax1_ax2_fused % 6) * 104)) + (kh * 52)) + cse_var_7) + oci_c_2) + 16)] * ((float*)fused_constant_10_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_11 = (ax1_ax2_fused / 6);
          int32_t cse_var_10 = (kw * 4);
          int32_t cse_var_9 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (p0[((((((cse_var_11 * 676) + ((ax1_ax2_fused % 6) * 104)) + (kh * 52)) + cse_var_10) + oci_c_3) + 24)] * ((float*)fused_constant_10_let)[((((cse_var_11 * 36) + (kh * 12)) + cse_var_10) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_14 = (ax1_ax2_fused / 6);
          int32_t cse_var_13 = (kw * 4);
          int32_t cse_var_12 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (p0[((((((cse_var_14 * 676) + ((ax1_ax2_fused % 6) * 104)) + (kh * 52)) + cse_var_13) + oci_c_4) + 32)] * ((float*)fused_constant_10_let)[((((cse_var_14 * 36) + (kh * 12)) + cse_var_13) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_17 = (ax1_ax2_fused / 6);
          int32_t cse_var_16 = (kw * 4);
          int32_t cse_var_15 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (p0[((((((cse_var_17 * 676) + ((ax1_ax2_fused % 6) * 104)) + (kh * 52)) + cse_var_16) + oci_c_5) + 40)] * ((float*)fused_constant_10_let)[((((cse_var_17 * 36) + (kh * 12)) + cse_var_16) + oci_c_5)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 6; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_18 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_18] = ((float*)DepthwiseConv2d_global_let)[cse_var_18];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_19 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_19 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_3_let)[(((ax1_ax2_fused / 6) * 4) + ax4)];
        T_relu[(((ax1_ax2_fused * 24) + cse_var_19) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_4(float* p0, float* T_relu, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_4_let = (&(global_const_workspace_36_var[1721056]));
  void* fused_constant_13_let = (&(global_const_workspace_36_var[1649472]));
  void* PaddedInput_let = (&(global_workspace_37_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 480; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 8; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 7);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 32) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 7)) && (1 <= i3)) && (i3 < 7)) ? p0[((((((i0_i1_fused_i2_fused >> 3) * 144) + (cse_var_2 * 24)) + cse_var_1) + i4) - 28)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 360; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_37_var[96000]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_37_var[96096]));
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
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_21 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_4_let)[(((ax1_ax2_fused / 6) * 4) + ax4)];
        T_relu[(((ax1_ax2_fused * 24) + cse_var_21) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_5(float* p0, float* T_relu, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_5_let = (&(global_const_workspace_42_var[1720096]));
  void* fused_constant_16_let = (&(global_const_workspace_42_var[1640832]));
  void* PaddedInput_let = (&(global_workspace_43_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 480; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 8; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 7);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 32) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 7)) && (1 <= i3)) && (i3 < 7)) ? p0[((((((i0_i1_fused_i2_fused >> 3) * 144) + (cse_var_2 * 24)) + cse_var_1) + i4) - 28)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 360; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_43_var[101760]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_43_var[101856]));
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
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_3) + oci_c)] * ((float*)fused_constant_16_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 6);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_16_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 6);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_16_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 6);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_16_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 6);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_16_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 6);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_16_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
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
        T_relu[(((ax1_ax2_fused * 24) + cse_var_21) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_6(float* p0, float* T_relu, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_6_let = (&(global_const_workspace_48_var[1726240]));
  void* fused_constant_19_let = (&(global_const_workspace_48_var[1691712]));
  void* PaddedInput_let = (&(global_workspace_49_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 240; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 8; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 7);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 32) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 7)) && (1 <= i3)) && (i3 < 7)) ? p0[((((((i0_i1_fused_i2_fused >> 3) * 144) + (cse_var_2 * 24)) + cse_var_1) + i4) - 28)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 180; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_49_var[48000]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_49_var[48096]));
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
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_21 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_6_let)[(((ax1_ax2_fused / 6) * 4) + ax4)];
        T_relu[(((ax1_ax2_fused * 24) + cse_var_21) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_7(float* p0, float* T_relu, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_7_let = (&(global_const_workspace_54_var[1723936]));
  void* fused_constant_22_let = (&(global_const_workspace_54_var[1681920]));
  void* PaddedInput_let = (&(global_workspace_55_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 288; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 8; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 7);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 32) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 7)) && (1 <= i3)) && (i3 < 7)) ? p0[((((((i0_i1_fused_i2_fused >> 3) * 144) + (cse_var_2 * 24)) + cse_var_1) + i4) - 28)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 216; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_55_var[64512]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_55_var[64608]));
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
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_3) + oci_c)] * ((float*)fused_constant_22_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 6);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_22_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 6);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_22_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 6);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_22_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 6);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_22_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 6);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 256) + (kh * 32)) + ((ax1_ax2_fused % 6) * 32)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_22_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
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
        T_relu[(((ax1_ax2_fused * 24) + cse_var_21) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_8(float* p0, float* T_relu, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_8_let = (&(global_const_workspace_62_var[1716768]));
  void* fused_constant_25_let = (&(global_const_workspace_62_var[1621248]));
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 216; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_63_var[66816]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_63_var[66864]));
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
          int32_t cse_var_2 = (ax1_ax2_fused / 3);
          int32_t cse_var_1 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[(((((cse_var_2 * 196) + ((ax1_ax2_fused % 3) * 56)) + (kh * 28)) + cse_var_1) + oci_c)] * ((float*)fused_constant_25_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_5 = (ax1_ax2_fused / 3);
          int32_t cse_var_4 = (kw * 4);
          int32_t cse_var_3 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[((((((cse_var_5 * 196) + ((ax1_ax2_fused % 3) * 56)) + (kh * 28)) + cse_var_4) + oci_c_1) + 8)] * ((float*)fused_constant_25_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_8 = (ax1_ax2_fused / 3);
          int32_t cse_var_7 = (kw * 4);
          int32_t cse_var_6 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[((((((cse_var_8 * 196) + ((ax1_ax2_fused % 3) * 56)) + (kh * 28)) + cse_var_7) + oci_c_2) + 16)] * ((float*)fused_constant_25_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 3; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_9 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_9] = ((float*)DepthwiseConv2d_global_let)[cse_var_9];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_10 = (ax3_inner * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_10 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_8_let)[(((ax1_ax2_fused / 3) * 4) + ax4)];
        T_relu[(((ax1_ax2_fused * 12) + cse_var_10) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_9(float* p0, float* T_relu, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_9_let = (&(global_const_workspace_68_var[1705248]));
  void* fused_constant_28_let = (&(global_const_workspace_68_var[1565952]));
  void* PaddedInput_let = (&(global_workspace_69_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 720; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 5; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 5);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 20) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 4)) && (1 <= i3)) && (i3 < 4)) ? p0[((((((i0_i1_fused_i2_fused / 5) * 36) + (cse_var_2 * 12)) + cse_var_1) + i4) - 16)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 432; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_69_var[78336]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_69_var[78384]));
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
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 100) + (kh * 20)) + ((ax1_ax2_fused % 3) * 20)) + cse_var_3) + oci_c)] * ((float*)fused_constant_28_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 3);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 100) + (kh * 20)) + ((ax1_ax2_fused % 3) * 20)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_28_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 3);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 100) + (kh * 20)) + ((ax1_ax2_fused % 3) * 20)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_28_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
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
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_12 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_9_let)[(((ax1_ax2_fused / 3) * 4) + ax4)];
        T_relu[(((ax1_ax2_fused * 12) + cse_var_12) + ax4)] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad(float* p0, float* T_pad, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 49; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 49);
        int32_t cse_var_1 = (ax3 * 4);
        T_pad[(((ax0_ax1_fused_ax2_fused * 196) + cse_var_1) + ax4_inner)] = (((cse_var_2 < 48) && (ax3 < 48)) ? p0[(((((ax0_ax1_fused_ax2_fused / 49) * 9216) + (cse_var_2 * 192)) + cse_var_1) + ax4_inner)] : 0.000000e+00f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_1(float* p0, float* T_pad, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 450; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 25; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 25);
        int32_t cse_var_1 = (ax3 * 4);
        T_pad[(((ax0_ax1_fused_ax2_fused * 100) + cse_var_1) + ax4_inner)] = (((cse_var_2 < 24) && (ax3 < 24)) ? p0[(((((ax0_ax1_fused_ax2_fused / 25) * 2304) + (cse_var_2 * 96)) + cse_var_1) + ax4_inner)] : 0.000000e+00f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_2(float* p0, float* T_pad, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 312; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 13; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 13);
        int32_t cse_var_1 = (ax3 * 4);
        T_pad[(((ax0_ax1_fused_ax2_fused * 52) + cse_var_1) + ax4_inner)] = (((cse_var_2 < 12) && (ax3 < 12)) ? p0[(((((ax0_ax1_fused_ax2_fused / 13) * 576) + (cse_var_2 * 48)) + cse_var_1) + ax4_inner)] : 0.000000e+00f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_3(float* p0, float* T_pad, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 504; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 7);
        int32_t cse_var_1 = (ax3 * 4);
        T_pad[(((ax0_ax1_fused_ax2_fused * 28) + cse_var_1) + ax4_inner)] = (((cse_var_2 < 6) && (ax3 < 6)) ? p0[(((((ax0_ax1_fused_ax2_fused / 7) * 144) + (cse_var_2 * 24)) + cse_var_1) + ax4_inner)] : 0.000000e+00f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 96; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused * 96) + ax3);
      T_layout_trans[cse_var_1] = p0[cse_var_1];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* input_2_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_28_let = (&(global_workspace_1_var[0]));
  void* sid_26_let = (&(global_workspace_1_var[36864]));
  void* sid_21_let = (&(global_workspace_1_var[61440]));
  void* sid_24_let = (&(global_workspace_1_var[30720]));
  void* sid_20_let = (&(global_workspace_1_var[61440]));
  void* sid_23_let = (&(global_workspace_1_var[30720]));
  void* sid_19_let = (&(global_workspace_1_var[96000]));
  void* sid_17_let = (&(global_workspace_1_var[61440]));
  void* sid_27_let = (&(global_workspace_1_var[36864]));
  void* sid_29_let = (&(global_workspace_1_var[56448]));
  void* sid_22_let = (&(global_workspace_1_var[0]));
  void* sid_15_let = (&(global_workspace_1_var[64896]));
  void* sid_9_let = (&(global_workspace_1_var[119680]));
  void* sid_2_let = (&(global_workspace_1_var[153664]));
  void* sid_30_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[37648]));
  void* sid_5_let = (&(global_workspace_1_var[0]));
  void* sid_18_let = (&(global_workspace_1_var[61440]));
  void* sid_4_let = (&(global_workspace_1_var[153664]));
  void* sid_25_let = (&(global_workspace_1_var[57600]));
  void* sid_6_let = (&(global_workspace_1_var[180000]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_11_let = (&(global_workspace_1_var[68992]));
  void* sid_8_let = (&(global_workspace_1_var[180000]));
  void* sid_32_let = (&(global_workspace_1_var[81792]));
  void* sid_16_let = (&(global_workspace_1_var[101760]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_12_let = (&(global_workspace_1_var[0]));
  void* sid_10_let = (&(global_workspace_1_var[68992]));
  void* sid_13_let = (&(global_workspace_1_var[64896]));
  void* sid_14_let = (&(global_workspace_1_var[0]));
  void* sid_31_let = (&(global_workspace_1_var[56448]));
  void* sid_33_let = (&(global_workspace_1_var[57600]));
  void* sid_34_let = (&(global_workspace_1_var[57600]));
  void* sid_35_let = (&(global_workspace_1_var[78336]));
  void* sid_36_let = (&(global_workspace_1_var[57600]));
  void* sid_37_let = (&(global_workspace_1_var[57600]));
  void* sid_38_let = (&(global_workspace_1_var[20736]));
  void* sid_39_let = (&(global_workspace_1_var[0]));
  void* sid_40_let = (&(global_workspace_1_var[20736]));
  if (tvmgen_default_fused_reshape_layout_transform(input_2_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_1(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_1(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_1(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_1(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_2(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_2(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_add(sid_11_let, sid_9_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_3(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_2(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_3(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_2(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_4(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_4(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_add_1(sid_18_let, sid_16_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_5(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_5(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_add_2(sid_21_let, sid_19_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_6(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_6(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_3(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_7(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_7(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_add_3(sid_27_let, sid_25_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_8(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_3(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_8(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_4(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_9(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_9(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_add_4(sid_34_let, sid_32_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_10(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_nn_relu_10(sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_add_5(sid_37_let, sid_35_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_11(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_transpose_reshape(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack(sid_40_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

