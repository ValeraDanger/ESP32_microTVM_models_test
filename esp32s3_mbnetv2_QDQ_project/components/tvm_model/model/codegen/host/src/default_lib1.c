// tvm target: c -keys=cpu -model=esp32
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_transpose_cast_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 513; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 513; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 3; ++ax4_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 1539) + (ax3 * 3)) + ax4_inner);
        float v_ = roundf((p0[cse_var_1] * 1.275000e+02f));
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_layout_trans[cse_var_1] = ((float)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 8320; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 65; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 2; ++ax4_inner) {
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 130) + (ax3 * 2)) + ax4_inner)] = p0[((((((ax0_ax1_fused_ax2_fused / 130) * 16900) + ((ax0_ax1_fused_ax2_fused % 65) * 260)) + (ax3 * 4)) + (((ax0_ax1_fused_ax2_fused % 130) / 65) * 2)) + ax4_inner)];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_image_resize2d_divide_round_add_clip_cast_cast_subtract_c_a7ca9e83d6de06f4_(float* p0, float* T_multiply, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 513; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 513; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 16) + ax3_inner) < 21) {
            int32_t cse_var_5 = (ax3_outer * 16);
            float cse_var_4 = (1.250000e-01f * ((float)ax2));
            float cse_var_3 = (1.250000e-01f * ((float)ax0_ax1_fused));
            int32_t cse_var_2 = ((ax3_outer + ax3_inner) % 3);
            int32_t cse_var_1 = (((cse_var_5 + ax3_inner) / 3) * 12675);
            int32_t v_ = (int32_t)floorf(cse_var_3);
            int32_t v__1 = (v_) < (64) ? (v_) : (64);
            int32_t v__2 = (int32_t)floorf(((float)((v__1) > (0) ? (v__1) : (0))));
            int32_t v__3 = (v__2) < (64) ? (v__2) : (64);
            int32_t v__4 = (int32_t)floorf(cse_var_4);
            int32_t v__5 = (v__4) < (64) ? (v__4) : (64);
            int32_t v__6 = (int32_t)floorf(((float)((v__5) > (0) ? (v__5) : (0))));
            int32_t v__7 = (v__6) < (64) ? (v__6) : (64);
            int32_t v__8 = ((int32_t)floorf(((float)((v__5) > (0) ? (v__5) : (0))))) + 1;
            int32_t v__9 = (v__8) < (64) ? (v__8) : (64);
            int32_t v__10 = ((int32_t)floorf(((float)((v__1) > (0) ? (v__1) : (0))))) + 1;
            int32_t v__11 = (v__10) < (64) ? (v__10) : (64);
            float v__12 = roundf((((((p0[(((cse_var_1 + (((v__3) > (0) ? (v__3) : (0)) * 195)) + (((v__7) > (0) ? (v__7) : (0)) * 3)) + cse_var_2)] * (1.000000e+00f - (((float)((v__5) > (0) ? (v__5) : (0))) - ((float)((int32_t)floorf(((float)((v__5) > (0) ? (v__5) : (0))))))))) + (p0[(((cse_var_1 + (((v__3) > (0) ? (v__3) : (0)) * 195)) + (((v__9) > (0) ? (v__9) : (0)) * 3)) + cse_var_2)] * (((float)((v__5) > (0) ? (v__5) : (0))) - ((float)((int32_t)floorf(((float)((v__5) > (0) ? (v__5) : (0))))))))) * (1.000000e+00f - (((float)((v__1) > (0) ? (v__1) : (0))) - ((float)((int32_t)floorf(((float)((v__1) > (0) ? (v__1) : (0))))))))) + (((p0[(((cse_var_1 + (((v__11) > (0) ? (v__11) : (0)) * 195)) + (((v__7) > (0) ? (v__7) : (0)) * 3)) + cse_var_2)] * (1.000000e+00f - (((float)((v__5) > (0) ? (v__5) : (0))) - ((float)((int32_t)floorf(((float)((v__5) > (0) ? (v__5) : (0))))))))) + (p0[(((cse_var_1 + (((v__11) > (0) ? (v__11) : (0)) * 195)) + (((v__9) > (0) ? (v__9) : (0)) * 3)) + cse_var_2)] * (((float)((v__5) > (0) ? (v__5) : (0))) - ((float)((int32_t)floorf(((float)((v__5) > (0) ? (v__5) : (0))))))))) * (((float)((v__1) > (0) ? (v__1) : (0))) - ((float)((int32_t)floorf(((float)((v__1) > (0) ? (v__1) : (0))))))))) * 9.674440e+00f)) + -1.000000e+02f;
            float v__13 = (v__12) < (1.270000e+02f) ? (v__12) : (1.270000e+02f);
            int32_t v__14 = ((int32_t)floorf(cse_var_4)) + 1;
            int32_t v__15 = (v__14) < (64) ? (v__14) : (64);
            int32_t v__16 = (int32_t)floorf(((float)((v__15) > (0) ? (v__15) : (0))));
            int32_t v__17 = (v__16) < (64) ? (v__16) : (64);
            int32_t v__18 = ((int32_t)floorf(((float)((v__15) > (0) ? (v__15) : (0))))) + 1;
            int32_t v__19 = (v__18) < (64) ? (v__18) : (64);
            float v__20 = roundf((((((p0[(((cse_var_1 + (((v__3) > (0) ? (v__3) : (0)) * 195)) + (((v__17) > (0) ? (v__17) : (0)) * 3)) + cse_var_2)] * (1.000000e+00f - (((float)((v__15) > (0) ? (v__15) : (0))) - ((float)((int32_t)floorf(((float)((v__15) > (0) ? (v__15) : (0))))))))) + (p0[(((cse_var_1 + (((v__3) > (0) ? (v__3) : (0)) * 195)) + (((v__19) > (0) ? (v__19) : (0)) * 3)) + cse_var_2)] * (((float)((v__15) > (0) ? (v__15) : (0))) - ((float)((int32_t)floorf(((float)((v__15) > (0) ? (v__15) : (0))))))))) * (1.000000e+00f - (((float)((v__1) > (0) ? (v__1) : (0))) - ((float)((int32_t)floorf(((float)((v__1) > (0) ? (v__1) : (0))))))))) + (((p0[(((cse_var_1 + (((v__11) > (0) ? (v__11) : (0)) * 195)) + (((v__17) > (0) ? (v__17) : (0)) * 3)) + cse_var_2)] * (1.000000e+00f - (((float)((v__15) > (0) ? (v__15) : (0))) - ((float)((int32_t)floorf(((float)((v__15) > (0) ? (v__15) : (0))))))))) + (p0[(((cse_var_1 + (((v__11) > (0) ? (v__11) : (0)) * 195)) + (((v__19) > (0) ? (v__19) : (0)) * 3)) + cse_var_2)] * (((float)((v__15) > (0) ? (v__15) : (0))) - ((float)((int32_t)floorf(((float)((v__15) > (0) ? (v__15) : (0))))))))) * (((float)((v__1) > (0) ? (v__1) : (0))) - ((float)((int32_t)floorf(((float)((v__1) > (0) ? (v__1) : (0))))))))) * 9.674440e+00f)) + -1.000000e+02f;
            float v__21 = (v__20) < (1.270000e+02f) ? (v__20) : (1.270000e+02f);
            int32_t v__22 = ((int32_t)floorf(cse_var_3)) + 1;
            int32_t v__23 = (v__22) < (64) ? (v__22) : (64);
            int32_t v__24 = (int32_t)floorf(((float)((v__23) > (0) ? (v__23) : (0))));
            int32_t v__25 = (v__24) < (64) ? (v__24) : (64);
            int32_t v__26 = ((int32_t)floorf(((float)((v__23) > (0) ? (v__23) : (0))))) + 1;
            int32_t v__27 = (v__26) < (64) ? (v__26) : (64);
            float v__28 = roundf((((((p0[(((cse_var_1 + (((v__25) > (0) ? (v__25) : (0)) * 195)) + (((v__7) > (0) ? (v__7) : (0)) * 3)) + cse_var_2)] * (1.000000e+00f - (((float)((v__5) > (0) ? (v__5) : (0))) - ((float)((int32_t)floorf(((float)((v__5) > (0) ? (v__5) : (0))))))))) + (p0[(((cse_var_1 + (((v__25) > (0) ? (v__25) : (0)) * 195)) + (((v__9) > (0) ? (v__9) : (0)) * 3)) + cse_var_2)] * (((float)((v__5) > (0) ? (v__5) : (0))) - ((float)((int32_t)floorf(((float)((v__5) > (0) ? (v__5) : (0))))))))) * (1.000000e+00f - (((float)((v__23) > (0) ? (v__23) : (0))) - ((float)((int32_t)floorf(((float)((v__23) > (0) ? (v__23) : (0))))))))) + (((p0[(((cse_var_1 + (((v__27) > (0) ? (v__27) : (0)) * 195)) + (((v__7) > (0) ? (v__7) : (0)) * 3)) + cse_var_2)] * (1.000000e+00f - (((float)((v__5) > (0) ? (v__5) : (0))) - ((float)((int32_t)floorf(((float)((v__5) > (0) ? (v__5) : (0))))))))) + (p0[(((cse_var_1 + (((v__27) > (0) ? (v__27) : (0)) * 195)) + (((v__9) > (0) ? (v__9) : (0)) * 3)) + cse_var_2)] * (((float)((v__5) > (0) ? (v__5) : (0))) - ((float)((int32_t)floorf(((float)((v__5) > (0) ? (v__5) : (0))))))))) * (((float)((v__23) > (0) ? (v__23) : (0))) - ((float)((int32_t)floorf(((float)((v__23) > (0) ? (v__23) : (0))))))))) * 9.674440e+00f)) + -1.000000e+02f;
            float v__29 = (v__28) < (1.270000e+02f) ? (v__28) : (1.270000e+02f);
            float v__30 = roundf((((((p0[(((cse_var_1 + (((v__25) > (0) ? (v__25) : (0)) * 195)) + (((v__17) > (0) ? (v__17) : (0)) * 3)) + cse_var_2)] * (1.000000e+00f - (((float)((v__15) > (0) ? (v__15) : (0))) - ((float)((int32_t)floorf(((float)((v__15) > (0) ? (v__15) : (0))))))))) + (p0[(((cse_var_1 + (((v__25) > (0) ? (v__25) : (0)) * 195)) + (((v__19) > (0) ? (v__19) : (0)) * 3)) + cse_var_2)] * (((float)((v__15) > (0) ? (v__15) : (0))) - ((float)((int32_t)floorf(((float)((v__15) > (0) ? (v__15) : (0))))))))) * (1.000000e+00f - (((float)((v__23) > (0) ? (v__23) : (0))) - ((float)((int32_t)floorf(((float)((v__23) > (0) ? (v__23) : (0))))))))) + (((p0[(((cse_var_1 + (((v__27) > (0) ? (v__27) : (0)) * 195)) + (((v__17) > (0) ? (v__17) : (0)) * 3)) + cse_var_2)] * (1.000000e+00f - (((float)((v__15) > (0) ? (v__15) : (0))) - ((float)((int32_t)floorf(((float)((v__15) > (0) ? (v__15) : (0))))))))) + (p0[(((cse_var_1 + (((v__27) > (0) ? (v__27) : (0)) * 195)) + (((v__19) > (0) ? (v__19) : (0)) * 3)) + cse_var_2)] * (((float)((v__15) > (0) ? (v__15) : (0))) - ((float)((int32_t)floorf(((float)((v__15) > (0) ? (v__15) : (0))))))))) * (((float)((v__23) > (0) ? (v__23) : (0))) - ((float)((int32_t)floorf(((float)((v__23) > (0) ? (v__23) : (0))))))))) * 9.674440e+00f)) + -1.000000e+02f;
            float v__31 = (v__30) < (1.270000e+02f) ? (v__30) : (1.270000e+02f);
            float v__32 = roundf(((((((((float)(((int32_t)((int8_t)((v__13) > (-1.280000e+02f) ? (v__13) : (-1.280000e+02f)))) + 100)) * 1.033652e-01f) * (1.000000e+00f - (cse_var_4 - ((float)((int32_t)floorf(cse_var_4)))))) + ((((float)(((int32_t)((int8_t)((v__21) > (-1.280000e+02f) ? (v__21) : (-1.280000e+02f)))) + 100)) * 1.033652e-01f) * (cse_var_4 - ((float)((int32_t)floorf(cse_var_4)))))) * (1.000000e+00f - (cse_var_3 - ((float)((int32_t)floorf(cse_var_3)))))) + ((((((float)(((int32_t)((int8_t)((v__29) > (-1.280000e+02f) ? (v__29) : (-1.280000e+02f)))) + 100)) * 1.033652e-01f) * (1.000000e+00f - (cse_var_4 - ((float)((int32_t)floorf(cse_var_4)))))) + ((((float)(((int32_t)((int8_t)((v__31) > (-1.280000e+02f) ? (v__31) : (-1.280000e+02f)))) + 100)) * 1.033652e-01f) * (cse_var_4 - ((float)((int32_t)floorf(cse_var_4)))))) * (cse_var_3 - ((float)((int32_t)floorf(cse_var_3)))))) * 9.674440e+00f)) + -1.000000e+02f;
            float v__33 = (v__32) < (1.270000e+02f) ? (v__32) : (1.270000e+02f);
            T_multiply[((((ax0_ax1_fused * 10773) + (ax2 * 21)) + cse_var_5) + ax3_inner)] = (((float)(((int32_t)((int8_t)((v__33) > (-1.280000e+02f) ? (v__33) : (-1.280000e+02f)))) + 100)) * 1.033652e-01f);
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 65; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 65; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          T_layout_trans[((((ax0_ax1_fused * 10400) + (ax2 * 160)) + (ax3_outer * 16)) + ax3_inner)] = p0[(((((ax3_outer * 67600) + ((ax3_inner >> 2) * 16900)) + (ax0_ax1_fused * 260)) + (ax2 * 4)) + (ax3_inner & 3))];
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_reshape_cast_subtract_cast_layout_transform(int8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 40; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused * 4) + ax4_inner);
      T_layout_trans[cse_var_1] = ((float)(((int32_t)p0[cse_var_1]) + 5));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_reshape_cast_subtract_cast_multiply_image_resize2d_divide_ea4d10f16deb4f05_(int8_t* p0, int8_t* p1, float* T_layout_trans, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var) {
  void* T_cast_let = (&(global_workspace_153_var[1081600]));
  for (int32_t ax1 = 0; ax1 < 256; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 65; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 65; ++ax3) {
        float v_ = roundf(((((float)(((int32_t)p0[ax1]) + 128)) * 1.043700e-02f) * 9.581297e+01f)) + -1.280000e+02f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = roundf(((((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 128)) * 1.043700e-02f) * 7.999094e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        ((int8_t*)T_cast_let)[(((ax1 * 4225) + (ax2 * 65)) + ax3)] = ((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)));
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_153_var[2163200]));
  for (int32_t ax1_1 = 0; ax1_1 < 256; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 65; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 65; ++ax3_1) {
        ((int8_t*)T_layout_trans_let)[(((ax1_1 * 4225) + (ax2_1 * 65)) + ax3_1)] = p1[(((((ax1_1 >> 2) * 16900) + (ax2_1 * 260)) + (ax3_1 * 4)) + (ax1_1 & 3))];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_153_var[8652800]));
  for (int32_t j = 0; j < 1081600; ++j) {
    ((int8_t*)concatenate_ext_let)[j] = ((int8_t*)T_cast_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 1081600; ++j_1) {
    ((int8_t*)concatenate_ext_let)[(j_1 + 1081600)] = ((int8_t*)T_layout_trans_let)[j_1];
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 8320; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_2 = 0; ax3_2 < 65; ++ax3_2) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 260) + (ax3_2 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t*)concatenate_ext_let)[(((((ax0_ax1_fused_ax2_fused / 65) * 16900) + (ax4_inner * 4225)) + ((ax0_ax1_fused_ax2_fused % 65) * 65)) + ax3_2)]) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_1ebb5b0eae9a410c_(int8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_let = (&(global_const_workspace_78_var[2768320]));
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_constant_let = (&(global_const_workspace_78_var[2769088]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3120; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 65; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused / 65);
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 65);
        int32_t cse_var_1 = ((cse_var_3 * 4) + ax4_inner);
        float v_ = roundf(((((float)p0[(((((((cse_var_2 % 2) * 418176) + ((ax3 % 2) * 209088)) + (cse_var_3 * 4356)) + ((cse_var_2 / 2) * 132)) + ((ax3 / 2) * 4)) + ax4_inner)]) * ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_constant_let)[cse_var_1]) * 1.107696e+01f)) + 3.200000e+01f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) - 32)) * 9.027750e-02f) + ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_let)[cse_var_1];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        float v__4 = roundf((((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 260) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1_(int8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_let = (&(global_const_workspace_52_var[2765248]));
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_let = (&(global_const_workspace_52_var[2767552]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3120; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 65; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused / 65);
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 65);
        int32_t cse_var_1 = ((cse_var_3 * 4) + ax4_inner);
        float v_ = roundf(((((float)(((int32_t)p0[(((((((cse_var_2 % 2) * 418176) + ((ax3 % 2) * 209088)) + (cse_var_3 * 4356)) + ((cse_var_2 / 2) * 132)) + ((ax3 / 2) * 4)) + ax4_inner)]) - 2)) * ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_let)[cse_var_1]) * 2.350422e+00f)) + -8.300000e+01f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 83)) * 4.254556e-01f) + ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_let)[cse_var_1];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        float v__4 = roundf((((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 260) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__1(int8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_1_let = (&(global_const_workspace_60_var[2764480]));
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_1_let = (&(global_const_workspace_60_var[2766784]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3120; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 65; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused / 65);
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 65);
        int32_t cse_var_1 = ((cse_var_3 * 4) + ax4_inner);
        float v_ = roundf(((((float)(((int32_t)p0[(((((((cse_var_2 % 2) * 418176) + ((ax3 % 2) * 209088)) + (cse_var_3 * 4356)) + ((cse_var_2 / 2) * 132)) + ((ax3 / 2) * 4)) + ax4_inner)]) - 9)) * ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_1_let)[cse_var_1]) * 4.371457e+00f)) + -2.900000e+01f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 29)) * 2.287567e-01f) + ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_1_let)[cse_var_1];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        float v__4 = roundf((((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 260) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__2(int8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_2_let = (&(global_const_workspace_68_var[2763712]));
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_2_let = (&(global_const_workspace_68_var[2766016]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3120; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 65; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused / 65);
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 65);
        int32_t cse_var_1 = ((cse_var_3 * 4) + ax4_inner);
        float v_ = roundf(((((float)(((int32_t)p0[(((((((cse_var_2 % 2) * 418176) + ((ax3 % 2) * 209088)) + (cse_var_3 * 4356)) + ((cse_var_2 / 2) * 132)) + ((ax3 / 2) * 4)) + ax4_inner)]) - 11)) * ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_2_let)[cse_var_1]) * 1.126777e+01f)) + 7.000000e+00f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) - 7)) * 8.874869e-02f) + ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_2_let)[cse_var_1];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        float v__4 = roundf((((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 260) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__3(int8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_3_let = (&(global_const_workspace_88_var[2749888]));
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_3_let = (&(global_const_workspace_88_var[2753344]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4680; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 65; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused / 65);
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 65);
        int32_t cse_var_1 = ((cse_var_3 * 4) + ax4_inner);
        float v_ = roundf(((((float)(((int32_t)p0[(((((((cse_var_2 % 2) * 627264) + ((ax3 % 2) * 313632)) + (cse_var_3 * 4356)) + ((cse_var_2 / 2) * 132)) + ((ax3 / 2) * 4)) + ax4_inner)]) - 4)) * ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_3_let)[cse_var_1]) * 5.332439e+00f)) + -6.300000e+01f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 63)) * 1.875314e-01f) + ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_3_let)[cse_var_1];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        float v__4 = roundf((((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 260) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__4(int8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_4_let = (&(global_const_workspace_98_var[2748736]));
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_4_let = (&(global_const_workspace_98_var[2752192]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4680; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 65; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused / 65);
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 65);
        int32_t cse_var_1 = ((cse_var_3 * 4) + ax4_inner);
        float v_ = roundf(((((float)(((int32_t)p0[(((((((cse_var_2 % 2) * 627264) + ((ax3 % 2) * 313632)) + (cse_var_3 * 4356)) + ((cse_var_2 / 2) * 132)) + ((ax3 / 2) * 4)) + ax4_inner)]) - 3)) * ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_4_let)[cse_var_1]) * 8.655144e+00f)) + -3.200000e+01f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 32)) * 1.155382e-01f) + ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_4_let)[cse_var_1];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        float v__4 = roundf((((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 260) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__5(int8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_5_let = (&(global_const_workspace_108_var[2747584]));
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_5_let = (&(global_const_workspace_108_var[2751040]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4680; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 65; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused / 65);
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 65);
        int32_t cse_var_1 = ((cse_var_3 * 4) + ax4_inner);
        float v_ = roundf(((((float)(((int32_t)p0[(((((((cse_var_2 % 2) * 627264) + ((ax3 % 2) * 313632)) + (cse_var_3 * 4356)) + ((cse_var_2 / 2) * 132)) + ((ax3 / 2) * 4)) + ax4_inner)]) + 1)) * ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_5_let)[cse_var_1]) * 1.278485e+01f)) + -2.800000e+01f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 28)) * 7.821759e-02f) + ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_5_let)[cse_var_1];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        float v__4 = roundf((((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 260) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__6(int8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_6_let = (&(global_const_workspace_118_var[2728000]));
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_6_let = (&(global_const_workspace_118_var[2733760]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 7800; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 65; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused / 65);
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 65);
        int32_t cse_var_1 = ((cse_var_3 * 4) + ax4_inner);
        float v_ = roundf(((((float)(((int32_t)p0[(((((((cse_var_2 % 4) * 554880) + ((ax3 % 4) * 138720)) + (cse_var_3 * 1156)) + ((cse_var_2 / 4) * 68)) + ((ax3 / 4) * 4)) + ax4_inner)]) - 69)) * ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_6_let)[cse_var_1]) * 7.149909e+00f)) + 4.900000e+01f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) - 49)) * 1.398619e-01f) + ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_6_let)[cse_var_1];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        float v__4 = roundf((((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 260) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__7(int8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_7_let = (&(global_const_workspace_138_var[2726080]));
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_8_let = (&(global_const_workspace_138_var[2729920]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 7800; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 65; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused / 65);
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 65);
        int32_t cse_var_1 = ((cse_var_3 * 4) + ax4_inner);
        float v_ = roundf(((((float)(((int32_t)p0[(((((((cse_var_2 % 4) * 554880) + ((ax3 % 4) * 138720)) + (cse_var_3 * 1156)) + ((cse_var_2 / 4) * 68)) + ((ax3 / 4) * 4)) + ax4_inner)]) - 30)) * ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_8_let)[cse_var_1]) * 1.351560e+01f)) + 4.100000e+01f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) - 41)) * 7.398856e-02f) + ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_7_let)[cse_var_1];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        float v__4 = roundf((((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 260) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_902ba9fb4b47004f_(int8_t* p0, float* T_layout_trans, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_clip_multiply_constant_let = (&(global_const_workspace_128_var[2724160]));
  void* fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_7_let = (&(global_const_workspace_128_var[2731840]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 7800; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 65; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused / 65);
        int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused % 65);
        int32_t cse_var_1 = ((cse_var_3 * 4) + ax4_inner);
        float v_ = roundf(((((float)(((int32_t)p0[(((((((cse_var_2 % 4) * 554880) + ((ax3 % 4) * 138720)) + (cse_var_3 * 1156)) + ((cse_var_2 / 4) * 68)) + ((ax3 / 4) * 4)) + ax4_inner)]) - 12)) * ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_constant_7_let)[cse_var_1]) * 1.181131e+01f));
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = (((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)) * 8.466462e-02f) + ((float*)fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpose_cast_subtract_cast_multiply_divide_round_clip_multiply_constant_let)[cse_var_1];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        float v__4 = roundf((((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)) * 4.436902e+01f)) + -1.280000e+02f;
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 260) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
  void* pool_sum_let = (&(global_workspace_145_var[2704000]));
  for (int32_t ax3_outer_init = 0; ax3_outer_init < 4; ++ax3_outer_init) {
    for (int32_t ax3_inner_init = 0; ax3_inner_init < 40; ++ax3_inner_init) {
      ((float*)pool_sum_let)[((ax3_outer_init * 40) + ax3_inner_init)] = 0.000000e+00f;
    }
  }
  for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 4225; ++rv0_rv1_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 40; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 40);
        int32_t cse_var_1 = (cse_var_2 + ax3_inner);
        ((float*)pool_sum_let)[cse_var_1] = (((float*)pool_sum_let)[cse_var_1] + p0[(((rv0_rv1_fused * 160) + cse_var_2) + ax3_inner)]);
      }
    }
  }
  for (int32_t ax3 = 0; ax3 < 160; ++ax3) {
    float v_ = roundf(((((float*)pool_sum_let)[ax3] * 2.366864e-04f) * 1.750644e+01f)) + -5.000000e+00f;
    float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
    T_cast[ax3] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96_(float* p0, float* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_let = (&(global_const_workspace_4_var[2777824]));
  void* fused_constant_let = (&(global_const_workspace_4_var[2737408]));
  void* data_pad_let = (&(global_workspace_5_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 515; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 515; ++i3) {
      for (int32_t i4 = 0; i4 < 3; ++i4) {
        int32_t cse_var_1 = (i3 * 3);
        ((float*)data_pad_let)[(((i0_i1_fused_i2_fused * 1545) + cse_var_1) + i4)] = (((((1 <= i0_i1_fused_i2_fused) && (i0_i1_fused_i2_fused < 514)) && (1 <= i3)) && (i3 < 514)) ? p0[((((i0_i1_fused_i2_fused * 1539) + cse_var_1) + i4) - 1542)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1028; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_5_var[3182704]));
    for (int32_t ow_outer = 0; ow_outer < 257; ++ow_outer) {
      void* conv2d_NCHWc_global_let = (&(global_workspace_5_var[3186816]));
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
      }
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 3; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 257) * 3090) + (kh * 1545)) + (ow_outer * 6)) + (kw * 3)) + ic_inner)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 257) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c)]));
            }
          }
        }
      }
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        ((float*)conv2d_NCHWc_let)[((ow_outer * 4) + oc_block)] = ((float*)conv2d_NCHWc_global_let)[oc_block];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 257; ++ax3_outer) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_2 = (ax3_outer * 4);
        float v_ = ((float*)conv2d_NCHWc_let)[(cse_var_2 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_let)[(((ax0_ax1_fused_ax2_fused / 257) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_fused * 1028) + cse_var_2) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__1(float* p0, float* T_cast, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_2_let = (&(global_const_workspace_10_var[2776768]));
  void* fused_constant_3_let = (&(global_const_workspace_10_var[2739136]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 3084; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_11_var[2113568]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_11_var[2117680]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 257; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 4) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 2; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 4);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 264196) + ((ax0_ax1_fused_ax2_outer_fused % 257) * 1028)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 257) * 32) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 257; ++ow_outer) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_3 = ((ow_outer * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_3] = ((float*)conv2d_NCHWc_global_let)[cse_var_3];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 257; ++ax3_outer) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_4 = (ax3_outer * 4);
        float v_ = ((float*)conv2d_NCHWc_let)[(cse_var_4 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_2_let)[(((ax0_ax1_fused_ax2_outer_fused / 257) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_outer_fused * 1028) + cse_var_4) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__2(float* p0, float* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_4_let = (&(global_const_workspace_16_var[2775712]));
  void* fused_constant_6_let = (&(global_const_workspace_16_var[2691328]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 774; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_17_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_17_var[6192]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 43; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 12) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_3) + 516)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_4) + 520)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_5) + 524)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_6) + 1032)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_7) + 1036)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_8) + 1040)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 3; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 12);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 12);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 12);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 12);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 516);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_8) + ic_inner) + 516)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 12);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 520);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_10) + ic_inner) + 520)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 12);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 524);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_12) + ic_inner) + 524)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 12);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 1032);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_14) + ic_inner) + 1032)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 12);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 1036);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_16) + ic_inner) + 1036)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 12);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 1040);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_18) + ic_inner) + 1040)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 43; ++ow_outer) {
      for (int32_t oh_inner = 0; oh_inner < 3; ++oh_inner) {
        for (int32_t ow_inner = 0; ow_inner < 3; ++ow_inner) {
          for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
            int32_t cse_var_19 = ((((oh_inner * 516) + (ow_outer * 12)) + (ow_inner * 4)) + oc_block);
            ((float*)conv2d_NCHWc_let)[cse_var_19] = ((float*)conv2d_NCHWc_global_let)[cse_var_19];
          }
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 43; ++ax3_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 3; ++ax2_inner) {
        for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
          for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
            int32_t cse_var_22 = (ax2_inner * 516);
            int32_t cse_var_21 = (ax3_outer * 12);
            int32_t cse_var_20 = (ax3_inner * 4);
            float v_ = ((float*)conv2d_NCHWc_let)[(((cse_var_22 + cse_var_21) + cse_var_20) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_4_let)[(((ax0_ax1_fused_ax2_outer_fused / 43) * 4) + ax4)];
            float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
            float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
            float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
            T_cast[(((((ax0_ax1_fused_ax2_outer_fused * 1548) + cse_var_22) + cse_var_21) + cse_var_20) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__3(float* p0, float* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_6_let = (&(global_const_workspace_22_var[2775424]));
  void* fused_constant_9_let = (&(global_const_workspace_22_var[2684416]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 774; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_23_var[798768]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_23_var[804960]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 43; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 12) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_3) + 516)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_4) + 520)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_5) + 524)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_6) + 1032)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_7) + 1036)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_8) + 1040)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 3; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 12);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 12);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 12);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 12);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 516);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_8) + ic_inner) + 516)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 12);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 520);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_10) + ic_inner) + 520)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 12);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 524);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_12) + ic_inner) + 524)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 12);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 1032);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_14) + ic_inner) + 1032)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 12);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 1036);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_16) + ic_inner) + 1036)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 12);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 1040);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_18) + ic_inner) + 1040)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 48) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 43; ++ow_outer) {
      for (int32_t oh_inner = 0; oh_inner < 3; ++oh_inner) {
        for (int32_t ow_inner = 0; ow_inner < 3; ++ow_inner) {
          for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
            int32_t cse_var_19 = ((((oh_inner * 516) + (ow_outer * 12)) + (ow_inner * 4)) + oc_block);
            ((float*)conv2d_NCHWc_let)[cse_var_19] = ((float*)conv2d_NCHWc_global_let)[cse_var_19];
          }
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 43; ++ax3_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 3; ++ax2_inner) {
        for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
          for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
            int32_t cse_var_22 = (ax2_inner * 516);
            int32_t cse_var_21 = (ax3_outer * 12);
            int32_t cse_var_20 = (ax3_inner * 4);
            float v_ = ((float*)conv2d_NCHWc_let)[(((cse_var_22 + cse_var_21) + cse_var_20) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_6_let)[(((ax0_ax1_fused_ax2_outer_fused / 43) * 4) + ax4)];
            float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
            float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
            float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
            T_cast[(((((ax0_ax1_fused_ax2_outer_fused * 1548) + cse_var_22) + cse_var_21) + cse_var_20) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__4(float* p0, float* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_8_let = (&(global_const_workspace_28_var[2772736]));
  void* fused_constant_12_let = (&(global_const_workspace_28_var[2673664]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 1560; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_29_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_29_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_8_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__5(float* p0, float* T_cast, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_10_let = (&(global_const_workspace_34_var[2773504]));
  void* fused_constant_15_let = (&(global_const_workspace_34_var[2661376]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 1560; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_35_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_35_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_15_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_10_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__6(float* p0, float* T_cast, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_12_let = (&(global_const_workspace_40_var[2773120]));
  void* fused_constant_18_let = (&(global_const_workspace_40_var[2649088]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 1560; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_41_var[270400]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_41_var[271440]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_18_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_12_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109_(float* p0, float* T_multiply, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_14_let = (&(global_const_workspace_46_var[2762944]));
  void* fused_constant_21_let = (&(global_const_workspace_46_var[2480128]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 3120; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_47_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_47_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 8; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_21_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_14_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128)) * 2.352941e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__1(float* p0, float* T_multiply, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_16_let = (&(global_const_workspace_56_var[2762176]));
  void* fused_constant_24_let = (&(global_const_workspace_56_var[2430976]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 3120; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_57_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_57_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 8; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_24_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_16_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128)) * 2.352941e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__2(float* p0, float* T_multiply, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_18_let = (&(global_const_workspace_64_var[2761408]));
  void* fused_constant_27_let = (&(global_const_workspace_64_var[2381824]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 3120; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_65_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_65_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 8; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_27_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_27_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_27_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_27_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_27_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_27_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_27_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_27_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_27_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_27_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_27_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_27_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_27_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_18_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128)) * 2.352941e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__3(float* p0, float* T_multiply, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_20_let = (&(global_const_workspace_72_var[2760640]));
  void* fused_constant_30_let = (&(global_const_workspace_72_var[2332672]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 3120; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_73_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_73_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 8; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_30_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_30_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_30_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_30_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_30_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_30_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_30_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_30_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_30_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_30_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_30_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_30_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_30_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 128) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_20_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128)) * 2.352941e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__4(float* p0, float* T_multiply, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_22_let = (&(global_const_workspace_82_var[2746432]));
  void* fused_constant_33_let = (&(global_const_workspace_82_var[2240512]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 4680; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_83_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_83_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 12; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_33_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_33_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_33_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_33_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_33_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_33_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_33_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_33_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_33_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_33_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_33_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_33_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_33_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_22_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128)) * 2.352941e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__5(float* p0, float* T_multiply, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_24_let = (&(global_const_workspace_92_var[2745280]));
  void* fused_constant_36_let = (&(global_const_workspace_92_var[2129920]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 4680; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_93_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_93_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 12; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_36_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_36_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_36_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_36_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_36_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_36_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_36_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_36_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_36_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_36_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_36_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_36_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_36_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_24_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.348064e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128)) * 2.299874e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__6(float* p0, float* T_multiply, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_26_let = (&(global_const_workspace_102_var[2744128]));
  void* fused_constant_39_let = (&(global_const_workspace_102_var[2019328]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 4680; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_103_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_103_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 12; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_39_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_39_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_39_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_39_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_39_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_39_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_39_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_39_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_39_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_39_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_39_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_39_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_39_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_26_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128)) * 2.352941e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__7(float* p0, float* T_multiply, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_28_let = (&(global_const_workspace_112_var[2722240]));
  void* fused_constant_42_let = (&(global_const_workspace_112_var[1773568]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 7800; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_113_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_113_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 20; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_28_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128)) * 2.352941e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__8(float* p0, float* T_multiply, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_30_let = (&(global_const_workspace_122_var[2720320]));
  void* fused_constant_45_let = (&(global_const_workspace_122_var[1466368]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 7800; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_123_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_123_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 20; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_30_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.568189e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128)) * 2.189051e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__9(float* p0, float* T_multiply, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_32_let = (&(global_const_workspace_132_var[2718400]));
  void* fused_constant_48_let = (&(global_const_workspace_132_var[1159168]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 7800; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_133_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_133_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 20; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 320) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_32_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128)) * 2.352941e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast(float* p0, float* T_cast, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_8_var[2777984]));
  void* fused_constant_2_let = (&(global_const_workspace_8_var[2771072]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 514; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_9_var[2113568]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_9_var[2117680]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 257; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 4) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 4);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 264196) + ((ax0_ax1_fused_ax2_outer_fused % 257) * 1028)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 257) * 64) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 257; ++ow_outer) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_3 = ((ow_outer * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_3] = ((float*)conv2d_NCHWc_global_let)[cse_var_3];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 257; ++ax3_outer) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_4 = (ax3_outer * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_4 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_1_let)[(((ax0_ax1_fused_ax2_outer_fused / 257) * 4) + ax4)]) * 2.566752e+00f)) + 2.000000e+00f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_outer_fused * 1028) + cse_var_4) + ax4)] = ((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) - 2));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__384203b469b33259_(float* p0, float* p1, float* T_cast, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_5_let = (&(global_const_workspace_20_var[2777888]));
  void* fused_constant_8_let = (&(global_const_workspace_20_var[2687872]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 129; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_21_var[798768]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_21_var[804960]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 43; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 12) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_3) + 516)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_4) + 520)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_5) + 524)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_6) + 1032)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_7) + 1036)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_8) + 1040)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 18; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 12);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 12);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 12);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 12);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 516);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_8) + ic_inner) + 516)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 12);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 520);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_10) + ic_inner) + 520)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 12);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 524);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_12) + ic_inner) + 524)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 12);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 1032);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_14) + ic_inner) + 1032)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 12);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 1036);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_16) + ic_inner) + 1036)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 12);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 1040);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_18) + ic_inner) + 1040)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 43; ++ow_outer) {
      for (int32_t oh_inner = 0; oh_inner < 3; ++oh_inner) {
        for (int32_t ow_inner = 0; ow_inner < 3; ++ow_inner) {
          for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
            int32_t cse_var_19 = ((((oh_inner * 516) + (ow_outer * 12)) + (ow_inner * 4)) + oc_block);
            ((float*)conv2d_NCHWc_let)[cse_var_19] = ((float*)conv2d_NCHWc_global_let)[cse_var_19];
          }
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 43; ++ax3_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 3; ++ax2_inner) {
        for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
          for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
            int32_t cse_var_23 = (ax2_inner * 516);
            int32_t cse_var_22 = (ax3_outer * 12);
            int32_t cse_var_21 = (ax3_inner * 4);
            int32_t cse_var_20 = (((((ax0_ax1_fused_ax2_outer_fused * 1548) + cse_var_23) + cse_var_22) + cse_var_21) + ax4);
            float v_ = roundf(((((float*)conv2d_NCHWc_let)[(((cse_var_23 + cse_var_22) + cse_var_21) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_5_let)[(((ax0_ax1_fused_ax2_outer_fused / 43) * 4) + ax4)]) * 1.944786e+00f)) + -1.600000e+01f;
            float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
            float v__2 = roundf((((((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 16)) * 5.141953e-01f) + p1[cse_var_20]) * 2.269428e+00f)) + -5.000000e+00f;
            float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
            T_cast[cse_var_20] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 5));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__384203b469b33259__1(float* p0, float* p1, float* T_cast, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_11_let = (&(global_const_workspace_38_var[2777760]));
  void* fused_constant_17_let = (&(global_const_workspace_38_var[2655232]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 260; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_39_var[270400]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_39_var[271440]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 24; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax3_outer * 52);
          int32_t cse_var_29 = (ax3_inner * 4);
          int32_t cse_var_28 = ((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_30) + cse_var_29) + ax4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_11_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 6.808287e+00f)) + -2.000000e+00f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          float v__2 = roundf((((((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 2)) * 1.468798e-01f) + p1[cse_var_28]) * 4.107816e+00f)) + 6.000000e+00f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[cse_var_28] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) - 6));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__384203b469b33259__2(float* p0, float* p1, float* T_cast, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_19_let = (&(global_const_workspace_70_var[2776960]));
  void* fused_constant_29_let = (&(global_const_workspace_70_var[2357248]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 520; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_71_var[3244800]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_71_var[3245840]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 48; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax3_outer * 52);
          int32_t cse_var_29 = (ax3_inner * 4);
          int32_t cse_var_28 = ((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_30) + cse_var_29) + ax4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_19_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 7.269988e+00f)) + 4.000000e+00f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          float v__2 = roundf((((((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) - 4)) * 1.375518e-01f) + p1[cse_var_28]) * 4.948361e+00f)) + -2.000000e+00f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[cse_var_28] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 2));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__384203b469b33259__3(float* p0, float* p1, float* T_cast, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_25_let = (&(global_const_workspace_100_var[2776192]));
  void* fused_constant_38_let = (&(global_const_workspace_100_var[2074624]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 780; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_101_var[4867200]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_101_var[4868240]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 72; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax3_outer * 52);
          int32_t cse_var_29 = (ax3_inner * 4);
          int32_t cse_var_28 = ((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_30) + cse_var_29) + ax4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_25_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 5.988071e+00f)) + -1.000000e+00f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          float v__2 = roundf((((((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 1)) * 1.669987e-01f) + p1[cse_var_28]) * 5.766399e+00f)) + -3.000000e+00f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[cse_var_28] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 3));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__384203b469b33259__4(float* p0, float* p1, float* T_cast, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_31_let = (&(global_const_workspace_130_var[2773888]));
  void* fused_constant_47_let = (&(global_const_workspace_130_var[1312768]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 1300; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_131_var[9464000]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_131_var[9465040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 120; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_47_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_47_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_47_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_47_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_47_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_47_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_47_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_47_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_47_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_47_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_47_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_47_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_47_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax3_outer * 52);
          int32_t cse_var_29 = (ax3_inner * 4);
          int32_t cse_var_28 = ((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_30) + cse_var_29) + ax4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_31_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 1.127930e+01f)) + 2.000000e+00f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          float v__2 = roundf((((((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) - 2)) * 8.865796e-02f) + p1[cse_var_28]) * 7.644930e+00f)) + -1.000000e+01f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[cse_var_28] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 10));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__96e7c63399e022c1_(float* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_9_let = (&(global_const_workspace_32_var[2777632]));
  void* fused_constant_14_let = (&(global_const_workspace_32_var[2667520]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 260; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_33_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_33_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 24; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax3_outer * 52);
          int32_t cse_var_29 = (ax3_inner * 4);
          int32_t cse_var_28 = ((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_30) + cse_var_29) + ax4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_9_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 6.981321e+00f)) + -2.000000e+00f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          float v__2 = roundf((((((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 2)) * 1.432394e-01f) + p1[cse_var_28]) * 4.106047e+00f)) + -2.000000e+00f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[cse_var_28] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 2)) * 2.435432e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__96e7c63399e022c1__1(float* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_15_let = (&(global_const_workspace_54_var[2777216]));
  void* fused_constant_23_let = (&(global_const_workspace_54_var[2455552]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 520; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_55_var[3244800]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_55_var[3245840]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 48; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax3_outer * 52);
          int32_t cse_var_29 = (ax3_inner * 4);
          int32_t cse_var_28 = ((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_30) + cse_var_29) + ax4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_15_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 6.299574e+00f)) + -1.200000e+01f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          float v__2 = roundf((((((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 12)) * 1.587409e-01f) + p1[cse_var_28]) * 5.083759e+00f)) + -1.600000e+01f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[cse_var_28] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 16)) * 1.967048e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__96e7c63399e022c1__2(float* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_17_let = (&(global_const_workspace_62_var[2777088]));
  void* fused_constant_26_let = (&(global_const_workspace_62_var[2406400]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 520; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_63_var[3244800]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_63_var[3245840]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 48; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax3_outer * 52);
          int32_t cse_var_29 = (ax3_inner * 4);
          int32_t cse_var_28 = ((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_30) + cse_var_29) + ax4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_17_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 6.252943e+00f)) + -1.300000e+01f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          float v__2 = roundf((((((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 13)) * 1.599247e-01f) + p1[cse_var_28]) * 4.560662e+00f)) + -1.000000e+01f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[cse_var_28] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 10)) * 2.192664e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__96e7c63399e022c1__3(float* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_23_let = (&(global_const_workspace_90_var[2776384]));
  void* fused_constant_35_let = (&(global_const_workspace_90_var[2185216]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 780; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_91_var[4867200]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_91_var[4868240]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 72; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax3_outer * 52);
          int32_t cse_var_29 = (ax3_inner * 4);
          int32_t cse_var_28 = ((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_30) + cse_var_29) + ax4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_23_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 1.078187e+01f)) + 4.000000e+00f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          float v__2 = roundf((((((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) - 4)) * 9.274830e-02f) + p1[cse_var_28]) * 7.125526e+00f)) + -8.000000e+00f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[cse_var_28] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 8)) * 1.403405e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__96e7c63399e022c1__4(float* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_29_let = (&(global_const_workspace_120_var[2774208]));
  void* fused_constant_44_let = (&(global_const_workspace_120_var[1619968]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 1300; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_121_var[8112000]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_121_var[8113040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 120; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_44_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_44_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_44_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_44_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_44_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_44_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_44_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_44_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_44_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_44_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_44_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_44_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_44_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax3_outer * 52);
          int32_t cse_var_29 = (ax3_inner * 4);
          int32_t cse_var_28 = ((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_30) + cse_var_29) + ax4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_29_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 1.319433e+01f)) + 4.000000e+00f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          float v__2 = roundf((((((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) - 4)) * 7.579011e-02f) + p1[cse_var_28]) * 9.485884e+00f)) + 5.000000e+00f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_multiply[cse_var_28] = (((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) - 5)) * 1.054198e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f_(float* p0, float* T_multiply, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_3_let = (&(global_const_workspace_14_var[2777936]));
  void* fused_constant_5_let = (&(global_const_workspace_14_var[2710336]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 129; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_15_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_15_var[6192]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 43; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 12) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_3) + 516)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_4) + 520)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_5) + 524)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_6) + 1032)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_7) + 1036)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 12) + oc_block_c_init_8) + 1040)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 12; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 12);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 12);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 12);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 12);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 516);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_8) + ic_inner) + 516)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 12);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 520);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_10) + ic_inner) + 520)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 12);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 524);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_12) + ic_inner) + 524)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 12);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 1032);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_14) + ic_inner) + 1032)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 12);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 1036);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_16) + ic_inner) + 1036)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 12);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 1040);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 66564) + ((ax0_ax1_fused_ax2_outer_fused % 43) * 1548)) + cse_var_18) + ic_inner) + 1040)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 43) * 192) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 43; ++ow_outer) {
      for (int32_t oh_inner = 0; oh_inner < 3; ++oh_inner) {
        for (int32_t ow_inner = 0; ow_inner < 3; ++ow_inner) {
          for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
            int32_t cse_var_19 = ((((oh_inner * 516) + (ow_outer * 12)) + (ow_inner * 4)) + oc_block);
            ((float*)conv2d_NCHWc_let)[cse_var_19] = ((float*)conv2d_NCHWc_global_let)[cse_var_19];
          }
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 43; ++ax3_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 3; ++ax2_inner) {
        for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
          for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
            int32_t cse_var_22 = (ax2_inner * 516);
            int32_t cse_var_21 = (ax3_outer * 12);
            int32_t cse_var_20 = (ax3_inner * 4);
            float v_ = roundf(((((float*)conv2d_NCHWc_let)[(((cse_var_22 + cse_var_21) + cse_var_20) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_3_let)[(((ax0_ax1_fused_ax2_outer_fused / 43) * 4) + ax4)]) * 2.978308e+00f)) + -7.000000e+00f;
            float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
            T_multiply[(((((ax0_ax1_fused_ax2_outer_fused * 1548) + cse_var_22) + cse_var_21) + cse_var_20) + ax4)] = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 7)) * 3.357611e-01f);
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f__1(float* p0, float* T_multiply, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_7_let = (&(global_const_workspace_26_var[2777696]));
  void* fused_constant_11_let = (&(global_const_workspace_26_var[2679808]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 260; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_27_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_27_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 18; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 288) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_7_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 4.749300e+00f)) + 8.000000e+00f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) - 8)) * 2.105574e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f__2(float* p0, float* T_multiply, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_13_let = (&(global_const_workspace_44_var[2777344]));
  void* fused_constant_20_let = (&(global_const_workspace_44_var[2578048]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 520; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_45_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_45_var[1040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 24; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 384) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_13_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 5.357030e+00f)) + -1.400000e+01f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 14)) * 1.866706e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f__3(float* p0, float* T_multiply, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_21_let = (&(global_const_workspace_80_var[2776576]));
  void* fused_constant_32_let = (&(global_const_workspace_80_var[2295808]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 780; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_81_var[3244800]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_81_var[3245840]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 48; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_21_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 7.622033e+00f)) + -1.600000e+01f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 16)) * 1.311986e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f__4(float* p0, float* T_multiply, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_27_let = (&(global_const_workspace_110_var[2774528]));
  void* fused_constant_41_let = (&(global_const_workspace_110_var[1927168]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 1300; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_111_var[4867200]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_111_var[4868240]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 72; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_41_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_41_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_41_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_41_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_41_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_41_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_41_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_41_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_41_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_41_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_41_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_41_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_41_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1152) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_27_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 1.006680e+01f)) + 1.900000e+01f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) - 19)) * 9.933645e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f__5(float* p0, float* T_multiply, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_33_let = (&(global_const_workspace_140_var[2769856]));
  void* fused_constant_50_let = (&(global_const_workspace_140_var[524288]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 2600; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_141_var[10816000]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_141_var[10817040]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 120; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_50_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_50_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_50_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_50_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_50_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_50_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_50_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_50_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_50_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_50_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_50_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_50_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_50_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 1920) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_33_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)]) * 1.750644e+01f)) + -5.000000e+00f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 5)) * 5.712184e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f__6(float* p0, float* T_multiply, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_37_let = (&(global_const_workspace_158_var[2777472]));
  void* fused_constant_54_let = (&(global_const_workspace_158_var[2504704]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 455; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_159_var[4681312]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_159_var[4682096]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 3; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 39) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 3; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 39) + oc_block_c_init_1) + 3)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 3; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 39) + oc_block_c_init_2) + 6)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 3; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 39) + oc_block_c_init_3) + 9)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 3; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 39) + oc_block_c_init_4) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 3; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 39) + oc_block_c_init_5) + 15)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 3; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 39) + oc_block_c_init_6) + 18)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 3; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 39) + oc_block_c_init_7) + 21)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 3; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 39) + oc_block_c_init_8) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 3; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 39) + oc_block_c_init_9) + 27)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 3; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 39) + oc_block_c_init_10) + 30)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 3; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 39) + oc_block_c_init_11) + 33)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 3; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 39) + oc_block_c_init_12) + 36)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 128; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 2; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 3; ++oc_block_c) {
            int32_t cse_var_1 = ((ow_c_outer * 39) + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 8450) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 130)) + (ow_c_outer * 26)) + ic_inner)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 6)) + (ic_inner * 3)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 3; ++oc_block_c_1) {
            int32_t cse_var_2 = (((ow_c_outer * 39) + oc_block_c_1) + 3);
            ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[(((((ic_outer * 8450) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 130)) + (ow_c_outer * 26)) + ic_inner) + 2)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 6)) + (ic_inner * 3)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 3; ++oc_block_c_2) {
            int32_t cse_var_3 = (((ow_c_outer * 39) + oc_block_c_2) + 6);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 8450) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 130)) + (ow_c_outer * 26)) + ic_inner) + 4)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 6)) + (ic_inner * 3)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 3; ++oc_block_c_3) {
            int32_t cse_var_4 = (((ow_c_outer * 39) + oc_block_c_3) + 9);
            ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[(((((ic_outer * 8450) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 130)) + (ow_c_outer * 26)) + ic_inner) + 6)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 6)) + (ic_inner * 3)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 3; ++oc_block_c_4) {
            int32_t cse_var_5 = (((ow_c_outer * 39) + oc_block_c_4) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 8450) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 130)) + (ow_c_outer * 26)) + ic_inner) + 8)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 6)) + (ic_inner * 3)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 3; ++oc_block_c_5) {
            int32_t cse_var_6 = (((ow_c_outer * 39) + oc_block_c_5) + 15);
            ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[(((((ic_outer * 8450) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 130)) + (ow_c_outer * 26)) + ic_inner) + 10)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 6)) + (ic_inner * 3)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 3; ++oc_block_c_6) {
            int32_t cse_var_7 = (((ow_c_outer * 39) + oc_block_c_6) + 18);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 8450) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 130)) + (ow_c_outer * 26)) + ic_inner) + 12)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 6)) + (ic_inner * 3)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 3; ++oc_block_c_7) {
            int32_t cse_var_8 = (((ow_c_outer * 39) + oc_block_c_7) + 21);
            ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[(((((ic_outer * 8450) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 130)) + (ow_c_outer * 26)) + ic_inner) + 14)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 6)) + (ic_inner * 3)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 3; ++oc_block_c_8) {
            int32_t cse_var_9 = (((ow_c_outer * 39) + oc_block_c_8) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 8450) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 130)) + (ow_c_outer * 26)) + ic_inner) + 16)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 6)) + (ic_inner * 3)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 3; ++oc_block_c_9) {
            int32_t cse_var_10 = (((ow_c_outer * 39) + oc_block_c_9) + 27);
            ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[(((((ic_outer * 8450) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 130)) + (ow_c_outer * 26)) + ic_inner) + 18)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 6)) + (ic_inner * 3)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 3; ++oc_block_c_10) {
            int32_t cse_var_11 = (((ow_c_outer * 39) + oc_block_c_10) + 30);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 8450) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 130)) + (ow_c_outer * 26)) + ic_inner) + 20)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 6)) + (ic_inner * 3)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 3; ++oc_block_c_11) {
            int32_t cse_var_12 = (((ow_c_outer * 39) + oc_block_c_11) + 33);
            ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[(((((ic_outer * 8450) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 130)) + (ow_c_outer * 26)) + ic_inner) + 22)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 6)) + (ic_inner * 3)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 3; ++oc_block_c_12) {
            int32_t cse_var_13 = (((ow_c_outer * 39) + oc_block_c_12) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 8450) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 130)) + (ow_c_outer * 26)) + ic_inner) + 24)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 768) + (ic_outer * 6)) + (ic_inner * 3)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 3; ++oc_block) {
          int32_t cse_var_14 = (((ow_outer * 39) + (ow_inner * 3)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_14] = ((float*)conv2d_NCHWc_global_let)[cse_var_14];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 3; ++ax4) {
          int32_t cse_var_16 = (ax3_outer * 39);
          int32_t cse_var_15 = (ax3_inner * 3);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_16 + cse_var_15) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_37_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 3) + ax4)]) * 9.674440e+00f)) + -1.000000e+02f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 195) + cse_var_16) + cse_var_15) + ax4)] = (((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 100)) * 1.033652e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_34_let = (&(global_const_workspace_148_var[2756544]));
  void* fused_constant_51_let = (&(global_const_workspace_148_var[995328]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 64; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_149_var[640]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_149_var[656]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 40; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[((ic_outer * 4) + ic_inner)] * ((float*)fused_constant_51_let)[((((ax0_ax1_fused_ax2_outer_fused * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
      }
    }
    for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
      ((float*)conv2d_NCHWc_let)[oc_block] = ((float*)conv2d_NCHWc_global_let)[oc_block];
    }
    for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
      int32_t cse_var_1 = ((ax0_ax1_fused_ax2_outer_fused * 4) + ax4);
      float v_ = ((float*)conv2d_NCHWc_let)[ax4] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_34_let)[cse_var_1];
      float v__1 = roundf((((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f)) * 9.581297e+01f)) + -1.280000e+02f;
      float v__2 = (v__1) < (1.270000e+02f) ? (v__1) : (1.270000e+02f);
      T_cast[cse_var_1] = ((int8_t)((v__2) > (-1.280000e+02f) ? (v__2) : (-1.280000e+02f)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_divide_round_add_clip_cast_1(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_35_let = (&(global_const_workspace_150_var[2755520]));
  void* fused_constant_52_let = (&(global_const_workspace_150_var[831488]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 4160; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_151_var[1081600]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_151_var[1082640]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 40; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 640) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_35_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = roundf((((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f)) * 7.999094e+01f)) + -1.280000e+02f;
          float v__2 = (v__1) < (1.270000e+02f) ? (v__1) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = ((int8_t)((v__2) > (-1.280000e+02f) ? (v__2) : (-1.280000e+02f)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_divide_round_add_clip_cast_cast_subtra_61a9b7ebb32af086_(float* p0, float* T_cast, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_36_let = (&(global_const_workspace_154_var[2754496]));
  void* fused_constant_53_let = (&(global_const_workspace_154_var[0]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 4160; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_155_var[12979200]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_155_var[12980240]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 5; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 52) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_2) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_3) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_4) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_5) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_6) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_7) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_8) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_9) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_10) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_11) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 52) + oc_block_c_init_12) + 48)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 128; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 52);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_53_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 2048) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 52);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_4) + ic_inner) + 4)] * ((float*)fused_constant_53_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 2048) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 52);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_6) + ic_inner) + 8)] * ((float*)fused_constant_53_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 2048) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 52);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_8) + ic_inner) + 12)] * ((float*)fused_constant_53_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 2048) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 52);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_10) + ic_inner) + 16)] * ((float*)fused_constant_53_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 2048) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 52);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_12) + ic_inner) + 20)] * ((float*)fused_constant_53_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 2048) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 52);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_14) + ic_inner) + 24)] * ((float*)fused_constant_53_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 2048) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 52);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_16) + ic_inner) + 28)] * ((float*)fused_constant_53_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 2048) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 52);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_18) + ic_inner) + 32)] * ((float*)fused_constant_53_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 2048) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 52);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_20) + ic_inner) + 36)] * ((float*)fused_constant_53_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 2048) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 52);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_22) + ic_inner) + 40)] * ((float*)fused_constant_53_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 2048) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 52);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_24) + ic_inner) + 44)] * ((float*)fused_constant_53_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 2048) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 52);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 16900) + ((ax0_ax1_fused_ax2_outer_fused % 65) * 260)) + cse_var_26) + ic_inner) + 48)] * ((float*)fused_constant_53_let)[(((((ax0_ax1_fused_ax2_outer_fused / 65) * 2048) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_27 = (((ow_outer * 52) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_27] = ((float*)conv2d_NCHWc_global_let)[cse_var_27];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_29 = (ax3_outer * 52);
          int32_t cse_var_28 = (ax3_inner * 4);
          float v_ = ((float*)conv2d_NCHWc_let)[((cse_var_29 + cse_var_28) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_36_let)[(((ax0_ax1_fused_ax2_outer_fused / 65) * 4) + ax4)];
          float v__1 = roundf((((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f)) * 6.949165e+01f)) + -1.280000e+02f;
          float v__2 = (v__1) < (1.270000e+02f) ? (v__1) : (1.270000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 260) + cse_var_29) + cse_var_28) + ax4)] = ((float)(((int32_t)((int8_t)((v__2) > (-1.280000e+02f) ? (v__2) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f_(float* p0, float* T_cast, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_let = (&(global_const_workspace_6_var[2777568]));
  void* fused_constant_1_let = (&(global_const_workspace_6_var[2770496]));
  void* PaddedInput_let = (&(global_workspace_7_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1036; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 259; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 259);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 1036) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 258)) && (1 <= i3)) && (i3 < 258)) ? p0[((((((i0_i1_fused_i2_fused / 259) * 264196) + (cse_var_2 * 1028)) + cse_var_1) + i4) - 1032)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 1028; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_7_var[8520320]));
    for (int32_t ow_outer = 0; ow_outer < 257; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_7_var[8524432]));
      for (int32_t oci_c_init = 0; oci_c_init < 4; ++oci_c_init) {
        ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
      }
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_4 = (ax1_ax2_fused / 257);
            int32_t cse_var_3 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 268324) + (kh * 1036)) + ((ax1_ax2_fused % 257) * 1036)) + (ow_outer * 4)) + cse_var_3) + oci_c)] * ((float*)fused_constant_1_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
          }
        }
      }
      for (int32_t oci = 0; oci < 4; ++oci) {
        ((float*)DepthwiseConv2d_let)[((ow_outer * 4) + oci)] = ((float*)DepthwiseConv2d_global_let)[oci];
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 257; ++ax3_outer) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_5 = (ax3_outer * 4);
        float v_ = ((float*)DepthwiseConv2d_let)[(cse_var_5 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_let)[(((ax1_ax2_fused / 257) * 4) + ax4)];
        float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
        float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
        float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
        T_cast[(((ax1_ax2_fused * 1028) + cse_var_5) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__1(float* p0, float* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_12_var[2776000]));
  void* fused_constant_4_let = (&(global_const_workspace_12_var[2735680]));
  void* PaddedInput_let = (&(global_workspace_13_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 3108; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 259; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 259);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 1036) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 258)) && (1 <= i3)) && (i3 < 258)) ? p0[((((((i0_i1_fused_i2_fused / 259) * 264196) + (cse_var_2 * 1028)) + cse_var_1) + i4) - 1032)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 1548; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_13_var[16074624]));
    for (int32_t ow_outer = 0; ow_outer < 43; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_13_var[16076688]));
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
            int32_t cse_var_4 = (ax1_ax2_fused / 129);
            int32_t cse_var_3 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 268324) + ((ax1_ax2_fused % 129) * 2072)) + (kh * 1036)) + (ow_outer * 24)) + cse_var_3) + oci_c)] * ((float*)fused_constant_4_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
            int32_t cse_var_7 = (ax1_ax2_fused / 129);
            int32_t cse_var_6 = (kw * 4);
            int32_t cse_var_5 = (oci_c_1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 268324) + ((ax1_ax2_fused % 129) * 2072)) + (kh * 1036)) + (ow_outer * 24)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_4_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
          }
          for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
            int32_t cse_var_10 = (ax1_ax2_fused / 129);
            int32_t cse_var_9 = (kw * 4);
            int32_t cse_var_8 = (oci_c_2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 268324) + ((ax1_ax2_fused % 129) * 2072)) + (kh * 1036)) + (ow_outer * 24)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_4_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 3; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_11 = (ow_inner * 4);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 12) + cse_var_11) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_11 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 43; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_13 = (ax3_outer * 12);
          int32_t cse_var_12 = (ax3_inner * 4);
          float v_ = ((float*)DepthwiseConv2d_let)[((cse_var_13 + cse_var_12) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_1_let)[(((ax1_ax2_fused / 129) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax1_ax2_fused * 516) + cse_var_13) + cse_var_12) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__2(float* p0, float* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_2_let = (&(global_const_workspace_18_var[2775136]));
  void* fused_constant_7_let = (&(global_const_workspace_18_var[2705152]));
  void* PaddedInput_let = (&(global_workspace_19_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2358; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 131; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 131);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 524) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 130)) && (1 <= i3)) && (i3 < 130)) ? p0[((((((i0_i1_fused_i2_fused / 131) * 66564) + (cse_var_2 * 516)) + cse_var_1) + i4) - 520)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 2322; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_19_var[10533744]));
    for (int32_t ow_outer = 0; ow_outer < 43; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_19_var[10535808]));
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
            int32_t cse_var_4 = (ax1_ax2_fused / 129);
            int32_t cse_var_3 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 68644) + (kh * 524)) + ((ax1_ax2_fused % 129) * 524)) + (ow_outer * 12)) + cse_var_3) + oci_c)] * ((float*)fused_constant_7_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
            int32_t cse_var_7 = (ax1_ax2_fused / 129);
            int32_t cse_var_6 = (kw * 4);
            int32_t cse_var_5 = (oci_c_1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 68644) + (kh * 524)) + ((ax1_ax2_fused % 129) * 524)) + (ow_outer * 12)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_7_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
          }
          for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
            int32_t cse_var_10 = (ax1_ax2_fused / 129);
            int32_t cse_var_9 = (kw * 4);
            int32_t cse_var_8 = (oci_c_2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 68644) + (kh * 524)) + ((ax1_ax2_fused % 129) * 524)) + (ow_outer * 12)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_7_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 3; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_11 = (ow_inner * 4);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 12) + cse_var_11) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_11 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 43; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_13 = (ax3_outer * 12);
          int32_t cse_var_12 = (ax3_inner * 4);
          float v_ = ((float*)DepthwiseConv2d_let)[((cse_var_13 + cse_var_12) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_2_let)[(((ax1_ax2_fused / 129) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax1_ax2_fused * 516) + cse_var_13) + cse_var_12) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__3(float* p0, float* T_cast, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_3_let = (&(global_const_workspace_24_var[2774848]));
  void* fused_constant_10_let = (&(global_const_workspace_24_var[2707744]));
  void* PaddedInput_let = (&(global_workspace_25_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 2358; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 131; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 131);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 524) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 130)) && (1 <= i3)) && (i3 < 130)) ? p0[((((((i0_i1_fused_i2_fused / 131) * 66564) + (cse_var_2 * 516)) + cse_var_1) + i4) - 520)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 1170; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_25_var[6159168]));
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_25_var[6160208]));
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
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_4 = (ax1_ax2_fused / 65);
            int32_t cse_var_3 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 68644) + ((ax1_ax2_fused % 65) * 1048)) + (kh * 524)) + (ow_outer * 104)) + cse_var_3) + oci_c)] * ((float*)fused_constant_10_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
            int32_t cse_var_7 = (ax1_ax2_fused / 65);
            int32_t cse_var_6 = (kw * 4);
            int32_t cse_var_5 = (oci_c_1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 68644) + ((ax1_ax2_fused % 65) * 1048)) + (kh * 524)) + (ow_outer * 104)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_10_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
          }
          for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
            int32_t cse_var_10 = (ax1_ax2_fused / 65);
            int32_t cse_var_9 = (kw * 4);
            int32_t cse_var_8 = (oci_c_2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 68644) + ((ax1_ax2_fused % 65) * 1048)) + (kh * 524)) + (ow_outer * 104)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_10_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
          }
          for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
            int32_t cse_var_13 = (ax1_ax2_fused / 65);
            int32_t cse_var_12 = (kw * 4);
            int32_t cse_var_11 = (oci_c_3 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[(((((((cse_var_13 * 68644) + ((ax1_ax2_fused % 65) * 1048)) + (kh * 524)) + (ow_outer * 104)) + cse_var_12) + oci_c_3) + 24)] * ((float*)fused_constant_10_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
          }
          for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
            int32_t cse_var_16 = (ax1_ax2_fused / 65);
            int32_t cse_var_15 = (kw * 4);
            int32_t cse_var_14 = (oci_c_4 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[(((((((cse_var_16 * 68644) + ((ax1_ax2_fused % 65) * 1048)) + (kh * 524)) + (ow_outer * 104)) + cse_var_15) + oci_c_4) + 32)] * ((float*)fused_constant_10_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
          }
          for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
            int32_t cse_var_19 = (ax1_ax2_fused / 65);
            int32_t cse_var_18 = (kw * 4);
            int32_t cse_var_17 = (oci_c_5 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[(((((((cse_var_19 * 68644) + ((ax1_ax2_fused % 65) * 1048)) + (kh * 524)) + (ow_outer * 104)) + cse_var_18) + oci_c_5) + 40)] * ((float*)fused_constant_10_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
          }
          for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
            int32_t cse_var_22 = (ax1_ax2_fused / 65);
            int32_t cse_var_21 = (kw * 4);
            int32_t cse_var_20 = (oci_c_6 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[(((((((cse_var_22 * 68644) + ((ax1_ax2_fused % 65) * 1048)) + (kh * 524)) + (ow_outer * 104)) + cse_var_21) + oci_c_6) + 48)] * ((float*)fused_constant_10_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
          }
          for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
            int32_t cse_var_25 = (ax1_ax2_fused / 65);
            int32_t cse_var_24 = (kw * 4);
            int32_t cse_var_23 = (oci_c_7 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[(((((((cse_var_25 * 68644) + ((ax1_ax2_fused % 65) * 1048)) + (kh * 524)) + (ow_outer * 104)) + cse_var_24) + oci_c_7) + 56)] * ((float*)fused_constant_10_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
          }
          for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
            int32_t cse_var_28 = (ax1_ax2_fused / 65);
            int32_t cse_var_27 = (kw * 4);
            int32_t cse_var_26 = (oci_c_8 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[(((((((cse_var_28 * 68644) + ((ax1_ax2_fused % 65) * 1048)) + (kh * 524)) + (ow_outer * 104)) + cse_var_27) + oci_c_8) + 64)] * ((float*)fused_constant_10_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
          }
          for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
            int32_t cse_var_31 = (ax1_ax2_fused / 65);
            int32_t cse_var_30 = (kw * 4);
            int32_t cse_var_29 = (oci_c_9 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[(((((((cse_var_31 * 68644) + ((ax1_ax2_fused % 65) * 1048)) + (kh * 524)) + (ow_outer * 104)) + cse_var_30) + oci_c_9) + 72)] * ((float*)fused_constant_10_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
          }
          for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
            int32_t cse_var_34 = (ax1_ax2_fused / 65);
            int32_t cse_var_33 = (kw * 4);
            int32_t cse_var_32 = (oci_c_10 + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[(((((((cse_var_34 * 68644) + ((ax1_ax2_fused % 65) * 1048)) + (kh * 524)) + (ow_outer * 104)) + cse_var_33) + oci_c_10) + 80)] * ((float*)fused_constant_10_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
          }
          for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
            int32_t cse_var_37 = (ax1_ax2_fused / 65);
            int32_t cse_var_36 = (kw * 4);
            int32_t cse_var_35 = (oci_c_11 + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[(((((((cse_var_37 * 68644) + ((ax1_ax2_fused % 65) * 1048)) + (kh * 524)) + (ow_outer * 104)) + cse_var_36) + oci_c_11) + 88)] * ((float*)fused_constant_10_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
          }
          for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
            int32_t cse_var_40 = (ax1_ax2_fused / 65);
            int32_t cse_var_39 = (kw * 4);
            int32_t cse_var_38 = (oci_c_12 + 48);
            ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[(((((((cse_var_40 * 68644) + ((ax1_ax2_fused % 65) * 1048)) + (kh * 524)) + (ow_outer * 104)) + cse_var_39) + oci_c_12) + 96)] * ((float*)fused_constant_10_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_41 = (ow_inner * 4);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 52) + cse_var_41) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_41 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_43 = (ax3_outer * 52);
          int32_t cse_var_42 = (ax3_inner * 4);
          float v_ = ((float*)DepthwiseConv2d_let)[((cse_var_43 + cse_var_42) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_3_let)[(((ax1_ax2_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax1_ax2_fused * 260) + cse_var_43) + cse_var_42) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__4(float* p0, float* T_cast, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_4_let = (&(global_const_workspace_30_var[2772352]));
  void* fused_constant_13_let = (&(global_const_workspace_30_var[2701696]));
  void* PaddedInput_let = (&(global_workspace_31_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1608; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 67; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 67);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 268) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 66)) && (1 <= i3)) && (i3 < 66)) ? p0[((((((i0_i1_fused_i2_fused / 67) * 16900) + (cse_var_2 * 260)) + cse_var_1) + i4) - 264)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 1560; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_31_var[3346176]));
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_31_var[3347216]));
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
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_4 = (ax1_ax2_fused / 65);
            int32_t cse_var_3 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_3) + oci_c)] * ((float*)fused_constant_13_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
            int32_t cse_var_7 = (ax1_ax2_fused / 65);
            int32_t cse_var_6 = (kw * 4);
            int32_t cse_var_5 = (oci_c_1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_13_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
          }
          for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
            int32_t cse_var_10 = (ax1_ax2_fused / 65);
            int32_t cse_var_9 = (kw * 4);
            int32_t cse_var_8 = (oci_c_2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_13_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
          }
          for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
            int32_t cse_var_13 = (ax1_ax2_fused / 65);
            int32_t cse_var_12 = (kw * 4);
            int32_t cse_var_11 = (oci_c_3 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[(((((((cse_var_13 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_13_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
          }
          for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
            int32_t cse_var_16 = (ax1_ax2_fused / 65);
            int32_t cse_var_15 = (kw * 4);
            int32_t cse_var_14 = (oci_c_4 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[(((((((cse_var_16 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_13_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
          }
          for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
            int32_t cse_var_19 = (ax1_ax2_fused / 65);
            int32_t cse_var_18 = (kw * 4);
            int32_t cse_var_17 = (oci_c_5 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[(((((((cse_var_19 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_13_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
          }
          for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
            int32_t cse_var_22 = (ax1_ax2_fused / 65);
            int32_t cse_var_21 = (kw * 4);
            int32_t cse_var_20 = (oci_c_6 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[(((((((cse_var_22 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_13_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
          }
          for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
            int32_t cse_var_25 = (ax1_ax2_fused / 65);
            int32_t cse_var_24 = (kw * 4);
            int32_t cse_var_23 = (oci_c_7 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[(((((((cse_var_25 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_13_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
          }
          for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
            int32_t cse_var_28 = (ax1_ax2_fused / 65);
            int32_t cse_var_27 = (kw * 4);
            int32_t cse_var_26 = (oci_c_8 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[(((((((cse_var_28 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_13_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
          }
          for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
            int32_t cse_var_31 = (ax1_ax2_fused / 65);
            int32_t cse_var_30 = (kw * 4);
            int32_t cse_var_29 = (oci_c_9 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[(((((((cse_var_31 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_13_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
          }
          for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
            int32_t cse_var_34 = (ax1_ax2_fused / 65);
            int32_t cse_var_33 = (kw * 4);
            int32_t cse_var_32 = (oci_c_10 + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[(((((((cse_var_34 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_13_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
          }
          for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
            int32_t cse_var_37 = (ax1_ax2_fused / 65);
            int32_t cse_var_36 = (kw * 4);
            int32_t cse_var_35 = (oci_c_11 + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[(((((((cse_var_37 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_13_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
          }
          for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
            int32_t cse_var_40 = (ax1_ax2_fused / 65);
            int32_t cse_var_39 = (kw * 4);
            int32_t cse_var_38 = (oci_c_12 + 48);
            ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[(((((((cse_var_40 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_13_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_41 = (ow_inner * 4);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 52) + cse_var_41) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_41 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_43 = (ax3_outer * 52);
          int32_t cse_var_42 = (ax3_inner * 4);
          float v_ = ((float*)DepthwiseConv2d_let)[((cse_var_43 + cse_var_42) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_4_let)[(((ax1_ax2_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax1_ax2_fused * 260) + cse_var_43) + cse_var_42) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__5(float* p0, float* T_cast, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_5_let = (&(global_const_workspace_36_var[2771968]));
  void* fused_constant_16_let = (&(global_const_workspace_36_var[2698240]));
  void* PaddedInput_let = (&(global_workspace_37_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1608; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 67; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 67);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 268) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 66)) && (1 <= i3)) && (i3 < 66)) ? p0[((((((i0_i1_fused_i2_fused / 67) * 16900) + (cse_var_2 * 260)) + cse_var_1) + i4) - 264)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 1560; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_37_var[3616576]));
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_37_var[3617616]));
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
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_4 = (ax1_ax2_fused / 65);
            int32_t cse_var_3 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_3) + oci_c)] * ((float*)fused_constant_16_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
            int32_t cse_var_7 = (ax1_ax2_fused / 65);
            int32_t cse_var_6 = (kw * 4);
            int32_t cse_var_5 = (oci_c_1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_16_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
          }
          for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
            int32_t cse_var_10 = (ax1_ax2_fused / 65);
            int32_t cse_var_9 = (kw * 4);
            int32_t cse_var_8 = (oci_c_2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_16_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
          }
          for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
            int32_t cse_var_13 = (ax1_ax2_fused / 65);
            int32_t cse_var_12 = (kw * 4);
            int32_t cse_var_11 = (oci_c_3 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[(((((((cse_var_13 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_16_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
          }
          for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
            int32_t cse_var_16 = (ax1_ax2_fused / 65);
            int32_t cse_var_15 = (kw * 4);
            int32_t cse_var_14 = (oci_c_4 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[(((((((cse_var_16 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_16_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
          }
          for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
            int32_t cse_var_19 = (ax1_ax2_fused / 65);
            int32_t cse_var_18 = (kw * 4);
            int32_t cse_var_17 = (oci_c_5 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[(((((((cse_var_19 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_16_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
          }
          for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
            int32_t cse_var_22 = (ax1_ax2_fused / 65);
            int32_t cse_var_21 = (kw * 4);
            int32_t cse_var_20 = (oci_c_6 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[(((((((cse_var_22 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_16_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
          }
          for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
            int32_t cse_var_25 = (ax1_ax2_fused / 65);
            int32_t cse_var_24 = (kw * 4);
            int32_t cse_var_23 = (oci_c_7 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[(((((((cse_var_25 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_16_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
          }
          for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
            int32_t cse_var_28 = (ax1_ax2_fused / 65);
            int32_t cse_var_27 = (kw * 4);
            int32_t cse_var_26 = (oci_c_8 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[(((((((cse_var_28 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_16_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
          }
          for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
            int32_t cse_var_31 = (ax1_ax2_fused / 65);
            int32_t cse_var_30 = (kw * 4);
            int32_t cse_var_29 = (oci_c_9 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[(((((((cse_var_31 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_16_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
          }
          for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
            int32_t cse_var_34 = (ax1_ax2_fused / 65);
            int32_t cse_var_33 = (kw * 4);
            int32_t cse_var_32 = (oci_c_10 + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[(((((((cse_var_34 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_16_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
          }
          for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
            int32_t cse_var_37 = (ax1_ax2_fused / 65);
            int32_t cse_var_36 = (kw * 4);
            int32_t cse_var_35 = (oci_c_11 + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[(((((((cse_var_37 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_16_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
          }
          for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
            int32_t cse_var_40 = (ax1_ax2_fused / 65);
            int32_t cse_var_39 = (kw * 4);
            int32_t cse_var_38 = (oci_c_12 + 48);
            ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[(((((((cse_var_40 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_16_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_41 = (ow_inner * 4);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 52) + cse_var_41) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_41 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_43 = (ax3_outer * 52);
          int32_t cse_var_42 = (ax3_inner * 4);
          float v_ = ((float*)DepthwiseConv2d_let)[((cse_var_43 + cse_var_42) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_5_let)[(((ax1_ax2_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax1_ax2_fused * 260) + cse_var_43) + cse_var_42) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__6(float* p0, float* T_cast, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_6_let = (&(global_const_workspace_42_var[2771584]));
  void* fused_constant_19_let = (&(global_const_workspace_42_var[2694784]));
  void* PaddedInput_let = (&(global_workspace_43_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1608; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 67; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 67);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 268) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 66)) && (1 <= i3)) && (i3 < 66)) ? p0[((((((i0_i1_fused_i2_fused / 67) * 16900) + (cse_var_2 * 260)) + cse_var_1) + i4) - 264)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 1560; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_43_var[3346176]));
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      void* DepthwiseConv2d_global_let = (&(global_workspace_43_var[3347216]));
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
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_4 = (ax1_ax2_fused / 65);
            int32_t cse_var_3 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[((((((cse_var_4 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_3) + oci_c)] * ((float*)fused_constant_19_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
          }
          for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
            int32_t cse_var_7 = (ax1_ax2_fused / 65);
            int32_t cse_var_6 = (kw * 4);
            int32_t cse_var_5 = (oci_c_1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[(((((((cse_var_7 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_19_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
          }
          for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
            int32_t cse_var_10 = (ax1_ax2_fused / 65);
            int32_t cse_var_9 = (kw * 4);
            int32_t cse_var_8 = (oci_c_2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[(((((((cse_var_10 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_19_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
          }
          for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
            int32_t cse_var_13 = (ax1_ax2_fused / 65);
            int32_t cse_var_12 = (kw * 4);
            int32_t cse_var_11 = (oci_c_3 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[(((((((cse_var_13 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_19_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
          }
          for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
            int32_t cse_var_16 = (ax1_ax2_fused / 65);
            int32_t cse_var_15 = (kw * 4);
            int32_t cse_var_14 = (oci_c_4 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[(((((((cse_var_16 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_19_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
          }
          for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
            int32_t cse_var_19 = (ax1_ax2_fused / 65);
            int32_t cse_var_18 = (kw * 4);
            int32_t cse_var_17 = (oci_c_5 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[(((((((cse_var_19 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_19_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
          }
          for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
            int32_t cse_var_22 = (ax1_ax2_fused / 65);
            int32_t cse_var_21 = (kw * 4);
            int32_t cse_var_20 = (oci_c_6 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[(((((((cse_var_22 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_19_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
          }
          for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
            int32_t cse_var_25 = (ax1_ax2_fused / 65);
            int32_t cse_var_24 = (kw * 4);
            int32_t cse_var_23 = (oci_c_7 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[(((((((cse_var_25 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_19_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
          }
          for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
            int32_t cse_var_28 = (ax1_ax2_fused / 65);
            int32_t cse_var_27 = (kw * 4);
            int32_t cse_var_26 = (oci_c_8 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[(((((((cse_var_28 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_19_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
          }
          for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
            int32_t cse_var_31 = (ax1_ax2_fused / 65);
            int32_t cse_var_30 = (kw * 4);
            int32_t cse_var_29 = (oci_c_9 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[(((((((cse_var_31 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_19_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
          }
          for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
            int32_t cse_var_34 = (ax1_ax2_fused / 65);
            int32_t cse_var_33 = (kw * 4);
            int32_t cse_var_32 = (oci_c_10 + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[(((((((cse_var_34 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_19_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
          }
          for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
            int32_t cse_var_37 = (ax1_ax2_fused / 65);
            int32_t cse_var_36 = (kw * 4);
            int32_t cse_var_35 = (oci_c_11 + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[(((((((cse_var_37 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_19_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
          }
          for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
            int32_t cse_var_40 = (ax1_ax2_fused / 65);
            int32_t cse_var_39 = (kw * 4);
            int32_t cse_var_38 = (oci_c_12 + 48);
            ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[(((((((cse_var_40 * 17956) + (kh * 268)) + ((ax1_ax2_fused % 65) * 268)) + (ow_outer * 52)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_19_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 13; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_41 = (ow_inner * 4);
          ((float*)DepthwiseConv2d_let)[(((ow_outer * 52) + cse_var_41) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_41 + oci)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 13; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_43 = (ax3_outer * 52);
          int32_t cse_var_42 = (ax3_inner * 4);
          float v_ = ((float*)DepthwiseConv2d_let)[((cse_var_43 + cse_var_42) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_6_let)[(((ax1_ax2_fused / 65) * 4) + ax4)];
          float v__1 = (v_) < (6.000000e+00f) ? (v_) : (6.000000e+00f);
          float v__2 = roundf((((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)) * 4.250000e+01f)) + -1.280000e+02f;
          float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
          T_cast[((((ax1_ax2_fused * 260) + cse_var_43) + cse_var_42) + ax4)] = ((float)(((int32_t)((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)))) + 128));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_7_let = (&(global_const_workspace_50_var[2759104]));
  void* fused_constant_22_let = (&(global_const_workspace_50_var[2642176]));
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 1584; ++ax1_ax2_fused) {
      void* DepthwiseConv2d_let = (&(global_workspace_51_var[4599552]));
      for (int32_t ow_outer = 0; ow_outer < 3; ++ow_outer) {
        void* DepthwiseConv2d_global_let = (&(global_workspace_51_var[4600080]));
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
        for (int32_t kh = 0; kh < 3; ++kh) {
          for (int32_t kw = 0; kw < 3; ++kw) {
            for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
              int32_t cse_var_2 = (ax1_ax2_fused / 33);
              int32_t cse_var_1 = (kw * 4);
              ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[(((((((ax0 * 235200) + (cse_var_2 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_1) + oci_c)] * ((float*)fused_constant_22_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
            }
            for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
              int32_t cse_var_5 = (ax1_ax2_fused / 33);
              int32_t cse_var_4 = (kw * 4);
              int32_t cse_var_3 = (oci_c_1 + 4);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[((((((((ax0 * 235200) + (cse_var_5 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_4) + oci_c_1) + 4)] * ((float*)fused_constant_22_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
            }
            for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
              int32_t cse_var_8 = (ax1_ax2_fused / 33);
              int32_t cse_var_7 = (kw * 4);
              int32_t cse_var_6 = (oci_c_2 + 8);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[((((((((ax0 * 235200) + (cse_var_8 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_7) + oci_c_2) + 8)] * ((float*)fused_constant_22_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
            }
            for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
              int32_t cse_var_11 = (ax1_ax2_fused / 33);
              int32_t cse_var_10 = (kw * 4);
              int32_t cse_var_9 = (oci_c_3 + 12);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (p0[((((((((ax0 * 235200) + (cse_var_11 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_10) + oci_c_3) + 12)] * ((float*)fused_constant_22_let)[((((cse_var_11 * 36) + (kh * 12)) + cse_var_10) + oci_c_3)]));
            }
            for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
              int32_t cse_var_14 = (ax1_ax2_fused / 33);
              int32_t cse_var_13 = (kw * 4);
              int32_t cse_var_12 = (oci_c_4 + 16);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (p0[((((((((ax0 * 235200) + (cse_var_14 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_13) + oci_c_4) + 16)] * ((float*)fused_constant_22_let)[((((cse_var_14 * 36) + (kh * 12)) + cse_var_13) + oci_c_4)]));
            }
            for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
              int32_t cse_var_17 = (ax1_ax2_fused / 33);
              int32_t cse_var_16 = (kw * 4);
              int32_t cse_var_15 = (oci_c_5 + 20);
              ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (p0[((((((((ax0 * 235200) + (cse_var_17 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_16) + oci_c_5) + 20)] * ((float*)fused_constant_22_let)[((((cse_var_17 * 36) + (kh * 12)) + cse_var_16) + oci_c_5)]));
            }
            for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
              int32_t cse_var_20 = (ax1_ax2_fused / 33);
              int32_t cse_var_19 = (kw * 4);
              int32_t cse_var_18 = (oci_c_6 + 24);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (p0[((((((((ax0 * 235200) + (cse_var_20 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_19) + oci_c_6) + 24)] * ((float*)fused_constant_22_let)[((((cse_var_20 * 36) + (kh * 12)) + cse_var_19) + oci_c_6)]));
            }
            for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
              int32_t cse_var_23 = (ax1_ax2_fused / 33);
              int32_t cse_var_22 = (kw * 4);
              int32_t cse_var_21 = (oci_c_7 + 28);
              ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (p0[((((((((ax0 * 235200) + (cse_var_23 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_22) + oci_c_7) + 28)] * ((float*)fused_constant_22_let)[((((cse_var_23 * 36) + (kh * 12)) + cse_var_22) + oci_c_7)]));
            }
            for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
              int32_t cse_var_26 = (ax1_ax2_fused / 33);
              int32_t cse_var_25 = (kw * 4);
              int32_t cse_var_24 = (oci_c_8 + 32);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (p0[((((((((ax0 * 235200) + (cse_var_26 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_25) + oci_c_8) + 32)] * ((float*)fused_constant_22_let)[((((cse_var_26 * 36) + (kh * 12)) + cse_var_25) + oci_c_8)]));
            }
            for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
              int32_t cse_var_29 = (ax1_ax2_fused / 33);
              int32_t cse_var_28 = (kw * 4);
              int32_t cse_var_27 = (oci_c_9 + 36);
              ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (p0[((((((((ax0 * 235200) + (cse_var_29 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_28) + oci_c_9) + 36)] * ((float*)fused_constant_22_let)[((((cse_var_29 * 36) + (kh * 12)) + cse_var_28) + oci_c_9)]));
            }
            for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
              int32_t cse_var_32 = (ax1_ax2_fused / 33);
              int32_t cse_var_31 = (kw * 4);
              int32_t cse_var_30 = (oci_c_10 + 40);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (p0[((((((((ax0 * 235200) + (cse_var_32 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_31) + oci_c_10) + 40)] * ((float*)fused_constant_22_let)[((((cse_var_32 * 36) + (kh * 12)) + cse_var_31) + oci_c_10)]));
            }
          }
        }
        for (int32_t ow_inner = 0; ow_inner < 11; ++ow_inner) {
          for (int32_t oci = 0; oci < 4; ++oci) {
            int32_t cse_var_33 = (ow_inner * 4);
            ((float*)DepthwiseConv2d_let)[(((ow_outer * 44) + cse_var_33) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_33 + oci)];
          }
        }
      }
      for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 11; ++ax3_inner) {
          for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
            int32_t cse_var_35 = (ax3_outer * 44);
            int32_t cse_var_34 = (ax3_inner * 4);
            float v_ = roundf(((((float*)DepthwiseConv2d_let)[((cse_var_35 + cse_var_34) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_7_let)[(((ax1_ax2_fused / 33) * 4) + ax4)]) * 5.017051e+00f)) + 2.000000e+00f;
            float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
            T_cast[(((((ax0 * 209088) + (ax1_ax2_fused * 132)) + cse_var_35) + cse_var_34) + ax4)] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_1(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_8_let = (&(global_const_workspace_58_var[2758336]));
  void* fused_constant_25_let = (&(global_const_workspace_58_var[2635264]));
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 1584; ++ax1_ax2_fused) {
      void* DepthwiseConv2d_let = (&(global_workspace_59_var[4599552]));
      for (int32_t ow_outer = 0; ow_outer < 3; ++ow_outer) {
        void* DepthwiseConv2d_global_let = (&(global_workspace_59_var[4600080]));
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
        for (int32_t kh = 0; kh < 3; ++kh) {
          for (int32_t kw = 0; kw < 3; ++kw) {
            for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
              int32_t cse_var_2 = (ax1_ax2_fused / 33);
              int32_t cse_var_1 = (kw * 4);
              ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[(((((((ax0 * 235200) + (cse_var_2 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_1) + oci_c)] * ((float*)fused_constant_25_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
            }
            for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
              int32_t cse_var_5 = (ax1_ax2_fused / 33);
              int32_t cse_var_4 = (kw * 4);
              int32_t cse_var_3 = (oci_c_1 + 4);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[((((((((ax0 * 235200) + (cse_var_5 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_4) + oci_c_1) + 4)] * ((float*)fused_constant_25_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
            }
            for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
              int32_t cse_var_8 = (ax1_ax2_fused / 33);
              int32_t cse_var_7 = (kw * 4);
              int32_t cse_var_6 = (oci_c_2 + 8);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[((((((((ax0 * 235200) + (cse_var_8 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_7) + oci_c_2) + 8)] * ((float*)fused_constant_25_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
            }
            for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
              int32_t cse_var_11 = (ax1_ax2_fused / 33);
              int32_t cse_var_10 = (kw * 4);
              int32_t cse_var_9 = (oci_c_3 + 12);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (p0[((((((((ax0 * 235200) + (cse_var_11 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_10) + oci_c_3) + 12)] * ((float*)fused_constant_25_let)[((((cse_var_11 * 36) + (kh * 12)) + cse_var_10) + oci_c_3)]));
            }
            for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
              int32_t cse_var_14 = (ax1_ax2_fused / 33);
              int32_t cse_var_13 = (kw * 4);
              int32_t cse_var_12 = (oci_c_4 + 16);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (p0[((((((((ax0 * 235200) + (cse_var_14 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_13) + oci_c_4) + 16)] * ((float*)fused_constant_25_let)[((((cse_var_14 * 36) + (kh * 12)) + cse_var_13) + oci_c_4)]));
            }
            for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
              int32_t cse_var_17 = (ax1_ax2_fused / 33);
              int32_t cse_var_16 = (kw * 4);
              int32_t cse_var_15 = (oci_c_5 + 20);
              ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (p0[((((((((ax0 * 235200) + (cse_var_17 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_16) + oci_c_5) + 20)] * ((float*)fused_constant_25_let)[((((cse_var_17 * 36) + (kh * 12)) + cse_var_16) + oci_c_5)]));
            }
            for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
              int32_t cse_var_20 = (ax1_ax2_fused / 33);
              int32_t cse_var_19 = (kw * 4);
              int32_t cse_var_18 = (oci_c_6 + 24);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (p0[((((((((ax0 * 235200) + (cse_var_20 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_19) + oci_c_6) + 24)] * ((float*)fused_constant_25_let)[((((cse_var_20 * 36) + (kh * 12)) + cse_var_19) + oci_c_6)]));
            }
            for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
              int32_t cse_var_23 = (ax1_ax2_fused / 33);
              int32_t cse_var_22 = (kw * 4);
              int32_t cse_var_21 = (oci_c_7 + 28);
              ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (p0[((((((((ax0 * 235200) + (cse_var_23 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_22) + oci_c_7) + 28)] * ((float*)fused_constant_25_let)[((((cse_var_23 * 36) + (kh * 12)) + cse_var_22) + oci_c_7)]));
            }
            for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
              int32_t cse_var_26 = (ax1_ax2_fused / 33);
              int32_t cse_var_25 = (kw * 4);
              int32_t cse_var_24 = (oci_c_8 + 32);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (p0[((((((((ax0 * 235200) + (cse_var_26 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_25) + oci_c_8) + 32)] * ((float*)fused_constant_25_let)[((((cse_var_26 * 36) + (kh * 12)) + cse_var_25) + oci_c_8)]));
            }
            for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
              int32_t cse_var_29 = (ax1_ax2_fused / 33);
              int32_t cse_var_28 = (kw * 4);
              int32_t cse_var_27 = (oci_c_9 + 36);
              ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (p0[((((((((ax0 * 235200) + (cse_var_29 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_28) + oci_c_9) + 36)] * ((float*)fused_constant_25_let)[((((cse_var_29 * 36) + (kh * 12)) + cse_var_28) + oci_c_9)]));
            }
            for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
              int32_t cse_var_32 = (ax1_ax2_fused / 33);
              int32_t cse_var_31 = (kw * 4);
              int32_t cse_var_30 = (oci_c_10 + 40);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (p0[((((((((ax0 * 235200) + (cse_var_32 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_31) + oci_c_10) + 40)] * ((float*)fused_constant_25_let)[((((cse_var_32 * 36) + (kh * 12)) + cse_var_31) + oci_c_10)]));
            }
          }
        }
        for (int32_t ow_inner = 0; ow_inner < 11; ++ow_inner) {
          for (int32_t oci = 0; oci < 4; ++oci) {
            int32_t cse_var_33 = (ow_inner * 4);
            ((float*)DepthwiseConv2d_let)[(((ow_outer * 44) + cse_var_33) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_33 + oci)];
          }
        }
      }
      for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 11; ++ax3_inner) {
          for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
            int32_t cse_var_35 = (ax3_outer * 44);
            int32_t cse_var_34 = (ax3_inner * 4);
            float v_ = roundf(((((float*)DepthwiseConv2d_let)[((cse_var_35 + cse_var_34) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_8_let)[(((ax1_ax2_fused / 33) * 4) + ax4)]) * 7.568773e+00f)) + 9.000000e+00f;
            float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
            T_cast[(((((ax0 * 209088) + (ax1_ax2_fused * 132)) + cse_var_35) + cse_var_34) + ax4)] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_2(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_9_let = (&(global_const_workspace_66_var[2757568]));
  void* fused_constant_28_let = (&(global_const_workspace_66_var[2628352]));
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 1584; ++ax1_ax2_fused) {
      void* DepthwiseConv2d_let = (&(global_workspace_67_var[4599552]));
      for (int32_t ow_outer = 0; ow_outer < 3; ++ow_outer) {
        void* DepthwiseConv2d_global_let = (&(global_workspace_67_var[4600080]));
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
        for (int32_t kh = 0; kh < 3; ++kh) {
          for (int32_t kw = 0; kw < 3; ++kw) {
            for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
              int32_t cse_var_2 = (ax1_ax2_fused / 33);
              int32_t cse_var_1 = (kw * 4);
              ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[(((((((ax0 * 235200) + (cse_var_2 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_1) + oci_c)] * ((float*)fused_constant_28_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
            }
            for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
              int32_t cse_var_5 = (ax1_ax2_fused / 33);
              int32_t cse_var_4 = (kw * 4);
              int32_t cse_var_3 = (oci_c_1 + 4);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[((((((((ax0 * 235200) + (cse_var_5 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_4) + oci_c_1) + 4)] * ((float*)fused_constant_28_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
            }
            for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
              int32_t cse_var_8 = (ax1_ax2_fused / 33);
              int32_t cse_var_7 = (kw * 4);
              int32_t cse_var_6 = (oci_c_2 + 8);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[((((((((ax0 * 235200) + (cse_var_8 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_7) + oci_c_2) + 8)] * ((float*)fused_constant_28_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
            }
            for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
              int32_t cse_var_11 = (ax1_ax2_fused / 33);
              int32_t cse_var_10 = (kw * 4);
              int32_t cse_var_9 = (oci_c_3 + 12);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (p0[((((((((ax0 * 235200) + (cse_var_11 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_10) + oci_c_3) + 12)] * ((float*)fused_constant_28_let)[((((cse_var_11 * 36) + (kh * 12)) + cse_var_10) + oci_c_3)]));
            }
            for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
              int32_t cse_var_14 = (ax1_ax2_fused / 33);
              int32_t cse_var_13 = (kw * 4);
              int32_t cse_var_12 = (oci_c_4 + 16);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (p0[((((((((ax0 * 235200) + (cse_var_14 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_13) + oci_c_4) + 16)] * ((float*)fused_constant_28_let)[((((cse_var_14 * 36) + (kh * 12)) + cse_var_13) + oci_c_4)]));
            }
            for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
              int32_t cse_var_17 = (ax1_ax2_fused / 33);
              int32_t cse_var_16 = (kw * 4);
              int32_t cse_var_15 = (oci_c_5 + 20);
              ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (p0[((((((((ax0 * 235200) + (cse_var_17 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_16) + oci_c_5) + 20)] * ((float*)fused_constant_28_let)[((((cse_var_17 * 36) + (kh * 12)) + cse_var_16) + oci_c_5)]));
            }
            for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
              int32_t cse_var_20 = (ax1_ax2_fused / 33);
              int32_t cse_var_19 = (kw * 4);
              int32_t cse_var_18 = (oci_c_6 + 24);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (p0[((((((((ax0 * 235200) + (cse_var_20 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_19) + oci_c_6) + 24)] * ((float*)fused_constant_28_let)[((((cse_var_20 * 36) + (kh * 12)) + cse_var_19) + oci_c_6)]));
            }
            for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
              int32_t cse_var_23 = (ax1_ax2_fused / 33);
              int32_t cse_var_22 = (kw * 4);
              int32_t cse_var_21 = (oci_c_7 + 28);
              ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (p0[((((((((ax0 * 235200) + (cse_var_23 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_22) + oci_c_7) + 28)] * ((float*)fused_constant_28_let)[((((cse_var_23 * 36) + (kh * 12)) + cse_var_22) + oci_c_7)]));
            }
            for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
              int32_t cse_var_26 = (ax1_ax2_fused / 33);
              int32_t cse_var_25 = (kw * 4);
              int32_t cse_var_24 = (oci_c_8 + 32);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (p0[((((((((ax0 * 235200) + (cse_var_26 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_25) + oci_c_8) + 32)] * ((float*)fused_constant_28_let)[((((cse_var_26 * 36) + (kh * 12)) + cse_var_25) + oci_c_8)]));
            }
            for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
              int32_t cse_var_29 = (ax1_ax2_fused / 33);
              int32_t cse_var_28 = (kw * 4);
              int32_t cse_var_27 = (oci_c_9 + 36);
              ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (p0[((((((((ax0 * 235200) + (cse_var_29 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_28) + oci_c_9) + 36)] * ((float*)fused_constant_28_let)[((((cse_var_29 * 36) + (kh * 12)) + cse_var_28) + oci_c_9)]));
            }
            for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
              int32_t cse_var_32 = (ax1_ax2_fused / 33);
              int32_t cse_var_31 = (kw * 4);
              int32_t cse_var_30 = (oci_c_10 + 40);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (p0[((((((((ax0 * 235200) + (cse_var_32 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_31) + oci_c_10) + 40)] * ((float*)fused_constant_28_let)[((((cse_var_32 * 36) + (kh * 12)) + cse_var_31) + oci_c_10)]));
            }
          }
        }
        for (int32_t ow_inner = 0; ow_inner < 11; ++ow_inner) {
          for (int32_t oci = 0; oci < 4; ++oci) {
            int32_t cse_var_33 = (ow_inner * 4);
            ((float*)DepthwiseConv2d_let)[(((ow_outer * 44) + cse_var_33) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_33 + oci)];
          }
        }
      }
      for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 11; ++ax3_inner) {
          for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
            int32_t cse_var_35 = (ax3_outer * 44);
            int32_t cse_var_34 = (ax3_inner * 4);
            float v_ = roundf(((((float*)DepthwiseConv2d_let)[((cse_var_35 + cse_var_34) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_9_let)[(((ax1_ax2_fused / 33) * 4) + ax4)]) * 8.896692e+00f)) + 1.100000e+01f;
            float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
            T_cast[(((((ax0 * 209088) + (ax1_ax2_fused * 132)) + cse_var_35) + cse_var_34) + ax4)] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_3(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_11_let = (&(global_const_workspace_86_var[2742976]));
  void* fused_constant_34_let = (&(global_const_workspace_86_var[2611072]));
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 2376; ++ax1_ax2_fused) {
      void* DepthwiseConv2d_let = (&(global_workspace_87_var[6899328]));
      for (int32_t ow_outer = 0; ow_outer < 3; ++ow_outer) {
        void* DepthwiseConv2d_global_let = (&(global_workspace_87_var[6899856]));
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
        for (int32_t kh = 0; kh < 3; ++kh) {
          for (int32_t kw = 0; kw < 3; ++kw) {
            for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
              int32_t cse_var_2 = (ax1_ax2_fused / 33);
              int32_t cse_var_1 = (kw * 4);
              ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[(((((((ax0 * 352800) + (cse_var_2 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_1) + oci_c)] * ((float*)fused_constant_34_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
            }
            for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
              int32_t cse_var_5 = (ax1_ax2_fused / 33);
              int32_t cse_var_4 = (kw * 4);
              int32_t cse_var_3 = (oci_c_1 + 4);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[((((((((ax0 * 352800) + (cse_var_5 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_4) + oci_c_1) + 4)] * ((float*)fused_constant_34_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
            }
            for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
              int32_t cse_var_8 = (ax1_ax2_fused / 33);
              int32_t cse_var_7 = (kw * 4);
              int32_t cse_var_6 = (oci_c_2 + 8);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[((((((((ax0 * 352800) + (cse_var_8 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_7) + oci_c_2) + 8)] * ((float*)fused_constant_34_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
            }
            for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
              int32_t cse_var_11 = (ax1_ax2_fused / 33);
              int32_t cse_var_10 = (kw * 4);
              int32_t cse_var_9 = (oci_c_3 + 12);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (p0[((((((((ax0 * 352800) + (cse_var_11 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_10) + oci_c_3) + 12)] * ((float*)fused_constant_34_let)[((((cse_var_11 * 36) + (kh * 12)) + cse_var_10) + oci_c_3)]));
            }
            for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
              int32_t cse_var_14 = (ax1_ax2_fused / 33);
              int32_t cse_var_13 = (kw * 4);
              int32_t cse_var_12 = (oci_c_4 + 16);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (p0[((((((((ax0 * 352800) + (cse_var_14 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_13) + oci_c_4) + 16)] * ((float*)fused_constant_34_let)[((((cse_var_14 * 36) + (kh * 12)) + cse_var_13) + oci_c_4)]));
            }
            for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
              int32_t cse_var_17 = (ax1_ax2_fused / 33);
              int32_t cse_var_16 = (kw * 4);
              int32_t cse_var_15 = (oci_c_5 + 20);
              ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (p0[((((((((ax0 * 352800) + (cse_var_17 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_16) + oci_c_5) + 20)] * ((float*)fused_constant_34_let)[((((cse_var_17 * 36) + (kh * 12)) + cse_var_16) + oci_c_5)]));
            }
            for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
              int32_t cse_var_20 = (ax1_ax2_fused / 33);
              int32_t cse_var_19 = (kw * 4);
              int32_t cse_var_18 = (oci_c_6 + 24);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (p0[((((((((ax0 * 352800) + (cse_var_20 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_19) + oci_c_6) + 24)] * ((float*)fused_constant_34_let)[((((cse_var_20 * 36) + (kh * 12)) + cse_var_19) + oci_c_6)]));
            }
            for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
              int32_t cse_var_23 = (ax1_ax2_fused / 33);
              int32_t cse_var_22 = (kw * 4);
              int32_t cse_var_21 = (oci_c_7 + 28);
              ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (p0[((((((((ax0 * 352800) + (cse_var_23 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_22) + oci_c_7) + 28)] * ((float*)fused_constant_34_let)[((((cse_var_23 * 36) + (kh * 12)) + cse_var_22) + oci_c_7)]));
            }
            for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
              int32_t cse_var_26 = (ax1_ax2_fused / 33);
              int32_t cse_var_25 = (kw * 4);
              int32_t cse_var_24 = (oci_c_8 + 32);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (p0[((((((((ax0 * 352800) + (cse_var_26 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_25) + oci_c_8) + 32)] * ((float*)fused_constant_34_let)[((((cse_var_26 * 36) + (kh * 12)) + cse_var_25) + oci_c_8)]));
            }
            for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
              int32_t cse_var_29 = (ax1_ax2_fused / 33);
              int32_t cse_var_28 = (kw * 4);
              int32_t cse_var_27 = (oci_c_9 + 36);
              ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (p0[((((((((ax0 * 352800) + (cse_var_29 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_28) + oci_c_9) + 36)] * ((float*)fused_constant_34_let)[((((cse_var_29 * 36) + (kh * 12)) + cse_var_28) + oci_c_9)]));
            }
            for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
              int32_t cse_var_32 = (ax1_ax2_fused / 33);
              int32_t cse_var_31 = (kw * 4);
              int32_t cse_var_30 = (oci_c_10 + 40);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (p0[((((((((ax0 * 352800) + (cse_var_32 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_31) + oci_c_10) + 40)] * ((float*)fused_constant_34_let)[((((cse_var_32 * 36) + (kh * 12)) + cse_var_31) + oci_c_10)]));
            }
          }
        }
        for (int32_t ow_inner = 0; ow_inner < 11; ++ow_inner) {
          for (int32_t oci = 0; oci < 4; ++oci) {
            int32_t cse_var_33 = (ow_inner * 4);
            ((float*)DepthwiseConv2d_let)[(((ow_outer * 44) + cse_var_33) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_33 + oci)];
          }
        }
      }
      for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 11; ++ax3_inner) {
          for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
            int32_t cse_var_35 = (ax3_outer * 44);
            int32_t cse_var_34 = (ax3_inner * 4);
            float v_ = roundf(((((float*)DepthwiseConv2d_let)[((cse_var_35 + cse_var_34) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_11_let)[(((ax1_ax2_fused / 33) * 4) + ax4)]) * 9.804525e+00f)) + 4.000000e+00f;
            float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
            T_cast[(((((ax0 * 313632) + (ax1_ax2_fused * 132)) + cse_var_35) + cse_var_34) + ax4)] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_4(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_12_let = (&(global_const_workspace_96_var[2741824]));
  void* fused_constant_37_let = (&(global_const_workspace_96_var[2600704]));
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 2376; ++ax1_ax2_fused) {
      void* DepthwiseConv2d_let = (&(global_workspace_97_var[6899328]));
      for (int32_t ow_outer = 0; ow_outer < 3; ++ow_outer) {
        void* DepthwiseConv2d_global_let = (&(global_workspace_97_var[6899856]));
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
        for (int32_t kh = 0; kh < 3; ++kh) {
          for (int32_t kw = 0; kw < 3; ++kw) {
            for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
              int32_t cse_var_2 = (ax1_ax2_fused / 33);
              int32_t cse_var_1 = (kw * 4);
              ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[(((((((ax0 * 352800) + (cse_var_2 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_1) + oci_c)] * ((float*)fused_constant_37_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
            }
            for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
              int32_t cse_var_5 = (ax1_ax2_fused / 33);
              int32_t cse_var_4 = (kw * 4);
              int32_t cse_var_3 = (oci_c_1 + 4);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[((((((((ax0 * 352800) + (cse_var_5 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_4) + oci_c_1) + 4)] * ((float*)fused_constant_37_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
            }
            for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
              int32_t cse_var_8 = (ax1_ax2_fused / 33);
              int32_t cse_var_7 = (kw * 4);
              int32_t cse_var_6 = (oci_c_2 + 8);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[((((((((ax0 * 352800) + (cse_var_8 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_7) + oci_c_2) + 8)] * ((float*)fused_constant_37_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
            }
            for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
              int32_t cse_var_11 = (ax1_ax2_fused / 33);
              int32_t cse_var_10 = (kw * 4);
              int32_t cse_var_9 = (oci_c_3 + 12);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (p0[((((((((ax0 * 352800) + (cse_var_11 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_10) + oci_c_3) + 12)] * ((float*)fused_constant_37_let)[((((cse_var_11 * 36) + (kh * 12)) + cse_var_10) + oci_c_3)]));
            }
            for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
              int32_t cse_var_14 = (ax1_ax2_fused / 33);
              int32_t cse_var_13 = (kw * 4);
              int32_t cse_var_12 = (oci_c_4 + 16);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (p0[((((((((ax0 * 352800) + (cse_var_14 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_13) + oci_c_4) + 16)] * ((float*)fused_constant_37_let)[((((cse_var_14 * 36) + (kh * 12)) + cse_var_13) + oci_c_4)]));
            }
            for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
              int32_t cse_var_17 = (ax1_ax2_fused / 33);
              int32_t cse_var_16 = (kw * 4);
              int32_t cse_var_15 = (oci_c_5 + 20);
              ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (p0[((((((((ax0 * 352800) + (cse_var_17 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_16) + oci_c_5) + 20)] * ((float*)fused_constant_37_let)[((((cse_var_17 * 36) + (kh * 12)) + cse_var_16) + oci_c_5)]));
            }
            for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
              int32_t cse_var_20 = (ax1_ax2_fused / 33);
              int32_t cse_var_19 = (kw * 4);
              int32_t cse_var_18 = (oci_c_6 + 24);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (p0[((((((((ax0 * 352800) + (cse_var_20 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_19) + oci_c_6) + 24)] * ((float*)fused_constant_37_let)[((((cse_var_20 * 36) + (kh * 12)) + cse_var_19) + oci_c_6)]));
            }
            for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
              int32_t cse_var_23 = (ax1_ax2_fused / 33);
              int32_t cse_var_22 = (kw * 4);
              int32_t cse_var_21 = (oci_c_7 + 28);
              ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (p0[((((((((ax0 * 352800) + (cse_var_23 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_22) + oci_c_7) + 28)] * ((float*)fused_constant_37_let)[((((cse_var_23 * 36) + (kh * 12)) + cse_var_22) + oci_c_7)]));
            }
            for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
              int32_t cse_var_26 = (ax1_ax2_fused / 33);
              int32_t cse_var_25 = (kw * 4);
              int32_t cse_var_24 = (oci_c_8 + 32);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (p0[((((((((ax0 * 352800) + (cse_var_26 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_25) + oci_c_8) + 32)] * ((float*)fused_constant_37_let)[((((cse_var_26 * 36) + (kh * 12)) + cse_var_25) + oci_c_8)]));
            }
            for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
              int32_t cse_var_29 = (ax1_ax2_fused / 33);
              int32_t cse_var_28 = (kw * 4);
              int32_t cse_var_27 = (oci_c_9 + 36);
              ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (p0[((((((((ax0 * 352800) + (cse_var_29 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_28) + oci_c_9) + 36)] * ((float*)fused_constant_37_let)[((((cse_var_29 * 36) + (kh * 12)) + cse_var_28) + oci_c_9)]));
            }
            for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
              int32_t cse_var_32 = (ax1_ax2_fused / 33);
              int32_t cse_var_31 = (kw * 4);
              int32_t cse_var_30 = (oci_c_10 + 40);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (p0[((((((((ax0 * 352800) + (cse_var_32 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_31) + oci_c_10) + 40)] * ((float*)fused_constant_37_let)[((((cse_var_32 * 36) + (kh * 12)) + cse_var_31) + oci_c_10)]));
            }
          }
        }
        for (int32_t ow_inner = 0; ow_inner < 11; ++ow_inner) {
          for (int32_t oci = 0; oci < 4; ++oci) {
            int32_t cse_var_33 = (ow_inner * 4);
            ((float*)DepthwiseConv2d_let)[(((ow_outer * 44) + cse_var_33) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_33 + oci)];
          }
        }
      }
      for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 11; ++ax3_inner) {
          for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
            int32_t cse_var_35 = (ax3_outer * 44);
            int32_t cse_var_34 = (ax3_inner * 4);
            float v_ = roundf(((((float*)DepthwiseConv2d_let)[((cse_var_35 + cse_var_34) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_12_let)[(((ax1_ax2_fused / 33) * 4) + ax4)]) * 9.654658e+00f)) + 3.000000e+00f;
            float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
            T_cast[(((((ax0 * 313632) + (ax1_ax2_fused * 132)) + cse_var_35) + cse_var_34) + ax4)] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_5(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_13_let = (&(global_const_workspace_106_var[2740672]));
  void* fused_constant_40_let = (&(global_const_workspace_106_var[2590336]));
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 2376; ++ax1_ax2_fused) {
      void* DepthwiseConv2d_let = (&(global_workspace_107_var[6899328]));
      for (int32_t ow_outer = 0; ow_outer < 3; ++ow_outer) {
        void* DepthwiseConv2d_global_let = (&(global_workspace_107_var[6899856]));
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
        for (int32_t kh = 0; kh < 3; ++kh) {
          for (int32_t kw = 0; kw < 3; ++kw) {
            for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
              int32_t cse_var_2 = (ax1_ax2_fused / 33);
              int32_t cse_var_1 = (kw * 4);
              ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[(((((((ax0 * 352800) + (cse_var_2 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_1) + oci_c)] * ((float*)fused_constant_40_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
            }
            for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
              int32_t cse_var_5 = (ax1_ax2_fused / 33);
              int32_t cse_var_4 = (kw * 4);
              int32_t cse_var_3 = (oci_c_1 + 4);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[((((((((ax0 * 352800) + (cse_var_5 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_4) + oci_c_1) + 4)] * ((float*)fused_constant_40_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
            }
            for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
              int32_t cse_var_8 = (ax1_ax2_fused / 33);
              int32_t cse_var_7 = (kw * 4);
              int32_t cse_var_6 = (oci_c_2 + 8);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[((((((((ax0 * 352800) + (cse_var_8 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_7) + oci_c_2) + 8)] * ((float*)fused_constant_40_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
            }
            for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
              int32_t cse_var_11 = (ax1_ax2_fused / 33);
              int32_t cse_var_10 = (kw * 4);
              int32_t cse_var_9 = (oci_c_3 + 12);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (p0[((((((((ax0 * 352800) + (cse_var_11 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_10) + oci_c_3) + 12)] * ((float*)fused_constant_40_let)[((((cse_var_11 * 36) + (kh * 12)) + cse_var_10) + oci_c_3)]));
            }
            for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
              int32_t cse_var_14 = (ax1_ax2_fused / 33);
              int32_t cse_var_13 = (kw * 4);
              int32_t cse_var_12 = (oci_c_4 + 16);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (p0[((((((((ax0 * 352800) + (cse_var_14 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_13) + oci_c_4) + 16)] * ((float*)fused_constant_40_let)[((((cse_var_14 * 36) + (kh * 12)) + cse_var_13) + oci_c_4)]));
            }
            for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
              int32_t cse_var_17 = (ax1_ax2_fused / 33);
              int32_t cse_var_16 = (kw * 4);
              int32_t cse_var_15 = (oci_c_5 + 20);
              ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (p0[((((((((ax0 * 352800) + (cse_var_17 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_16) + oci_c_5) + 20)] * ((float*)fused_constant_40_let)[((((cse_var_17 * 36) + (kh * 12)) + cse_var_16) + oci_c_5)]));
            }
            for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
              int32_t cse_var_20 = (ax1_ax2_fused / 33);
              int32_t cse_var_19 = (kw * 4);
              int32_t cse_var_18 = (oci_c_6 + 24);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (p0[((((((((ax0 * 352800) + (cse_var_20 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_19) + oci_c_6) + 24)] * ((float*)fused_constant_40_let)[((((cse_var_20 * 36) + (kh * 12)) + cse_var_19) + oci_c_6)]));
            }
            for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
              int32_t cse_var_23 = (ax1_ax2_fused / 33);
              int32_t cse_var_22 = (kw * 4);
              int32_t cse_var_21 = (oci_c_7 + 28);
              ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (p0[((((((((ax0 * 352800) + (cse_var_23 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_22) + oci_c_7) + 28)] * ((float*)fused_constant_40_let)[((((cse_var_23 * 36) + (kh * 12)) + cse_var_22) + oci_c_7)]));
            }
            for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
              int32_t cse_var_26 = (ax1_ax2_fused / 33);
              int32_t cse_var_25 = (kw * 4);
              int32_t cse_var_24 = (oci_c_8 + 32);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (p0[((((((((ax0 * 352800) + (cse_var_26 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_25) + oci_c_8) + 32)] * ((float*)fused_constant_40_let)[((((cse_var_26 * 36) + (kh * 12)) + cse_var_25) + oci_c_8)]));
            }
            for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
              int32_t cse_var_29 = (ax1_ax2_fused / 33);
              int32_t cse_var_28 = (kw * 4);
              int32_t cse_var_27 = (oci_c_9 + 36);
              ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (p0[((((((((ax0 * 352800) + (cse_var_29 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_28) + oci_c_9) + 36)] * ((float*)fused_constant_40_let)[((((cse_var_29 * 36) + (kh * 12)) + cse_var_28) + oci_c_9)]));
            }
            for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
              int32_t cse_var_32 = (ax1_ax2_fused / 33);
              int32_t cse_var_31 = (kw * 4);
              int32_t cse_var_30 = (oci_c_10 + 40);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (p0[((((((((ax0 * 352800) + (cse_var_32 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_31) + oci_c_10) + 40)] * ((float*)fused_constant_40_let)[((((cse_var_32 * 36) + (kh * 12)) + cse_var_31) + oci_c_10)]));
            }
          }
        }
        for (int32_t ow_inner = 0; ow_inner < 11; ++ow_inner) {
          for (int32_t oci = 0; oci < 4; ++oci) {
            int32_t cse_var_33 = (ow_inner * 4);
            ((float*)DepthwiseConv2d_let)[(((ow_outer * 44) + cse_var_33) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_33 + oci)];
          }
        }
      }
      for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 11; ++ax3_inner) {
          for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
            int32_t cse_var_35 = (ax3_outer * 44);
            int32_t cse_var_34 = (ax3_inner * 4);
            float v_ = roundf(((((float*)DepthwiseConv2d_let)[((cse_var_35 + cse_var_34) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_13_let)[(((ax1_ax2_fused / 33) * 4) + ax4)]) * 5.097023e+00f)) + -1.000000e+00f;
            float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
            T_cast[(((((ax0 * 313632) + (ax1_ax2_fused * 132)) + cse_var_35) + cse_var_34) + ax4)] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_6(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_14_let = (&(global_const_workspace_116_var[2716480]));
  void* fused_constant_43_let = (&(global_const_workspace_116_var[2560768]));
  for (int32_t ax0 = 0; ax0 < 16; ++ax0) {
    for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 2040; ++ax1_ax2_fused) {
      void* DepthwiseConv2d_let = (&(global_workspace_117_var[13309440]));
      void* DepthwiseConv2d_global_let = (&(global_workspace_117_var[13309712]));
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
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_2 = (ax1_ax2_fused / 17);
            int32_t cse_var_1 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[((((((ax0 * 173280) + (cse_var_2 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_1) + oci_c)] * ((float*)fused_constant_43_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
          }
          for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
            int32_t cse_var_5 = (ax1_ax2_fused / 17);
            int32_t cse_var_4 = (kw * 4);
            int32_t cse_var_3 = (oci_c_1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[(((((((ax0 * 173280) + (cse_var_5 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_4) + oci_c_1) + 4)] * ((float*)fused_constant_43_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
          }
          for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
            int32_t cse_var_8 = (ax1_ax2_fused / 17);
            int32_t cse_var_7 = (kw * 4);
            int32_t cse_var_6 = (oci_c_2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[(((((((ax0 * 173280) + (cse_var_8 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_7) + oci_c_2) + 8)] * ((float*)fused_constant_43_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
          }
          for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
            int32_t cse_var_11 = (ax1_ax2_fused / 17);
            int32_t cse_var_10 = (kw * 4);
            int32_t cse_var_9 = (oci_c_3 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (p0[(((((((ax0 * 173280) + (cse_var_11 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_10) + oci_c_3) + 12)] * ((float*)fused_constant_43_let)[((((cse_var_11 * 36) + (kh * 12)) + cse_var_10) + oci_c_3)]));
          }
          for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
            int32_t cse_var_14 = (ax1_ax2_fused / 17);
            int32_t cse_var_13 = (kw * 4);
            int32_t cse_var_12 = (oci_c_4 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (p0[(((((((ax0 * 173280) + (cse_var_14 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_13) + oci_c_4) + 16)] * ((float*)fused_constant_43_let)[((((cse_var_14 * 36) + (kh * 12)) + cse_var_13) + oci_c_4)]));
          }
          for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
            int32_t cse_var_17 = (ax1_ax2_fused / 17);
            int32_t cse_var_16 = (kw * 4);
            int32_t cse_var_15 = (oci_c_5 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (p0[(((((((ax0 * 173280) + (cse_var_17 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_16) + oci_c_5) + 20)] * ((float*)fused_constant_43_let)[((((cse_var_17 * 36) + (kh * 12)) + cse_var_16) + oci_c_5)]));
          }
          for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
            int32_t cse_var_20 = (ax1_ax2_fused / 17);
            int32_t cse_var_19 = (kw * 4);
            int32_t cse_var_18 = (oci_c_6 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (p0[(((((((ax0 * 173280) + (cse_var_20 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_19) + oci_c_6) + 24)] * ((float*)fused_constant_43_let)[((((cse_var_20 * 36) + (kh * 12)) + cse_var_19) + oci_c_6)]));
          }
          for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
            int32_t cse_var_23 = (ax1_ax2_fused / 17);
            int32_t cse_var_22 = (kw * 4);
            int32_t cse_var_21 = (oci_c_7 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (p0[(((((((ax0 * 173280) + (cse_var_23 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_22) + oci_c_7) + 28)] * ((float*)fused_constant_43_let)[((((cse_var_23 * 36) + (kh * 12)) + cse_var_22) + oci_c_7)]));
          }
          for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
            int32_t cse_var_26 = (ax1_ax2_fused / 17);
            int32_t cse_var_25 = (kw * 4);
            int32_t cse_var_24 = (oci_c_8 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (p0[(((((((ax0 * 173280) + (cse_var_26 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_25) + oci_c_8) + 32)] * ((float*)fused_constant_43_let)[((((cse_var_26 * 36) + (kh * 12)) + cse_var_25) + oci_c_8)]));
          }
          for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
            int32_t cse_var_29 = (ax1_ax2_fused / 17);
            int32_t cse_var_28 = (kw * 4);
            int32_t cse_var_27 = (oci_c_9 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (p0[(((((((ax0 * 173280) + (cse_var_29 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_28) + oci_c_9) + 36)] * ((float*)fused_constant_43_let)[((((cse_var_29 * 36) + (kh * 12)) + cse_var_28) + oci_c_9)]));
          }
          for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
            int32_t cse_var_32 = (ax1_ax2_fused / 17);
            int32_t cse_var_31 = (kw * 4);
            int32_t cse_var_30 = (oci_c_10 + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (p0[(((((((ax0 * 173280) + (cse_var_32 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_31) + oci_c_10) + 40)] * ((float*)fused_constant_43_let)[((((cse_var_32 * 36) + (kh * 12)) + cse_var_31) + oci_c_10)]));
          }
          for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
            int32_t cse_var_35 = (ax1_ax2_fused / 17);
            int32_t cse_var_34 = (kw * 4);
            int32_t cse_var_33 = (oci_c_11 + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_33] = (((float*)DepthwiseConv2d_global_let)[cse_var_33] + (p0[(((((((ax0 * 173280) + (cse_var_35 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_34) + oci_c_11) + 44)] * ((float*)fused_constant_43_let)[((((cse_var_35 * 36) + (kh * 12)) + cse_var_34) + oci_c_11)]));
          }
          for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
            int32_t cse_var_38 = (ax1_ax2_fused / 17);
            int32_t cse_var_37 = (kw * 4);
            int32_t cse_var_36 = (oci_c_12 + 48);
            ((float*)DepthwiseConv2d_global_let)[cse_var_36] = (((float*)DepthwiseConv2d_global_let)[cse_var_36] + (p0[(((((((ax0 * 173280) + (cse_var_38 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_37) + oci_c_12) + 48)] * ((float*)fused_constant_43_let)[((((cse_var_38 * 36) + (kh * 12)) + cse_var_37) + oci_c_12)]));
          }
          for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
            int32_t cse_var_41 = (ax1_ax2_fused / 17);
            int32_t cse_var_40 = (kw * 4);
            int32_t cse_var_39 = (oci_c_13 + 52);
            ((float*)DepthwiseConv2d_global_let)[cse_var_39] = (((float*)DepthwiseConv2d_global_let)[cse_var_39] + (p0[(((((((ax0 * 173280) + (cse_var_41 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_40) + oci_c_13) + 52)] * ((float*)fused_constant_43_let)[((((cse_var_41 * 36) + (kh * 12)) + cse_var_40) + oci_c_13)]));
          }
          for (int32_t oci_c_14 = 0; oci_c_14 < 4; ++oci_c_14) {
            int32_t cse_var_44 = (ax1_ax2_fused / 17);
            int32_t cse_var_43 = (kw * 4);
            int32_t cse_var_42 = (oci_c_14 + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (p0[(((((((ax0 * 173280) + (cse_var_44 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_43) + oci_c_14) + 56)] * ((float*)fused_constant_43_let)[((((cse_var_44 * 36) + (kh * 12)) + cse_var_43) + oci_c_14)]));
          }
          for (int32_t oci_c_15 = 0; oci_c_15 < 4; ++oci_c_15) {
            int32_t cse_var_47 = (ax1_ax2_fused / 17);
            int32_t cse_var_46 = (kw * 4);
            int32_t cse_var_45 = (oci_c_15 + 60);
            ((float*)DepthwiseConv2d_global_let)[cse_var_45] = (((float*)DepthwiseConv2d_global_let)[cse_var_45] + (p0[(((((((ax0 * 173280) + (cse_var_47 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_46) + oci_c_15) + 60)] * ((float*)fused_constant_43_let)[((((cse_var_47 * 36) + (kh * 12)) + cse_var_46) + oci_c_15)]));
          }
          for (int32_t oci_c_16 = 0; oci_c_16 < 4; ++oci_c_16) {
            int32_t cse_var_50 = (ax1_ax2_fused / 17);
            int32_t cse_var_49 = (kw * 4);
            int32_t cse_var_48 = (oci_c_16 + 64);
            ((float*)DepthwiseConv2d_global_let)[cse_var_48] = (((float*)DepthwiseConv2d_global_let)[cse_var_48] + (p0[(((((((ax0 * 173280) + (cse_var_50 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_49) + oci_c_16) + 64)] * ((float*)fused_constant_43_let)[((((cse_var_50 * 36) + (kh * 12)) + cse_var_49) + oci_c_16)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 17; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_51 = ((ow_inner * 4) + oci);
          ((float*)DepthwiseConv2d_let)[cse_var_51] = ((float*)DepthwiseConv2d_global_let)[cse_var_51];
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 17; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_52 = (ax3_inner * 4);
          float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_52 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_14_let)[(((ax1_ax2_fused / 17) * 4) + ax4)]) * 5.380303e+00f)) + 6.900000e+01f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          T_cast[((((ax0 * 138720) + (ax1_ax2_fused * 68)) + cse_var_52) + ax4)] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_7(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_15_let = (&(global_const_workspace_126_var[2714560]));
  void* fused_constant_46_let = (&(global_const_workspace_126_var[2543488]));
  for (int32_t ax0 = 0; ax0 < 16; ++ax0) {
    for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 2040; ++ax1_ax2_fused) {
      void* DepthwiseConv2d_let = (&(global_workspace_127_var[13309440]));
      void* DepthwiseConv2d_global_let = (&(global_workspace_127_var[13309712]));
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
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_2 = (ax1_ax2_fused / 17);
            int32_t cse_var_1 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[((((((ax0 * 173280) + (cse_var_2 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_1) + oci_c)] * ((float*)fused_constant_46_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
          }
          for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
            int32_t cse_var_5 = (ax1_ax2_fused / 17);
            int32_t cse_var_4 = (kw * 4);
            int32_t cse_var_3 = (oci_c_1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[(((((((ax0 * 173280) + (cse_var_5 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_4) + oci_c_1) + 4)] * ((float*)fused_constant_46_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
          }
          for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
            int32_t cse_var_8 = (ax1_ax2_fused / 17);
            int32_t cse_var_7 = (kw * 4);
            int32_t cse_var_6 = (oci_c_2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[(((((((ax0 * 173280) + (cse_var_8 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_7) + oci_c_2) + 8)] * ((float*)fused_constant_46_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
          }
          for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
            int32_t cse_var_11 = (ax1_ax2_fused / 17);
            int32_t cse_var_10 = (kw * 4);
            int32_t cse_var_9 = (oci_c_3 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (p0[(((((((ax0 * 173280) + (cse_var_11 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_10) + oci_c_3) + 12)] * ((float*)fused_constant_46_let)[((((cse_var_11 * 36) + (kh * 12)) + cse_var_10) + oci_c_3)]));
          }
          for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
            int32_t cse_var_14 = (ax1_ax2_fused / 17);
            int32_t cse_var_13 = (kw * 4);
            int32_t cse_var_12 = (oci_c_4 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (p0[(((((((ax0 * 173280) + (cse_var_14 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_13) + oci_c_4) + 16)] * ((float*)fused_constant_46_let)[((((cse_var_14 * 36) + (kh * 12)) + cse_var_13) + oci_c_4)]));
          }
          for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
            int32_t cse_var_17 = (ax1_ax2_fused / 17);
            int32_t cse_var_16 = (kw * 4);
            int32_t cse_var_15 = (oci_c_5 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (p0[(((((((ax0 * 173280) + (cse_var_17 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_16) + oci_c_5) + 20)] * ((float*)fused_constant_46_let)[((((cse_var_17 * 36) + (kh * 12)) + cse_var_16) + oci_c_5)]));
          }
          for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
            int32_t cse_var_20 = (ax1_ax2_fused / 17);
            int32_t cse_var_19 = (kw * 4);
            int32_t cse_var_18 = (oci_c_6 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (p0[(((((((ax0 * 173280) + (cse_var_20 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_19) + oci_c_6) + 24)] * ((float*)fused_constant_46_let)[((((cse_var_20 * 36) + (kh * 12)) + cse_var_19) + oci_c_6)]));
          }
          for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
            int32_t cse_var_23 = (ax1_ax2_fused / 17);
            int32_t cse_var_22 = (kw * 4);
            int32_t cse_var_21 = (oci_c_7 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (p0[(((((((ax0 * 173280) + (cse_var_23 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_22) + oci_c_7) + 28)] * ((float*)fused_constant_46_let)[((((cse_var_23 * 36) + (kh * 12)) + cse_var_22) + oci_c_7)]));
          }
          for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
            int32_t cse_var_26 = (ax1_ax2_fused / 17);
            int32_t cse_var_25 = (kw * 4);
            int32_t cse_var_24 = (oci_c_8 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (p0[(((((((ax0 * 173280) + (cse_var_26 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_25) + oci_c_8) + 32)] * ((float*)fused_constant_46_let)[((((cse_var_26 * 36) + (kh * 12)) + cse_var_25) + oci_c_8)]));
          }
          for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
            int32_t cse_var_29 = (ax1_ax2_fused / 17);
            int32_t cse_var_28 = (kw * 4);
            int32_t cse_var_27 = (oci_c_9 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (p0[(((((((ax0 * 173280) + (cse_var_29 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_28) + oci_c_9) + 36)] * ((float*)fused_constant_46_let)[((((cse_var_29 * 36) + (kh * 12)) + cse_var_28) + oci_c_9)]));
          }
          for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
            int32_t cse_var_32 = (ax1_ax2_fused / 17);
            int32_t cse_var_31 = (kw * 4);
            int32_t cse_var_30 = (oci_c_10 + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (p0[(((((((ax0 * 173280) + (cse_var_32 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_31) + oci_c_10) + 40)] * ((float*)fused_constant_46_let)[((((cse_var_32 * 36) + (kh * 12)) + cse_var_31) + oci_c_10)]));
          }
          for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
            int32_t cse_var_35 = (ax1_ax2_fused / 17);
            int32_t cse_var_34 = (kw * 4);
            int32_t cse_var_33 = (oci_c_11 + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_33] = (((float*)DepthwiseConv2d_global_let)[cse_var_33] + (p0[(((((((ax0 * 173280) + (cse_var_35 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_34) + oci_c_11) + 44)] * ((float*)fused_constant_46_let)[((((cse_var_35 * 36) + (kh * 12)) + cse_var_34) + oci_c_11)]));
          }
          for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
            int32_t cse_var_38 = (ax1_ax2_fused / 17);
            int32_t cse_var_37 = (kw * 4);
            int32_t cse_var_36 = (oci_c_12 + 48);
            ((float*)DepthwiseConv2d_global_let)[cse_var_36] = (((float*)DepthwiseConv2d_global_let)[cse_var_36] + (p0[(((((((ax0 * 173280) + (cse_var_38 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_37) + oci_c_12) + 48)] * ((float*)fused_constant_46_let)[((((cse_var_38 * 36) + (kh * 12)) + cse_var_37) + oci_c_12)]));
          }
          for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
            int32_t cse_var_41 = (ax1_ax2_fused / 17);
            int32_t cse_var_40 = (kw * 4);
            int32_t cse_var_39 = (oci_c_13 + 52);
            ((float*)DepthwiseConv2d_global_let)[cse_var_39] = (((float*)DepthwiseConv2d_global_let)[cse_var_39] + (p0[(((((((ax0 * 173280) + (cse_var_41 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_40) + oci_c_13) + 52)] * ((float*)fused_constant_46_let)[((((cse_var_41 * 36) + (kh * 12)) + cse_var_40) + oci_c_13)]));
          }
          for (int32_t oci_c_14 = 0; oci_c_14 < 4; ++oci_c_14) {
            int32_t cse_var_44 = (ax1_ax2_fused / 17);
            int32_t cse_var_43 = (kw * 4);
            int32_t cse_var_42 = (oci_c_14 + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (p0[(((((((ax0 * 173280) + (cse_var_44 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_43) + oci_c_14) + 56)] * ((float*)fused_constant_46_let)[((((cse_var_44 * 36) + (kh * 12)) + cse_var_43) + oci_c_14)]));
          }
          for (int32_t oci_c_15 = 0; oci_c_15 < 4; ++oci_c_15) {
            int32_t cse_var_47 = (ax1_ax2_fused / 17);
            int32_t cse_var_46 = (kw * 4);
            int32_t cse_var_45 = (oci_c_15 + 60);
            ((float*)DepthwiseConv2d_global_let)[cse_var_45] = (((float*)DepthwiseConv2d_global_let)[cse_var_45] + (p0[(((((((ax0 * 173280) + (cse_var_47 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_46) + oci_c_15) + 60)] * ((float*)fused_constant_46_let)[((((cse_var_47 * 36) + (kh * 12)) + cse_var_46) + oci_c_15)]));
          }
          for (int32_t oci_c_16 = 0; oci_c_16 < 4; ++oci_c_16) {
            int32_t cse_var_50 = (ax1_ax2_fused / 17);
            int32_t cse_var_49 = (kw * 4);
            int32_t cse_var_48 = (oci_c_16 + 64);
            ((float*)DepthwiseConv2d_global_let)[cse_var_48] = (((float*)DepthwiseConv2d_global_let)[cse_var_48] + (p0[(((((((ax0 * 173280) + (cse_var_50 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_49) + oci_c_16) + 64)] * ((float*)fused_constant_46_let)[((((cse_var_50 * 36) + (kh * 12)) + cse_var_49) + oci_c_16)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 17; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_51 = ((ow_inner * 4) + oci);
          ((float*)DepthwiseConv2d_let)[cse_var_51] = ((float*)DepthwiseConv2d_global_let)[cse_var_51];
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 17; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_52 = (ax3_inner * 4);
          float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_52 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_15_let)[(((ax1_ax2_fused / 17) * 4) + ax4)]) * 1.149059e+01f)) + 1.200000e+01f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          T_cast[((((ax0 * 138720) + (ax1_ax2_fused * 68)) + cse_var_52) + ax4)] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_8(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_16_let = (&(global_const_workspace_136_var[2712640]));
  void* fused_constant_49_let = (&(global_const_workspace_136_var[2526208]));
  for (int32_t ax0 = 0; ax0 < 16; ++ax0) {
    for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 2040; ++ax1_ax2_fused) {
      void* DepthwiseConv2d_let = (&(global_workspace_137_var[13309440]));
      void* DepthwiseConv2d_global_let = (&(global_workspace_137_var[13309712]));
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
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
            int32_t cse_var_2 = (ax1_ax2_fused / 17);
            int32_t cse_var_1 = (kw * 4);
            ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[((((((ax0 * 173280) + (cse_var_2 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_1) + oci_c)] * ((float*)fused_constant_49_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
          }
          for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
            int32_t cse_var_5 = (ax1_ax2_fused / 17);
            int32_t cse_var_4 = (kw * 4);
            int32_t cse_var_3 = (oci_c_1 + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[(((((((ax0 * 173280) + (cse_var_5 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_4) + oci_c_1) + 4)] * ((float*)fused_constant_49_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
          }
          for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
            int32_t cse_var_8 = (ax1_ax2_fused / 17);
            int32_t cse_var_7 = (kw * 4);
            int32_t cse_var_6 = (oci_c_2 + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[(((((((ax0 * 173280) + (cse_var_8 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_7) + oci_c_2) + 8)] * ((float*)fused_constant_49_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
          }
          for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
            int32_t cse_var_11 = (ax1_ax2_fused / 17);
            int32_t cse_var_10 = (kw * 4);
            int32_t cse_var_9 = (oci_c_3 + 12);
            ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (p0[(((((((ax0 * 173280) + (cse_var_11 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_10) + oci_c_3) + 12)] * ((float*)fused_constant_49_let)[((((cse_var_11 * 36) + (kh * 12)) + cse_var_10) + oci_c_3)]));
          }
          for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
            int32_t cse_var_14 = (ax1_ax2_fused / 17);
            int32_t cse_var_13 = (kw * 4);
            int32_t cse_var_12 = (oci_c_4 + 16);
            ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (p0[(((((((ax0 * 173280) + (cse_var_14 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_13) + oci_c_4) + 16)] * ((float*)fused_constant_49_let)[((((cse_var_14 * 36) + (kh * 12)) + cse_var_13) + oci_c_4)]));
          }
          for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
            int32_t cse_var_17 = (ax1_ax2_fused / 17);
            int32_t cse_var_16 = (kw * 4);
            int32_t cse_var_15 = (oci_c_5 + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (p0[(((((((ax0 * 173280) + (cse_var_17 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_16) + oci_c_5) + 20)] * ((float*)fused_constant_49_let)[((((cse_var_17 * 36) + (kh * 12)) + cse_var_16) + oci_c_5)]));
          }
          for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
            int32_t cse_var_20 = (ax1_ax2_fused / 17);
            int32_t cse_var_19 = (kw * 4);
            int32_t cse_var_18 = (oci_c_6 + 24);
            ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (p0[(((((((ax0 * 173280) + (cse_var_20 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_19) + oci_c_6) + 24)] * ((float*)fused_constant_49_let)[((((cse_var_20 * 36) + (kh * 12)) + cse_var_19) + oci_c_6)]));
          }
          for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
            int32_t cse_var_23 = (ax1_ax2_fused / 17);
            int32_t cse_var_22 = (kw * 4);
            int32_t cse_var_21 = (oci_c_7 + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (p0[(((((((ax0 * 173280) + (cse_var_23 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_22) + oci_c_7) + 28)] * ((float*)fused_constant_49_let)[((((cse_var_23 * 36) + (kh * 12)) + cse_var_22) + oci_c_7)]));
          }
          for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
            int32_t cse_var_26 = (ax1_ax2_fused / 17);
            int32_t cse_var_25 = (kw * 4);
            int32_t cse_var_24 = (oci_c_8 + 32);
            ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (p0[(((((((ax0 * 173280) + (cse_var_26 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_25) + oci_c_8) + 32)] * ((float*)fused_constant_49_let)[((((cse_var_26 * 36) + (kh * 12)) + cse_var_25) + oci_c_8)]));
          }
          for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
            int32_t cse_var_29 = (ax1_ax2_fused / 17);
            int32_t cse_var_28 = (kw * 4);
            int32_t cse_var_27 = (oci_c_9 + 36);
            ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (p0[(((((((ax0 * 173280) + (cse_var_29 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_28) + oci_c_9) + 36)] * ((float*)fused_constant_49_let)[((((cse_var_29 * 36) + (kh * 12)) + cse_var_28) + oci_c_9)]));
          }
          for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
            int32_t cse_var_32 = (ax1_ax2_fused / 17);
            int32_t cse_var_31 = (kw * 4);
            int32_t cse_var_30 = (oci_c_10 + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (p0[(((((((ax0 * 173280) + (cse_var_32 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_31) + oci_c_10) + 40)] * ((float*)fused_constant_49_let)[((((cse_var_32 * 36) + (kh * 12)) + cse_var_31) + oci_c_10)]));
          }
          for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
            int32_t cse_var_35 = (ax1_ax2_fused / 17);
            int32_t cse_var_34 = (kw * 4);
            int32_t cse_var_33 = (oci_c_11 + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_33] = (((float*)DepthwiseConv2d_global_let)[cse_var_33] + (p0[(((((((ax0 * 173280) + (cse_var_35 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_34) + oci_c_11) + 44)] * ((float*)fused_constant_49_let)[((((cse_var_35 * 36) + (kh * 12)) + cse_var_34) + oci_c_11)]));
          }
          for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
            int32_t cse_var_38 = (ax1_ax2_fused / 17);
            int32_t cse_var_37 = (kw * 4);
            int32_t cse_var_36 = (oci_c_12 + 48);
            ((float*)DepthwiseConv2d_global_let)[cse_var_36] = (((float*)DepthwiseConv2d_global_let)[cse_var_36] + (p0[(((((((ax0 * 173280) + (cse_var_38 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_37) + oci_c_12) + 48)] * ((float*)fused_constant_49_let)[((((cse_var_38 * 36) + (kh * 12)) + cse_var_37) + oci_c_12)]));
          }
          for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
            int32_t cse_var_41 = (ax1_ax2_fused / 17);
            int32_t cse_var_40 = (kw * 4);
            int32_t cse_var_39 = (oci_c_13 + 52);
            ((float*)DepthwiseConv2d_global_let)[cse_var_39] = (((float*)DepthwiseConv2d_global_let)[cse_var_39] + (p0[(((((((ax0 * 173280) + (cse_var_41 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_40) + oci_c_13) + 52)] * ((float*)fused_constant_49_let)[((((cse_var_41 * 36) + (kh * 12)) + cse_var_40) + oci_c_13)]));
          }
          for (int32_t oci_c_14 = 0; oci_c_14 < 4; ++oci_c_14) {
            int32_t cse_var_44 = (ax1_ax2_fused / 17);
            int32_t cse_var_43 = (kw * 4);
            int32_t cse_var_42 = (oci_c_14 + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (p0[(((((((ax0 * 173280) + (cse_var_44 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_43) + oci_c_14) + 56)] * ((float*)fused_constant_49_let)[((((cse_var_44 * 36) + (kh * 12)) + cse_var_43) + oci_c_14)]));
          }
          for (int32_t oci_c_15 = 0; oci_c_15 < 4; ++oci_c_15) {
            int32_t cse_var_47 = (ax1_ax2_fused / 17);
            int32_t cse_var_46 = (kw * 4);
            int32_t cse_var_45 = (oci_c_15 + 60);
            ((float*)DepthwiseConv2d_global_let)[cse_var_45] = (((float*)DepthwiseConv2d_global_let)[cse_var_45] + (p0[(((((((ax0 * 173280) + (cse_var_47 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_46) + oci_c_15) + 60)] * ((float*)fused_constant_49_let)[((((cse_var_47 * 36) + (kh * 12)) + cse_var_46) + oci_c_15)]));
          }
          for (int32_t oci_c_16 = 0; oci_c_16 < 4; ++oci_c_16) {
            int32_t cse_var_50 = (ax1_ax2_fused / 17);
            int32_t cse_var_49 = (kw * 4);
            int32_t cse_var_48 = (oci_c_16 + 64);
            ((float*)DepthwiseConv2d_global_let)[cse_var_48] = (((float*)DepthwiseConv2d_global_let)[cse_var_48] + (p0[(((((((ax0 * 173280) + (cse_var_50 * 1444)) + (kh * 76)) + ((ax1_ax2_fused % 17) * 76)) + cse_var_49) + oci_c_16) + 64)] * ((float*)fused_constant_49_let)[((((cse_var_50 * 36) + (kh * 12)) + cse_var_49) + oci_c_16)]));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 17; ++ow_inner) {
        for (int32_t oci = 0; oci < 4; ++oci) {
          int32_t cse_var_51 = ((ow_inner * 4) + oci);
          ((float*)DepthwiseConv2d_let)[cse_var_51] = ((float*)DepthwiseConv2d_global_let)[cse_var_51];
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 17; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_52 = (ax3_inner * 4);
          float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_52 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_16_let)[(((ax1_ax2_fused / 17) * 4) + ax4)]) * 9.656840e+00f)) + 3.000000e+01f;
          float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
          T_cast[((((ax0 * 138720) + (ax1_ax2_fused * 68)) + cse_var_52) + ax4)] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_10_let = (&(global_const_workspace_76_var[2759872]));
  void* fused_constant_31_let = (&(global_const_workspace_76_var[2621440]));
  for (int32_t ax0 = 0; ax0 < 4; ++ax0) {
    for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 1584; ++ax1_ax2_fused) {
      void* DepthwiseConv2d_let = (&(global_workspace_77_var[4599552]));
      for (int32_t ow_outer = 0; ow_outer < 3; ++ow_outer) {
        void* DepthwiseConv2d_global_let = (&(global_workspace_77_var[4600080]));
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
        for (int32_t kh = 0; kh < 3; ++kh) {
          for (int32_t kw = 0; kw < 3; ++kw) {
            for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
              int32_t cse_var_2 = (ax1_ax2_fused / 33);
              int32_t cse_var_1 = (kw * 4);
              ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (p0[(((((((ax0 * 235200) + (cse_var_2 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_1) + oci_c)] * ((float*)fused_constant_31_let)[((((cse_var_2 * 36) + (kh * 12)) + cse_var_1) + oci_c)]));
            }
            for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
              int32_t cse_var_5 = (ax1_ax2_fused / 33);
              int32_t cse_var_4 = (kw * 4);
              int32_t cse_var_3 = (oci_c_1 + 4);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (p0[((((((((ax0 * 235200) + (cse_var_5 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_4) + oci_c_1) + 4)] * ((float*)fused_constant_31_let)[((((cse_var_5 * 36) + (kh * 12)) + cse_var_4) + oci_c_1)]));
            }
            for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
              int32_t cse_var_8 = (ax1_ax2_fused / 33);
              int32_t cse_var_7 = (kw * 4);
              int32_t cse_var_6 = (oci_c_2 + 8);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (p0[((((((((ax0 * 235200) + (cse_var_8 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_7) + oci_c_2) + 8)] * ((float*)fused_constant_31_let)[((((cse_var_8 * 36) + (kh * 12)) + cse_var_7) + oci_c_2)]));
            }
            for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
              int32_t cse_var_11 = (ax1_ax2_fused / 33);
              int32_t cse_var_10 = (kw * 4);
              int32_t cse_var_9 = (oci_c_3 + 12);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (p0[((((((((ax0 * 235200) + (cse_var_11 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_10) + oci_c_3) + 12)] * ((float*)fused_constant_31_let)[((((cse_var_11 * 36) + (kh * 12)) + cse_var_10) + oci_c_3)]));
            }
            for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
              int32_t cse_var_14 = (ax1_ax2_fused / 33);
              int32_t cse_var_13 = (kw * 4);
              int32_t cse_var_12 = (oci_c_4 + 16);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (p0[((((((((ax0 * 235200) + (cse_var_14 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_13) + oci_c_4) + 16)] * ((float*)fused_constant_31_let)[((((cse_var_14 * 36) + (kh * 12)) + cse_var_13) + oci_c_4)]));
            }
            for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
              int32_t cse_var_17 = (ax1_ax2_fused / 33);
              int32_t cse_var_16 = (kw * 4);
              int32_t cse_var_15 = (oci_c_5 + 20);
              ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (p0[((((((((ax0 * 235200) + (cse_var_17 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_16) + oci_c_5) + 20)] * ((float*)fused_constant_31_let)[((((cse_var_17 * 36) + (kh * 12)) + cse_var_16) + oci_c_5)]));
            }
            for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
              int32_t cse_var_20 = (ax1_ax2_fused / 33);
              int32_t cse_var_19 = (kw * 4);
              int32_t cse_var_18 = (oci_c_6 + 24);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (p0[((((((((ax0 * 235200) + (cse_var_20 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_19) + oci_c_6) + 24)] * ((float*)fused_constant_31_let)[((((cse_var_20 * 36) + (kh * 12)) + cse_var_19) + oci_c_6)]));
            }
            for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
              int32_t cse_var_23 = (ax1_ax2_fused / 33);
              int32_t cse_var_22 = (kw * 4);
              int32_t cse_var_21 = (oci_c_7 + 28);
              ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (p0[((((((((ax0 * 235200) + (cse_var_23 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_22) + oci_c_7) + 28)] * ((float*)fused_constant_31_let)[((((cse_var_23 * 36) + (kh * 12)) + cse_var_22) + oci_c_7)]));
            }
            for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
              int32_t cse_var_26 = (ax1_ax2_fused / 33);
              int32_t cse_var_25 = (kw * 4);
              int32_t cse_var_24 = (oci_c_8 + 32);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (p0[((((((((ax0 * 235200) + (cse_var_26 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_25) + oci_c_8) + 32)] * ((float*)fused_constant_31_let)[((((cse_var_26 * 36) + (kh * 12)) + cse_var_25) + oci_c_8)]));
            }
            for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
              int32_t cse_var_29 = (ax1_ax2_fused / 33);
              int32_t cse_var_28 = (kw * 4);
              int32_t cse_var_27 = (oci_c_9 + 36);
              ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (p0[((((((((ax0 * 235200) + (cse_var_29 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_28) + oci_c_9) + 36)] * ((float*)fused_constant_31_let)[((((cse_var_29 * 36) + (kh * 12)) + cse_var_28) + oci_c_9)]));
            }
            for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
              int32_t cse_var_32 = (ax1_ax2_fused / 33);
              int32_t cse_var_31 = (kw * 4);
              int32_t cse_var_30 = (oci_c_10 + 40);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (p0[((((((((ax0 * 235200) + (cse_var_32 * 4900)) + (kh * 140)) + ((ax1_ax2_fused % 33) * 140)) + (ow_outer * 44)) + cse_var_31) + oci_c_10) + 40)] * ((float*)fused_constant_31_let)[((((cse_var_32 * 36) + (kh * 12)) + cse_var_31) + oci_c_10)]));
            }
          }
        }
        for (int32_t ow_inner = 0; ow_inner < 11; ++ow_inner) {
          for (int32_t oci = 0; oci < 4; ++oci) {
            int32_t cse_var_33 = (ow_inner * 4);
            ((float*)DepthwiseConv2d_let)[(((ow_outer * 44) + cse_var_33) + oci)] = ((float*)DepthwiseConv2d_global_let)[(cse_var_33 + oci)];
          }
        }
      }
      for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 11; ++ax3_inner) {
          for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
            int32_t cse_var_35 = (ax3_outer * 44);
            int32_t cse_var_34 = (ax3_inner * 4);
            float v_ = roundf(((((float*)DepthwiseConv2d_let)[((cse_var_35 + cse_var_34) + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_10_let)[(((ax1_ax2_fused / 33) * 4) + ax4)]) * 4.182829e+00f));
            float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
            T_cast[(((((ax0 * 209088) + (ax1_ax2_fused * 132)) + cse_var_35) + cse_var_34) + ax4)] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1_(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 6720; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 35; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused / 1680);
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused % 35);
        int32_t cse_var_2 = (cse_var_4 % 2);
        int32_t cse_var_1 = (cse_var_4 / 2);
        float v_ = roundf(((((((1 <= cse_var_3) && (((cse_var_3 * 2) + cse_var_1) < 67)) && (1 <= ax3)) && (((ax3 * 2) + cse_var_2) < 67)) ? p0[(((((((((ax0_ax1_fused_ax2_fused % 1680) / 35) * 16900) + (cse_var_3 * 520)) + (cse_var_1 * 260)) + (ax3 * 8)) + (cse_var_2 * 4)) + ax4_inner) - 528)] : 0.000000e+00f) * 4.250000e+01f)) + -1.280000e+02f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 140) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__1(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 6720; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 35; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused / 1680);
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused % 35);
        int32_t cse_var_2 = (cse_var_4 % 2);
        int32_t cse_var_1 = (cse_var_4 / 2);
        float v_ = roundf(((((((1 <= cse_var_3) && (((cse_var_3 * 2) + cse_var_1) < 67)) && (1 <= ax3)) && (((ax3 * 2) + cse_var_2) < 67)) ? p0[(((((((((ax0_ax1_fused_ax2_fused % 1680) / 35) * 16900) + (cse_var_3 * 520)) + (cse_var_1 * 260)) + (ax3 * 8)) + (cse_var_2 * 4)) + ax4_inner) - 528)] : 0.000000e+00f) * 4.250000e+01f)) + -1.280000e+02f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 140) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__2(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 10080; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 35; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused / 2520);
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused % 35);
        int32_t cse_var_2 = (cse_var_4 % 2);
        int32_t cse_var_1 = (cse_var_4 / 2);
        float v_ = roundf(((((((1 <= cse_var_3) && (((cse_var_3 * 2) + cse_var_1) < 67)) && (1 <= ax3)) && (((ax3 * 2) + cse_var_2) < 67)) ? p0[(((((((((ax0_ax1_fused_ax2_fused % 2520) / 35) * 16900) + (cse_var_3 * 520)) + (cse_var_1 * 260)) + (ax3 * 8)) + (cse_var_2 * 4)) + ax4_inner) - 528)] : 0.000000e+00f) * 4.250000e+01f)) + -1.280000e+02f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 140) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__3(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 10080; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 35; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused / 2520);
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused % 35);
        int32_t cse_var_2 = (cse_var_4 % 2);
        int32_t cse_var_1 = (cse_var_4 / 2);
        float v_ = roundf(((((((1 <= cse_var_3) && (((cse_var_3 * 2) + cse_var_1) < 67)) && (1 <= ax3)) && (((ax3 * 2) + cse_var_2) < 67)) ? p0[(((((((((ax0_ax1_fused_ax2_fused % 2520) / 35) * 16900) + (cse_var_3 * 520)) + (cse_var_1 * 260)) + (ax3 * 8)) + (cse_var_2 * 4)) + ax4_inner) - 528)] : 0.000000e+00f) * 4.348064e+01f)) + -1.280000e+02f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 140) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__4(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 10080; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 35; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused / 2520);
        int32_t cse_var_3 = (ax0_ax1_fused_ax2_fused % 35);
        int32_t cse_var_2 = (cse_var_4 % 2);
        int32_t cse_var_1 = (cse_var_4 / 2);
        float v_ = roundf(((((((1 <= cse_var_3) && (((cse_var_3 * 2) + cse_var_1) < 67)) && (1 <= ax3)) && (((ax3 * 2) + cse_var_2) < 67)) ? p0[(((((((((ax0_ax1_fused_ax2_fused % 2520) / 35) * 16900) + (cse_var_3 * 520)) + (cse_var_1 * 260)) + (ax3 * 8)) + (cse_var_2 * 4)) + ax4_inner) - 528)] : 0.000000e+00f) * 4.250000e+01f)) + -1.280000e+02f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 140) + (ax3 * 4)) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__5(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 36480; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 19; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_5 = (ax0_ax1_fused_ax2_fused / 2280);
        int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused % 19);
        int32_t cse_var_3 = (ax3 * 4);
        int32_t cse_var_2 = (cse_var_5 % 4);
        int32_t cse_var_1 = (cse_var_5 / 4);
        float v_ = roundf(((((((1 <= cse_var_4) && (((cse_var_4 * 4) + cse_var_1) < 69)) && (1 <= ax3)) && ((cse_var_3 + cse_var_2) < 69)) ? p0[(((((((((ax0_ax1_fused_ax2_fused % 2280) / 19) * 16900) + (cse_var_4 * 1040)) + (cse_var_1 * 260)) + (ax3 * 16)) + (cse_var_2 * 4)) + ax4_inner) - 1056)] : 0.000000e+00f) * 4.250000e+01f)) + -1.280000e+02f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 76) + cse_var_3) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__6(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 36480; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 19; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_5 = (ax0_ax1_fused_ax2_fused / 2280);
        int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused % 19);
        int32_t cse_var_3 = (ax3 * 4);
        int32_t cse_var_2 = (cse_var_5 % 4);
        int32_t cse_var_1 = (cse_var_5 / 4);
        float v_ = roundf(((((((1 <= cse_var_4) && (((cse_var_4 * 4) + cse_var_1) < 69)) && (1 <= ax3)) && ((cse_var_3 + cse_var_2) < 69)) ? p0[(((((((((ax0_ax1_fused_ax2_fused % 2280) / 19) * 16900) + (cse_var_4 * 1040)) + (cse_var_1 * 260)) + (ax3 * 16)) + (cse_var_2 * 4)) + ax4_inner) - 1056)] : 0.000000e+00f) * 4.568189e+01f)) + -1.280000e+02f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 76) + cse_var_3) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__7(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 36480; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 19; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_5 = (ax0_ax1_fused_ax2_fused / 2280);
        int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused % 19);
        int32_t cse_var_3 = (ax3 * 4);
        int32_t cse_var_2 = (cse_var_5 % 4);
        int32_t cse_var_1 = (cse_var_5 / 4);
        float v_ = roundf(((((((1 <= cse_var_4) && (((cse_var_4 * 4) + cse_var_1) < 69)) && (1 <= ax3)) && ((cse_var_3 + cse_var_2) < 69)) ? p0[(((((((((ax0_ax1_fused_ax2_fused % 2280) / 19) * 16900) + (cse_var_4 * 1040)) + (cse_var_1 * 260)) + (ax3 * 16)) + (cse_var_2 * 4)) + ax4_inner) - 1056)] : 0.000000e+00f) * 4.250000e+01f)) + -1.280000e+02f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 76) + cse_var_3) + ax4_inner)] = ((float)(((int32_t)((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)))) + 128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* sub_7_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_55_let = (&(global_workspace_1_var[5644800]));
  void* sid_60_let = (&(global_workspace_1_var[11089920]));
  void* sid_49_let = (&(global_workspace_1_var[0]));
  void* sid_48_let = (&(global_workspace_1_var[5644800]));
  void* sid_62_let = (&(global_workspace_1_var[19201920]));
  void* sid_52_let = (&(global_workspace_1_var[11323200]));
  void* sid_53_let = (&(global_workspace_1_var[5644800]));
  void* sid_79_let = (&(global_workspace_1_var[8652800]));
  void* sid_39_let = (&(global_workspace_1_var[0]));
  void* sid_37_let = (&(global_workspace_1_var[7548800]));
  void* sid_45_let = (&(global_workspace_1_var[5644800]));
  void* sid_58_let = (&(global_workspace_1_var[11089920]));
  void* sid_59_let = (&(global_workspace_1_var[0]));
  void* sid_34_let = (&(global_workspace_1_var[0]));
  void* sid_13_let = (&(global_workspace_1_var[3616576]));
  void* sid_33_let = (&(global_workspace_1_var[3763200]));
  void* sid_51_let = (&(global_workspace_1_var[0]));
  void* sid_50_let = (&(global_workspace_1_var[5644800]));
  void* sid_46_let = (&(global_workspace_1_var[0]));
  void* sid_3_let = (&(global_workspace_1_var[4293184]));
  void* sid_14_let = (&(global_workspace_1_var[1723776]));
  void* sid_11_let = (&(global_workspace_1_var[4942368]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[4942368]));
  void* sid_12_let = (&(global_workspace_1_var[4942368]));
  void* sid_35_let = (&(global_workspace_1_var[3763200]));
  void* sid_44_let = (&(global_workspace_1_var[0]));
  void* sid_41_let = (&(global_workspace_1_var[0]));
  void* sid_4_let = (&(global_workspace_1_var[0]));
  void* sid_61_let = (&(global_workspace_1_var[0]));
  void* sid_7_let = (&(global_workspace_1_var[9734976]));
  void* sid_40_let = (&(global_workspace_1_var[3763200]));
  void* sid_54_let = (&(global_workspace_1_var[0]));
  void* sid_68_let = (&(global_workspace_1_var[11089920]));
  void* sid_38_let = (&(global_workspace_1_var[3763200]));
  void* sid_63_let = (&(global_workspace_1_var[11089920]));
  void* sid_5_let = (&(global_workspace_1_var[12879552]));
  void* sid_31_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[3182704]));
  void* sid_42_let = (&(global_workspace_1_var[11323200]));
  void* sid_57_let = (&(global_workspace_1_var[20553920]));
  void* sid_2_let = (&(global_workspace_1_var[4293184]));
  void* sid_8_let = (&(global_workspace_1_var[4942368]));
  void* sid_47_let = (&(global_workspace_1_var[10512000]));
  void* sid_23_let = (&(global_workspace_1_var[3763200]));
  void* sid_15_let = (&(global_workspace_1_var[1723776]));
  void* sid_27_let = (&(global_workspace_1_var[7548800]));
  void* sid_6_let = (&(global_workspace_1_var[12879552]));
  void* sid_16_let = (&(global_workspace_1_var[3346176]));
  void* sid_56_let = (&(global_workspace_1_var[0]));
  void* sid_32_let = (&(global_workspace_1_var[7008000]));
  void* sid_21_let = (&(global_workspace_1_var[1723776]));
  void* sid_22_let = (&(global_workspace_1_var[7008000]));
  void* sid_17_let = (&(global_workspace_1_var[1723776]));
  void* sid_36_let = (&(global_workspace_1_var[0]));
  void* sid_25_let = (&(global_workspace_1_var[3763200]));
  void* sid_18_let = (&(global_workspace_1_var[1723776]));
  void* sid_19_let = (&(global_workspace_1_var[0]));
  void* sid_20_let = (&(global_workspace_1_var[1723776]));
  void* sid_24_let = (&(global_workspace_1_var[0]));
  void* sid_43_let = (&(global_workspace_1_var[5644800]));
  void* sid_29_let = (&(global_workspace_1_var[0]));
  void* sid_30_let = (&(global_workspace_1_var[3763200]));
  void* sid_26_let = (&(global_workspace_1_var[0]));
  void* sid_28_let = (&(global_workspace_1_var[3763200]));
  void* sid_64_let = (&(global_workspace_1_var[0]));
  void* sid_65_let = (&(global_workspace_1_var[11089920]));
  void* sid_66_let = (&(global_workspace_1_var[0]));
  void* sid_67_let = (&(global_workspace_1_var[8112000]));
  void* sid_69_let = (&(global_workspace_1_var[0]));
  void* sid_70_let = (&(global_workspace_1_var[11089920]));
  void* sid_71_let = (&(global_workspace_1_var[0]));
  void* sid_72_let = (&(global_workspace_1_var[8112000]));
  void* sid_73_let = (&(global_workspace_1_var[0]));
  void* sid_74_let = (&(global_workspace_1_var[640]));
  void* sid_75_let = (&(global_workspace_1_var[0]));
  void* sid_76_let = (&(global_workspace_1_var[2163200]));
  void* sid_77_let = (&(global_workspace_1_var[0]));
  void* sid_78_let = (&(global_workspace_1_var[0]));
  void* sid_80_let = (&(global_workspace_1_var[0]));
  void* sid_81_let = (&(global_workspace_1_var[4326400]));
  if (tvmgen_default_fused_divide_round_clip_cast_transpose_cast_layout_transform(sub_7_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96_(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f_(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__1(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__1(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f_(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__2(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__2(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__384203b469b33259_(sid_9_let, sid_7_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__3(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__3(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f__1(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__4(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__4(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__96e7c63399e022c1_(sid_15_let, sid_13_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__5(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__5(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__384203b469b33259__1(sid_18_let, sid_16_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__8bd7c24a10819b96__6(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_57ad722c505a9f7f__6(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f__2(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109_(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1_(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1_(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__96e7c63399e022c1__1(sid_26_let, sid_22_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__1(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1_(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_1(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__1(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__96e7c63399e022c1__2(sid_31_let, sid_27_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__2(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1_(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_2(sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__2(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__384203b469b33259__2(sid_36_let, sid_32_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__3(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__1(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_clip_cast(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_1ebb5b0eae9a410c_(sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f__3(sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__4(sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__2(sid_43_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_3(sid_44_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__3(sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__96e7c63399e022c1__3(sid_46_let, sid_42_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__5(sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__3(sid_48_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_4(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__4(sid_50_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__384203b469b33259__3(sid_51_let, sid_47_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__6(sid_52_let, sid_53_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__4(sid_53_let, sid_54_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_5(sid_54_let, sid_55_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__5(sid_55_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f__4(sid_56_let, sid_57_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__7(sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__5(sid_58_let, sid_59_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_6(sid_59_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__6(sid_60_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__96e7c63399e022c1__4(sid_61_let, sid_57_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__8(sid_62_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__6(sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_7(sid_64_let, sid_65_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_902ba9fb4b47004f_(sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__384203b469b33259__4(sid_66_let, sid_62_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_clip_divide_round_add_clip_cast_cast_subtract__e0e1215ca4be4109__9(sid_67_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_layout_transform_reshape_nn_space_to_depth_divide_round_add_clip_ca_94b702fb46a0acd1__7(sid_68_let, sid_69_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_8(sid_69_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_transpose_nn_depth_to_space_strided_slice_reshape_transpo_47f33dbf17df8ea1__7(sid_70_let, sid_71_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f__5(sid_71_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_layout_transform(sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_avg_pool2d_divide_round_add_clip_cast(sid_73_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_reshape_cast_subtract_cast_layout_transform(sid_74_let, sid_75_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_divide_round_add_clip_cast(sid_75_let, sid_76_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_divide_round_add_clip_cast_1(sid_72_let, sid_77_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_reshape_cast_subtract_cast_multiply_image_resize2d_divide_ea4d10f16deb4f05_(sid_76_let, sid_77_let, sid_78_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_nn_relu_divide_round_add_clip_cast_cast_subtra_61a9b7ebb32af086_(sid_78_let, sid_79_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform(sid_79_let, sid_80_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subtract_cast__ca98aad4ccc9b97f__6(sid_80_let, sid_81_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_image_resize2d_divide_round_add_clip_cast_cast_subtract_c_a7ca9e83d6de06f4_(sid_81_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

