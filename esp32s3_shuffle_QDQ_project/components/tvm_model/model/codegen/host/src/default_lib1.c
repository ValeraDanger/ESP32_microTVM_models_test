// tvm target: c -keys=cpu -model=esp32
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_concatenate_divide_round_clip_cast_cast_cast_multiply_layout_transform_res_5282196681183f22_(float* p0, float* p1, float* T_split, float* T_split_1, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* concatenate_ext_let = (&(global_workspace_23_var[0]));
  for (int32_t j = 0; j < 45472; ++j) {
    ((float*)concatenate_ext_let)[j] = p0[j];
  }
  for (int32_t j_1 = 0; j_1 < 45472; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 45472)] = p1[j_1];
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 58; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 4) + (ax3_inner >> 2)) < 7) {
            float v_ = roundf((((float*)concatenate_ext_let)[(((((((ax0_ax1_fused & 1) * 45472) + ((ax0_ax1_fused >> 2) * 1568)) + (ax2 * 56)) + (ax3_outer * 32)) + (ax3_inner * 2)) + ((ax0_ax1_fused & 3) >> 1))] * 2.592525e+01f));
            float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
            float v__2 = roundf(((((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 3.857243e-02f) * 2.592525e+01f));
            float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
            float v__4 = roundf(((((float)((int32_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))))) * 3.857243e-02f) * 2.592525e+01f));
            float v__5 = (v__4) < (2.550000e+02f) ? (v__4) : (2.550000e+02f);
            float v__6 = roundf(((((float)((int32_t)((uint8_t)((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))))) * 3.857243e-02f) * 2.592525e+01f));
            float v__7 = (v__6) < (2.550000e+02f) ? (v__6) : (2.550000e+02f);
            T_split[((((ax0_ax1_fused * 784) + (ax2 * 28)) + (ax3_outer * 16)) + ax3_inner)] = (((float)((int32_t)((uint8_t)((v__7) > (0.000000e+00f) ? (v__7) : (0.000000e+00f))))) * 3.857243e-02f);
          }
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 58; ++ax0_ax1_fused_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 28; ++ax2_1) {
      for (int32_t ax3_outer_1 = 0; ax3_outer_1 < 2; ++ax3_outer_1) {
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 16; ++ax3_inner_1) {
          if (((ax3_outer_1 * 4) + (ax3_inner_1 >> 2)) < 7) {
            float v__8 = roundf((((float*)concatenate_ext_let)[(((((((ax0_ax1_fused_1 & 1) * 45472) + (((ax0_ax1_fused_1 + 58) >> 2) * 1568)) + (ax2_1 * 56)) + (ax3_outer_1 * 32)) + (ax3_inner_1 * 2)) + (((ax0_ax1_fused_1 >> 1) + 1) & 1))] * 2.592525e+01f));
            float v__9 = (v__8) < (2.550000e+02f) ? (v__8) : (2.550000e+02f);
            float v__10 = roundf(((((float)((int32_t)((uint8_t)((v__9) > (0.000000e+00f) ? (v__9) : (0.000000e+00f))))) * 3.857243e-02f) * 2.592525e+01f));
            float v__11 = (v__10) < (2.550000e+02f) ? (v__10) : (2.550000e+02f);
            float v__12 = roundf(((((float)((int32_t)((uint8_t)((v__11) > (0.000000e+00f) ? (v__11) : (0.000000e+00f))))) * 3.857243e-02f) * 2.592525e+01f));
            float v__13 = (v__12) < (2.550000e+02f) ? (v__12) : (2.550000e+02f);
            float v__14 = roundf(((((float)((int32_t)((uint8_t)((v__13) > (0.000000e+00f) ? (v__13) : (0.000000e+00f))))) * 3.857243e-02f) * 2.592525e+01f));
            float v__15 = (v__14) < (2.550000e+02f) ? (v__14) : (2.550000e+02f);
            T_split_1[((((ax0_ax1_fused_1 * 784) + (ax2_1 * 28)) + (ax3_outer_1 * 16)) + ax3_inner_1)] = (((float)((int32_t)((uint8_t)((v__15) > (0.000000e+00f) ? (v__15) : (0.000000e+00f))))) * 3.857243e-02f);
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
TVM_DLL int32_t tvmgen_default_fused_concatenate_divide_round_clip_cast_cast_cast_multiply_layout_transform_res_5282196681183f22__1(float* p0, float* p1, float* T_split, float* T_split_1, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* concatenate_ext_let = (&(global_workspace_59_var[0]));
  for (int32_t j = 0; j < 22736; ++j) {
    ((float*)concatenate_ext_let)[j] = p0[j];
  }
  for (int32_t j_1 = 0; j_1 < 22736; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 22736)] = p1[j_1];
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 116; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        float v_ = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused & 1) * 22736) + ((ax0_ax1_fused >> 3) * 784)) + (ax2 * 56)) + (ax3_inner * 4)) + ((ax0_ax1_fused & 7) >> 1))] * 7.748970e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        float v__2 = roundf(((((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.290494e-02f) * 7.748970e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        float v__4 = roundf(((((float)((int32_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))))) * 1.290494e-02f) * 7.748970e+01f));
        float v__5 = (v__4) < (2.550000e+02f) ? (v__4) : (2.550000e+02f);
        float v__6 = roundf(((((float)((int32_t)((uint8_t)((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))))) * 1.290494e-02f) * 7.748970e+01f));
        float v__7 = (v__6) < (2.550000e+02f) ? (v__6) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 196) + (ax2 * 14)) + ax3_inner)] = (((float)((int32_t)((uint8_t)((v__7) > (0.000000e+00f) ? (v__7) : (0.000000e+00f))))) * 1.290494e-02f);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 116; ++ax0_ax1_fused_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 14; ++ax3_inner_1) {
        float v__8 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused_1 & 1) * 22736) + (((ax0_ax1_fused_1 + 116) >> 3) * 784)) + (ax2_1 * 56)) + (ax3_inner_1 * 4)) + (((ax0_ax1_fused_1 >> 1) + 2) & 3))] * 7.748970e+01f));
        float v__9 = (v__8) < (2.550000e+02f) ? (v__8) : (2.550000e+02f);
        float v__10 = roundf(((((float)((int32_t)((uint8_t)((v__9) > (0.000000e+00f) ? (v__9) : (0.000000e+00f))))) * 1.290494e-02f) * 7.748970e+01f));
        float v__11 = (v__10) < (2.550000e+02f) ? (v__10) : (2.550000e+02f);
        float v__12 = roundf(((((float)((int32_t)((uint8_t)((v__11) > (0.000000e+00f) ? (v__11) : (0.000000e+00f))))) * 1.290494e-02f) * 7.748970e+01f));
        float v__13 = (v__12) < (2.550000e+02f) ? (v__12) : (2.550000e+02f);
        float v__14 = roundf(((((float)((int32_t)((uint8_t)((v__13) > (0.000000e+00f) ? (v__13) : (0.000000e+00f))))) * 1.290494e-02f) * 7.748970e+01f));
        float v__15 = (v__14) < (2.550000e+02f) ? (v__14) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 196) + (ax2_1 * 14)) + ax3_inner_1)] = (((float)((int32_t)((uint8_t)((v__15) > (0.000000e+00f) ? (v__15) : (0.000000e+00f))))) * 1.290494e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_concatenate_divide_round_clip_cast_cast_cast_multiply_layout_transform_res_5282196681183f22__2(float* p0, float* p1, float* T_split, float* T_split_1, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  void* concatenate_ext_let = (&(global_workspace_123_var[0]));
  for (int32_t j = 0; j < 11368; ++j) {
    ((float*)concatenate_ext_let)[j] = p0[j];
  }
  for (int32_t j_1 = 0; j_1 < 11368; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 11368)] = p1[j_1];
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 232; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
        float v_ = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused & 1) * 11368) + ((ax0_ax1_fused >> 3) * 196)) + (ax2 * 28)) + (ax3_inner * 4)) + ((ax0_ax1_fused & 7) >> 1))] * 7.309447e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        float v__2 = roundf(((((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.368093e-02f) * 7.309447e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        float v__4 = roundf(((((float)((int32_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))))) * 1.368093e-02f) * 7.309447e+01f));
        float v__5 = (v__4) < (2.550000e+02f) ? (v__4) : (2.550000e+02f);
        float v__6 = roundf(((((float)((int32_t)((uint8_t)((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))))) * 1.368093e-02f) * 7.309447e+01f));
        float v__7 = (v__6) < (2.550000e+02f) ? (v__6) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 49) + (ax2 * 7)) + ax3_inner)] = (((float)((int32_t)((uint8_t)((v__7) > (0.000000e+00f) ? (v__7) : (0.000000e+00f))))) * 1.368093e-02f);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 232; ++ax0_ax1_fused_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 7; ++ax3_inner_1) {
        float v__8 = roundf((((float*)concatenate_ext_let)[(((((((ax0_ax1_fused_1 & 1) * 11368) + ((ax0_ax1_fused_1 >> 3) * 196)) + (ax2_1 * 28)) + (ax3_inner_1 * 4)) + ((ax0_ax1_fused_1 & 7) >> 1)) + 5684)] * 7.309447e+01f));
        float v__9 = (v__8) < (2.550000e+02f) ? (v__8) : (2.550000e+02f);
        float v__10 = roundf(((((float)((int32_t)((uint8_t)((v__9) > (0.000000e+00f) ? (v__9) : (0.000000e+00f))))) * 1.368093e-02f) * 7.309447e+01f));
        float v__11 = (v__10) < (2.550000e+02f) ? (v__10) : (2.550000e+02f);
        float v__12 = roundf(((((float)((int32_t)((uint8_t)((v__11) > (0.000000e+00f) ? (v__11) : (0.000000e+00f))))) * 1.368093e-02f) * 7.309447e+01f));
        float v__13 = (v__12) < (2.550000e+02f) ? (v__12) : (2.550000e+02f);
        float v__14 = roundf(((((float)((int32_t)((uint8_t)((v__13) > (0.000000e+00f) ? (v__13) : (0.000000e+00f))))) * 1.368093e-02f) * 7.309447e+01f));
        float v__15 = (v__14) < (2.550000e+02f) ? (v__14) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 49) + (ax2_1 * 7)) + ax3_inner_1)] = (((float)((int32_t)((uint8_t)((v__15) > (0.000000e+00f) ? (v__15) : (0.000000e+00f))))) * 1.368093e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_add_clip_cast_cast_subtract_cast_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 224; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 224; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 3; ++ax4_inner) {
        float v_ = roundf((p0[(((ax4_inner * 50176) + (ax0_ax1_fused_ax2_fused * 224)) + ax3)] * 5.359503e+01f)) + 1.140000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 672) + (ax3 * 3)) + ax4_inner)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 114));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform(float* p0, float* p0_1, float* T_layout_trans, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 812; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 28; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 2; ++ax4_inner) {
        float v_ = roundf((p0_1[(((((ax0_ax1_fused_ax2_fused / 28) * 1568) + (ax4_inner * 784)) + ((ax0_ax1_fused_ax2_fused % 28) * 28)) + ax3)] * 2.592525e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 56) + (ax3 * 2)) + ax4_inner)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_1(float* p0, float* p0_1, float* T_layout_trans, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 406; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        float v_ = roundf((p0_1[(((((ax0_ax1_fused_ax2_fused / 14) * 784) + (ax4_inner * 196)) + ((ax0_ax1_fused_ax2_fused % 14) * 14)) + ax3)] * 7.748970e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 56) + (ax3 * 4)) + ax4_inner)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_2(float* p0, float* p0_1, float* T_layout_trans, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 406; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        float v_ = roundf((p0_1[(((((ax0_ax1_fused_ax2_fused / 14) * 784) + (ax4_inner * 196)) + ((ax0_ax1_fused_ax2_fused % 14) * 14)) + ax3)] * 7.880413e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 56) + (ax3 * 4)) + ax4_inner)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_3(float* p0, float* p0_1, float* T_layout_trans, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 406; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        float v_ = roundf((p0_1[(((((ax0_ax1_fused_ax2_fused / 7) * 196) + (ax4_inner * 49)) + ((ax0_ax1_fused_ax2_fused % 7) * 7)) + ax3)] * 7.309447e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 28) + (ax3 * 4)) + ax4_inner)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_4(float* p0, float* p0_1, float* T_layout_trans, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 406; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        float v_ = roundf((p0_1[(((((ax0_ax1_fused_ax2_fused / 7) * 196) + (ax4_inner * 49)) + ((ax0_ax1_fused_ax2_fused % 7) * 7)) + ax3)] * 7.478393e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 28) + (ax3 * 4)) + ax4_inner)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_5(float* p0, float* p0_1, float* T_layout_trans, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 406; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        float v_ = roundf((p0_1[(((((ax0_ax1_fused_ax2_fused / 7) * 196) + (ax4_inner * 49)) + ((ax0_ax1_fused_ax2_fused % 7) * 7)) + ax3)] * 7.375741e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 28) + (ax3 * 4)) + ax4_inner)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_6(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 64; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      float v_ = roundf((p0[cse_var_1] * 9.966960e+02f));
      float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
      T_layout_trans[cse_var_1] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_1994d658f1d82640_(float* p0, float* p0_1, float* p1, float* T_layout_trans, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* T_multiply_let = (&(global_workspace_47_var[545664]));
  for (int32_t ax1 = 0; ax1 < 58; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 28; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 784) + (ax2 * 28)) + ax3);
        float v_ = roundf((p0[cse_var_1] * 2.592525e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 3.857243e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_47_var[363776]));
  for (int32_t ax1_1 = 0; ax1_1 < 58; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 28; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 28; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 784) + (ax2_1 * 28)) + ax3_1)] = p1[(((((ax1_1 >> 1) * 1568) + (ax2_1 * 56)) + (ax3_1 * 2)) + (ax1_1 & 1))];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_47_var[0]));
  for (int32_t j = 0; j < 45472; ++j) {
    ((float*)concatenate_ext_let)[j] = ((float*)T_multiply_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 45472; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 45472)] = ((float*)T_layout_trans_let)[j_1];
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 812; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_2 = 0; ax3_2 < 28; ++ax3_2) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        float v__2 = roundf((((float*)concatenate_ext_let)[((((((ax4_inner & 1) * 45472) + ((ax0_ax1_fused_ax2_fused / 28) * 1568)) + ((ax4_inner >> 1) * 784)) + ((ax0_ax1_fused_ax2_fused % 28) * 28)) + ax3_2)] * 4.054301e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        float v__4 = roundf(((((float)((int32_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))))) * 2.466516e-02f) * 4.054301e+01f));
        float v__5 = (v__4) < (2.550000e+02f) ? (v__4) : (2.550000e+02f);
        float v__6 = roundf(((((float)((int32_t)((uint8_t)((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))))) * 2.466516e-02f) * 4.054301e+01f));
        float v__7 = (v__6) < (2.550000e+02f) ? (v__6) : (2.550000e+02f);
        float v__8 = roundf(((((float)((int32_t)((uint8_t)((v__7) > (0.000000e+00f) ? (v__7) : (0.000000e+00f))))) * 2.466516e-02f) * 4.054301e+01f));
        float v__9 = (v__8) < (2.550000e+02f) ? (v__8) : (2.550000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 112) + (ax3_2 * 4)) + ax4_inner)] = ((float)((int32_t)((uint8_t)((v__9) > (0.000000e+00f) ? (v__9) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_1994d658f1d82640__1(float* p0, float* p0_1, float* p1, float* T_layout_trans, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  void* T_multiply_let = (&(global_workspace_111_var[272832]));
  for (int32_t ax1 = 0; ax1 < 116; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 196) + (ax2 * 14)) + ax3);
        float v_ = roundf((p0[cse_var_1] * 7.880413e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.268969e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_111_var[181888]));
  for (int32_t ax1_1 = 0; ax1_1 < 116; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 14; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 196) + (ax2_1 * 14)) + ax3_1)] = p1[(((((ax1_1 >> 2) * 784) + (ax2_1 * 56)) + (ax3_1 * 4)) + (ax1_1 & 3))];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_111_var[0]));
  for (int32_t j = 0; j < 22736; ++j) {
    ((float*)concatenate_ext_let)[j] = ((float*)T_multiply_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 22736; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 22736)] = ((float*)T_layout_trans_let)[j_1];
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 812; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_2 = 0; ax3_2 < 14; ++ax3_2) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        float v__2 = roundf((((float*)concatenate_ext_let)[((((((ax4_inner & 1) * 22736) + ((ax0_ax1_fused_ax2_fused / 14) * 392)) + ((ax4_inner >> 1) * 196)) + ((ax0_ax1_fused_ax2_fused % 14) * 14)) + ax3_2)] * 5.901348e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        float v__4 = roundf(((((float)((int32_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))))) * 1.694528e-02f) * 5.901348e+01f));
        float v__5 = (v__4) < (2.550000e+02f) ? (v__4) : (2.550000e+02f);
        float v__6 = roundf(((((float)((int32_t)((uint8_t)((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))))) * 1.694528e-02f) * 5.901348e+01f));
        float v__7 = (v__6) < (2.550000e+02f) ? (v__6) : (2.550000e+02f);
        float v__8 = roundf(((((float)((int32_t)((uint8_t)((v__7) > (0.000000e+00f) ? (v__7) : (0.000000e+00f))))) * 1.694528e-02f) * 5.901348e+01f));
        float v__9 = (v__8) < (2.550000e+02f) ? (v__8) : (2.550000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 56) + (ax3_2 * 4)) + ax4_inner)] = ((float)((int32_t)((uint8_t)((v__9) > (0.000000e+00f) ? (v__9) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_1994d658f1d82640__2(float* p0, float* p0_1, float* p1, float* T_layout_trans, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var) {
  void* T_multiply_let = (&(global_workspace_153_var[136416]));
  for (int32_t ax1 = 0; ax1 < 232; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 49) + (ax2 * 7)) + ax3);
        float v_ = roundf((p0[cse_var_1] * 7.375741e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.355796e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_153_var[90944]));
  for (int32_t ax1_1 = 0; ax1_1 < 232; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 7; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 49) + (ax2_1 * 7)) + ax3_1)] = p1[(((((ax1_1 >> 2) * 196) + (ax2_1 * 28)) + (ax3_1 * 4)) + (ax1_1 & 3))];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_153_var[0]));
  for (int32_t j = 0; j < 11368; ++j) {
    ((float*)concatenate_ext_let)[j] = ((float*)T_multiply_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 11368; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 11368)] = ((float*)T_layout_trans_let)[j_1];
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 812; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_2 = 0; ax3_2 < 7; ++ax3_2) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        float v__2 = roundf((((float*)concatenate_ext_let)[((((((ax4_inner & 1) * 11368) + ((ax0_ax1_fused_ax2_fused / 7) * 98)) + ((ax4_inner >> 1) * 49)) + ((ax0_ax1_fused_ax2_fused % 7) * 7)) + ax3_2)] * 5.812319e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        float v__4 = roundf(((((float)((int32_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))))) * 1.720484e-02f) * 5.812319e+01f));
        float v__5 = (v__4) < (2.550000e+02f) ? (v__4) : (2.550000e+02f);
        float v__6 = roundf(((((float)((int32_t)((uint8_t)((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))))) * 1.720484e-02f) * 5.812319e+01f));
        float v__7 = (v__6) < (2.550000e+02f) ? (v__6) : (2.550000e+02f);
        float v__8 = roundf(((((float)((int32_t)((uint8_t)((v__7) > (0.000000e+00f) ? (v__7) : (0.000000e+00f))))) * 1.720484e-02f) * 5.812319e+01f));
        float v__9 = (v__8) < (2.550000e+02f) ? (v__8) : (2.550000e+02f);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 28) + (ax3_2 * 4)) + ax4_inner)] = ((float)((int32_t)((uint8_t)((v__9) > (0.000000e+00f) ? (v__9) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6_(float* p0, float* p0_1, float* p1, float* T_split, float* T_split_1, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* T_multiply_let = (&(global_workspace_33_var[545664]));
  for (int32_t ax1 = 0; ax1 < 58; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 28; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 784) + (ax2 * 28)) + ax3);
        float v_ = roundf((p0[cse_var_1] * 2.592525e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 3.857243e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_33_var[363776]));
  for (int32_t ax1_1 = 0; ax1_1 < 58; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 28; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 28; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 784) + (ax2_1 * 28)) + ax3_1)] = p1[(((((ax1_1 >> 1) * 1568) + (ax2_1 * 56)) + (ax3_1 * 2)) + (ax1_1 & 1))];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_33_var[0]));
  for (int32_t j = 0; j < 45472; ++j) {
    ((float*)concatenate_ext_let)[j] = ((float*)T_multiply_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 45472; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 45472)] = ((float*)T_layout_trans_let)[j_1];
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 58; ++ax0_ax1_fused) {
    for (int32_t ax2_2 = 0; ax2_2 < 28; ++ax2_2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 4) + (ax3_inner >> 2)) < 7) {
            int32_t cse_var_3 = (ax2_2 * 28);
            int32_t cse_var_2 = (ax3_outer * 16);
            float v__2 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused & 1) * 45472) + ((ax0_ax1_fused >> 1) * 784)) + cse_var_3) + cse_var_2) + ax3_inner)] * 2.592525e+01f));
            float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
            float v__4 = roundf(((((float)((int32_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))))) * 3.857243e-02f) * 2.592525e+01f));
            float v__5 = (v__4) < (2.550000e+02f) ? (v__4) : (2.550000e+02f);
            float v__6 = roundf(((((float)((int32_t)((uint8_t)((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))))) * 3.857243e-02f) * 2.592525e+01f));
            float v__7 = (v__6) < (2.550000e+02f) ? (v__6) : (2.550000e+02f);
            float v__8 = roundf(((((float)((int32_t)((uint8_t)((v__7) > (0.000000e+00f) ? (v__7) : (0.000000e+00f))))) * 3.857243e-02f) * 2.592525e+01f));
            float v__9 = (v__8) < (2.550000e+02f) ? (v__8) : (2.550000e+02f);
            T_split[((((ax0_ax1_fused * 784) + cse_var_3) + cse_var_2) + ax3_inner)] = (((float)((int32_t)((uint8_t)((v__9) > (0.000000e+00f) ? (v__9) : (0.000000e+00f))))) * 3.857243e-02f);
          }
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 58; ++ax0_ax1_fused_1) {
    for (int32_t ax2_3 = 0; ax2_3 < 28; ++ax2_3) {
      for (int32_t ax3_outer_1 = 0; ax3_outer_1 < 2; ++ax3_outer_1) {
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 16; ++ax3_inner_1) {
          if (((ax3_outer_1 * 4) + (ax3_inner_1 >> 2)) < 7) {
            int32_t cse_var_5 = (ax2_3 * 28);
            int32_t cse_var_4 = (ax3_outer_1 * 16);
            float v__10 = roundf((((float*)concatenate_ext_let)[(((((((ax0_ax1_fused_1 & 1) * 45472) + ((ax0_ax1_fused_1 >> 1) * 784)) + cse_var_5) + cse_var_4) + ax3_inner_1) + 22736)] * 2.592525e+01f));
            float v__11 = (v__10) < (2.550000e+02f) ? (v__10) : (2.550000e+02f);
            float v__12 = roundf(((((float)((int32_t)((uint8_t)((v__11) > (0.000000e+00f) ? (v__11) : (0.000000e+00f))))) * 3.857243e-02f) * 2.592525e+01f));
            float v__13 = (v__12) < (2.550000e+02f) ? (v__12) : (2.550000e+02f);
            float v__14 = roundf(((((float)((int32_t)((uint8_t)((v__13) > (0.000000e+00f) ? (v__13) : (0.000000e+00f))))) * 3.857243e-02f) * 2.592525e+01f));
            float v__15 = (v__14) < (2.550000e+02f) ? (v__14) : (2.550000e+02f);
            float v__16 = roundf(((((float)((int32_t)((uint8_t)((v__15) > (0.000000e+00f) ? (v__15) : (0.000000e+00f))))) * 3.857243e-02f) * 2.592525e+01f));
            float v__17 = (v__16) < (2.550000e+02f) ? (v__16) : (2.550000e+02f);
            T_split_1[((((ax0_ax1_fused_1 * 784) + cse_var_5) + cse_var_4) + ax3_inner_1)] = (((float)((int32_t)((uint8_t)((v__17) > (0.000000e+00f) ? (v__17) : (0.000000e+00f))))) * 3.857243e-02f);
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
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6__1(float* p0, float* p0_1, float* p1, float* T_split, float* T_split_1, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* T_multiply_let = (&(global_workspace_69_var[181888]));
  for (int32_t ax1 = 0; ax1 < 116; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 196) + (ax2 * 14)) + ax3);
        float v_ = roundf((p0[cse_var_1] * 7.748970e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.290494e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_69_var[272832]));
  for (int32_t ax1_1 = 0; ax1_1 < 116; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 14; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 196) + (ax2_1 * 14)) + ax3_1)] = p1[(((((ax1_1 >> 2) * 784) + (ax2_1 * 56)) + (ax3_1 * 4)) + (ax1_1 & 3))];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_69_var[0]));
  for (int32_t j = 0; j < 22736; ++j) {
    ((float*)concatenate_ext_let)[j] = ((float*)T_multiply_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 22736; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 22736)] = ((float*)T_layout_trans_let)[j_1];
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 116; ++ax0_ax1_fused) {
    for (int32_t ax2_2 = 0; ax2_2 < 14; ++ax2_2) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        int32_t cse_var_2 = (ax2_2 * 14);
        float v__2 = roundf((((float*)concatenate_ext_let)[(((((ax0_ax1_fused & 1) * 22736) + ((ax0_ax1_fused >> 1) * 196)) + cse_var_2) + ax3_inner)] * 7.748970e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        float v__4 = roundf(((((float)((int32_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))))) * 1.290494e-02f) * 7.748970e+01f));
        float v__5 = (v__4) < (2.550000e+02f) ? (v__4) : (2.550000e+02f);
        float v__6 = roundf(((((float)((int32_t)((uint8_t)((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))))) * 1.290494e-02f) * 7.748970e+01f));
        float v__7 = (v__6) < (2.550000e+02f) ? (v__6) : (2.550000e+02f);
        float v__8 = roundf(((((float)((int32_t)((uint8_t)((v__7) > (0.000000e+00f) ? (v__7) : (0.000000e+00f))))) * 1.290494e-02f) * 7.748970e+01f));
        float v__9 = (v__8) < (2.550000e+02f) ? (v__8) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 196) + cse_var_2) + ax3_inner)] = (((float)((int32_t)((uint8_t)((v__9) > (0.000000e+00f) ? (v__9) : (0.000000e+00f))))) * 1.290494e-02f);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 116; ++ax0_ax1_fused_1) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 14; ++ax3_inner_1) {
        int32_t cse_var_3 = (ax2_3 * 14);
        float v__10 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused_1 & 1) * 22736) + ((ax0_ax1_fused_1 >> 1) * 196)) + cse_var_3) + ax3_inner_1) + 11368)] * 7.748970e+01f));
        float v__11 = (v__10) < (2.550000e+02f) ? (v__10) : (2.550000e+02f);
        float v__12 = roundf(((((float)((int32_t)((uint8_t)((v__11) > (0.000000e+00f) ? (v__11) : (0.000000e+00f))))) * 1.290494e-02f) * 7.748970e+01f));
        float v__13 = (v__12) < (2.550000e+02f) ? (v__12) : (2.550000e+02f);
        float v__14 = roundf(((((float)((int32_t)((uint8_t)((v__13) > (0.000000e+00f) ? (v__13) : (0.000000e+00f))))) * 1.290494e-02f) * 7.748970e+01f));
        float v__15 = (v__14) < (2.550000e+02f) ? (v__14) : (2.550000e+02f);
        float v__16 = roundf(((((float)((int32_t)((uint8_t)((v__15) > (0.000000e+00f) ? (v__15) : (0.000000e+00f))))) * 1.290494e-02f) * 7.748970e+01f));
        float v__17 = (v__16) < (2.550000e+02f) ? (v__16) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 196) + cse_var_3) + ax3_inner_1)] = (((float)((int32_t)((uint8_t)((v__17) > (0.000000e+00f) ? (v__17) : (0.000000e+00f))))) * 1.290494e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6__2(float* p0, float* p0_1, float* p1, float* T_split, float* T_split_1, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  void* T_multiply_let = (&(global_workspace_101_var[272832]));
  for (int32_t ax1 = 0; ax1 < 116; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 196) + (ax2 * 14)) + ax3);
        float v_ = roundf((p0[cse_var_1] * 7.748970e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.290494e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_101_var[181888]));
  for (int32_t ax1_1 = 0; ax1_1 < 116; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 14; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 196) + (ax2_1 * 14)) + ax3_1)] = p1[(((((ax1_1 >> 2) * 784) + (ax2_1 * 56)) + (ax3_1 * 4)) + (ax1_1 & 3))];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_101_var[0]));
  for (int32_t j = 0; j < 22736; ++j) {
    ((float*)concatenate_ext_let)[j] = ((float*)T_multiply_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 22736; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 22736)] = ((float*)T_layout_trans_let)[j_1];
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 116; ++ax0_ax1_fused) {
    for (int32_t ax2_2 = 0; ax2_2 < 14; ++ax2_2) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        int32_t cse_var_2 = (ax2_2 * 14);
        float v__2 = roundf((((float*)concatenate_ext_let)[(((((ax0_ax1_fused & 1) * 22736) + ((ax0_ax1_fused >> 1) * 196)) + cse_var_2) + ax3_inner)] * 7.880413e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        float v__4 = roundf(((((float)((int32_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))))) * 1.268969e-02f) * 7.880413e+01f));
        float v__5 = (v__4) < (2.550000e+02f) ? (v__4) : (2.550000e+02f);
        float v__6 = roundf(((((float)((int32_t)((uint8_t)((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))))) * 1.268969e-02f) * 7.880413e+01f));
        float v__7 = (v__6) < (2.550000e+02f) ? (v__6) : (2.550000e+02f);
        float v__8 = roundf(((((float)((int32_t)((uint8_t)((v__7) > (0.000000e+00f) ? (v__7) : (0.000000e+00f))))) * 1.268969e-02f) * 7.880413e+01f));
        float v__9 = (v__8) < (2.550000e+02f) ? (v__8) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 196) + cse_var_2) + ax3_inner)] = (((float)((int32_t)((uint8_t)((v__9) > (0.000000e+00f) ? (v__9) : (0.000000e+00f))))) * 1.268969e-02f);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 116; ++ax0_ax1_fused_1) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 14; ++ax3_inner_1) {
        int32_t cse_var_3 = (ax2_3 * 14);
        float v__10 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused_1 & 1) * 22736) + ((ax0_ax1_fused_1 >> 1) * 196)) + cse_var_3) + ax3_inner_1) + 11368)] * 7.880413e+01f));
        float v__11 = (v__10) < (2.550000e+02f) ? (v__10) : (2.550000e+02f);
        float v__12 = roundf(((((float)((int32_t)((uint8_t)((v__11) > (0.000000e+00f) ? (v__11) : (0.000000e+00f))))) * 1.268969e-02f) * 7.880413e+01f));
        float v__13 = (v__12) < (2.550000e+02f) ? (v__12) : (2.550000e+02f);
        float v__14 = roundf(((((float)((int32_t)((uint8_t)((v__13) > (0.000000e+00f) ? (v__13) : (0.000000e+00f))))) * 1.268969e-02f) * 7.880413e+01f));
        float v__15 = (v__14) < (2.550000e+02f) ? (v__14) : (2.550000e+02f);
        float v__16 = roundf(((((float)((int32_t)((uint8_t)((v__15) > (0.000000e+00f) ? (v__15) : (0.000000e+00f))))) * 1.268969e-02f) * 7.880413e+01f));
        float v__17 = (v__16) < (2.550000e+02f) ? (v__16) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 196) + cse_var_3) + ax3_inner_1)] = (((float)((int32_t)((uint8_t)((v__17) > (0.000000e+00f) ? (v__17) : (0.000000e+00f))))) * 1.268969e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6__3(float* p0, float* p0_1, float* p1, float* T_split, float* T_split_1, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  void* T_multiply_let = (&(global_workspace_133_var[136416]));
  for (int32_t ax1 = 0; ax1 < 232; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 49) + (ax2 * 7)) + ax3);
        float v_ = roundf((p0[cse_var_1] * 7.309447e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.368093e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_133_var[90944]));
  for (int32_t ax1_1 = 0; ax1_1 < 232; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 7; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 49) + (ax2_1 * 7)) + ax3_1)] = p1[(((((ax1_1 >> 2) * 196) + (ax2_1 * 28)) + (ax3_1 * 4)) + (ax1_1 & 3))];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_133_var[0]));
  for (int32_t j = 0; j < 11368; ++j) {
    ((float*)concatenate_ext_let)[j] = ((float*)T_multiply_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 11368; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 11368)] = ((float*)T_layout_trans_let)[j_1];
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 232; ++ax0_ax1_fused) {
    for (int32_t ax2_2 = 0; ax2_2 < 7; ++ax2_2) {
      for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
        int32_t cse_var_2 = (ax2_2 * 7);
        float v__2 = roundf((((float*)concatenate_ext_let)[(((((ax0_ax1_fused & 1) * 11368) + ((ax0_ax1_fused >> 1) * 49)) + cse_var_2) + ax3_inner)] * 7.478393e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        float v__4 = roundf(((((float)((int32_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))))) * 1.337186e-02f) * 7.478393e+01f));
        float v__5 = (v__4) < (2.550000e+02f) ? (v__4) : (2.550000e+02f);
        float v__6 = roundf(((((float)((int32_t)((uint8_t)((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))))) * 1.337186e-02f) * 7.478393e+01f));
        float v__7 = (v__6) < (2.550000e+02f) ? (v__6) : (2.550000e+02f);
        float v__8 = roundf(((((float)((int32_t)((uint8_t)((v__7) > (0.000000e+00f) ? (v__7) : (0.000000e+00f))))) * 1.337186e-02f) * 7.478393e+01f));
        float v__9 = (v__8) < (2.550000e+02f) ? (v__8) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 49) + cse_var_2) + ax3_inner)] = (((float)((int32_t)((uint8_t)((v__9) > (0.000000e+00f) ? (v__9) : (0.000000e+00f))))) * 1.337186e-02f);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 232; ++ax0_ax1_fused_1) {
    for (int32_t ax2_3 = 0; ax2_3 < 7; ++ax2_3) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 7; ++ax3_inner_1) {
        int32_t cse_var_3 = (ax2_3 * 7);
        float v__10 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused_1 & 1) * 11368) + ((ax0_ax1_fused_1 >> 1) * 49)) + cse_var_3) + ax3_inner_1) + 5684)] * 7.478393e+01f));
        float v__11 = (v__10) < (2.550000e+02f) ? (v__10) : (2.550000e+02f);
        float v__12 = roundf(((((float)((int32_t)((uint8_t)((v__11) > (0.000000e+00f) ? (v__11) : (0.000000e+00f))))) * 1.337186e-02f) * 7.478393e+01f));
        float v__13 = (v__12) < (2.550000e+02f) ? (v__12) : (2.550000e+02f);
        float v__14 = roundf(((((float)((int32_t)((uint8_t)((v__13) > (0.000000e+00f) ? (v__13) : (0.000000e+00f))))) * 1.337186e-02f) * 7.478393e+01f));
        float v__15 = (v__14) < (2.550000e+02f) ? (v__14) : (2.550000e+02f);
        float v__16 = roundf(((((float)((int32_t)((uint8_t)((v__15) > (0.000000e+00f) ? (v__15) : (0.000000e+00f))))) * 1.337186e-02f) * 7.478393e+01f));
        float v__17 = (v__16) < (2.550000e+02f) ? (v__16) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 49) + cse_var_3) + ax3_inner_1)] = (((float)((int32_t)((uint8_t)((v__17) > (0.000000e+00f) ? (v__17) : (0.000000e+00f))))) * 1.337186e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6__4(float* p0, float* p0_1, float* p1, float* T_split, float* T_split_1, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
  void* T_multiply_let = (&(global_workspace_143_var[136416]));
  for (int32_t ax1 = 0; ax1 < 232; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 49) + (ax2 * 7)) + ax3);
        float v_ = roundf((p0[cse_var_1] * 7.478393e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.337186e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_143_var[90944]));
  for (int32_t ax1_1 = 0; ax1_1 < 232; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 7; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 49) + (ax2_1 * 7)) + ax3_1)] = p1[(((((ax1_1 >> 2) * 196) + (ax2_1 * 28)) + (ax3_1 * 4)) + (ax1_1 & 3))];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_143_var[0]));
  for (int32_t j = 0; j < 11368; ++j) {
    ((float*)concatenate_ext_let)[j] = ((float*)T_multiply_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 11368; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 11368)] = ((float*)T_layout_trans_let)[j_1];
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 232; ++ax0_ax1_fused) {
    for (int32_t ax2_2 = 0; ax2_2 < 7; ++ax2_2) {
      for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
        int32_t cse_var_2 = (ax2_2 * 7);
        float v__2 = roundf((((float*)concatenate_ext_let)[(((((ax0_ax1_fused & 1) * 11368) + ((ax0_ax1_fused >> 1) * 49)) + cse_var_2) + ax3_inner)] * 7.375741e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        float v__4 = roundf(((((float)((int32_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))))) * 1.355796e-02f) * 7.375741e+01f));
        float v__5 = (v__4) < (2.550000e+02f) ? (v__4) : (2.550000e+02f);
        float v__6 = roundf(((((float)((int32_t)((uint8_t)((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))))) * 1.355796e-02f) * 7.375741e+01f));
        float v__7 = (v__6) < (2.550000e+02f) ? (v__6) : (2.550000e+02f);
        float v__8 = roundf(((((float)((int32_t)((uint8_t)((v__7) > (0.000000e+00f) ? (v__7) : (0.000000e+00f))))) * 1.355796e-02f) * 7.375741e+01f));
        float v__9 = (v__8) < (2.550000e+02f) ? (v__8) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 49) + cse_var_2) + ax3_inner)] = (((float)((int32_t)((uint8_t)((v__9) > (0.000000e+00f) ? (v__9) : (0.000000e+00f))))) * 1.355796e-02f);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 232; ++ax0_ax1_fused_1) {
    for (int32_t ax2_3 = 0; ax2_3 < 7; ++ax2_3) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 7; ++ax3_inner_1) {
        int32_t cse_var_3 = (ax2_3 * 7);
        float v__10 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused_1 & 1) * 11368) + ((ax0_ax1_fused_1 >> 1) * 49)) + cse_var_3) + ax3_inner_1) + 5684)] * 7.375741e+01f));
        float v__11 = (v__10) < (2.550000e+02f) ? (v__10) : (2.550000e+02f);
        float v__12 = roundf(((((float)((int32_t)((uint8_t)((v__11) > (0.000000e+00f) ? (v__11) : (0.000000e+00f))))) * 1.355796e-02f) * 7.375741e+01f));
        float v__13 = (v__12) < (2.550000e+02f) ? (v__12) : (2.550000e+02f);
        float v__14 = roundf(((((float)((int32_t)((uint8_t)((v__13) > (0.000000e+00f) ? (v__13) : (0.000000e+00f))))) * 1.355796e-02f) * 7.375741e+01f));
        float v__15 = (v__14) < (2.550000e+02f) ? (v__14) : (2.550000e+02f);
        float v__16 = roundf(((((float)((int32_t)((uint8_t)((v__15) > (0.000000e+00f) ? (v__15) : (0.000000e+00f))))) * 1.355796e-02f) * 7.375741e+01f));
        float v__17 = (v__16) < (2.550000e+02f) ? (v__16) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 49) + cse_var_3) + ax3_inner_1)] = (((float)((int32_t)((uint8_t)((v__17) > (0.000000e+00f) ? (v__17) : (0.000000e+00f))))) * 1.355796e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 336; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 28; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 2; ++ax4_inner) {
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 56) + (ax3 * 2)) + ax4_inner)] = p0[((((((ax0_ax1_fused_ax2_fused / 56) * 3136) + ((ax0_ax1_fused_ax2_fused % 28) * 112)) + (ax3 * 4)) + (((ax0_ax1_fused_ax2_fused % 56) / 28) * 2)) + ax4_inner)];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_1(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 672; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 56; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 2; ++ax4_inner) {
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 112) + (ax3 * 2)) + ax4_inner)] = p0[((((((ax0_ax1_fused_ax2_fused / 112) * 12544) + ((ax0_ax1_fused_ax2_fused % 56) * 224)) + (ax3 * 4)) + (((ax0_ax1_fused_ax2_fused % 112) / 56) * 2)) + ax4_inner)];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean(float* p0, float* T_divide, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var) {
  void* p0_red_let = (&(global_workspace_157_var[200704]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 256; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      ((float*)p0_red_let)[((ax0_ax1_fused * 4) + ax2)] = 0.000000e+00f;
      for (int32_t k2 = 0; k2 < 7; ++k2) {
        for (int32_t k3 = 0; k3 < 7; ++k3) {
          int32_t cse_var_1 = ((ax0_ax1_fused * 4) + ax2);
          ((float*)p0_red_let)[cse_var_1] = (((float*)p0_red_let)[cse_var_1] + p0[((((ax0_ax1_fused * 196) + (k2 * 28)) + (k3 * 4)) + ax2)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 256; ++ax0_ax1_fused_1) {
    for (int32_t ax2_inner = 0; ax2_inner < 4; ++ax2_inner) {
      int32_t cse_var_2 = ((ax0_ax1_fused_1 * 4) + ax2_inner);
      T_divide[cse_var_2] = (((float*)p0_red_let)[cse_var_2] * 2.040816e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast(float* p0, float* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_2_let = (&(global_const_workspace_16_var[9081520]));
  void* fused_constant_3_let = (&(global_const_workspace_16_var[8985168]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 1624; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_17_var[301056]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_17_var[301504]));
    for (int32_t ow_c_outer = 0; ow_c_outer < 2; ++ow_c_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
        ((float*)conv2d_NCHWc_global_let)[((ow_c_outer * 56) + oc_block_c_init)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 2; ++oc_block_c_init_1) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_1) + 2)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 2; ++oc_block_c_init_2) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_2) + 4)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 2; ++oc_block_c_init_3) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_3) + 6)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 2; ++oc_block_c_init_4) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_4) + 8)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 2; ++oc_block_c_init_5) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_5) + 10)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 2; ++oc_block_c_init_6) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_6) + 12)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 2; ++oc_block_c_init_7) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_7) + 14)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 2; ++oc_block_c_init_8) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_8) + 16)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 2; ++oc_block_c_init_9) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_9) + 18)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 2; ++oc_block_c_init_10) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_10) + 20)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 2; ++oc_block_c_init_11) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_11) + 22)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 2; ++oc_block_c_init_12) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_12) + 24)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 2; ++oc_block_c_init_13) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_13) + 26)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 2; ++oc_block_c_init_14) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_14) + 28)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 2; ++oc_block_c_init_15) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_15) + 30)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 2; ++oc_block_c_init_16) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_16) + 32)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 2; ++oc_block_c_init_17) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_17) + 34)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 2; ++oc_block_c_init_18) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_18) + 36)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 2; ++oc_block_c_init_19) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_19) + 38)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 2; ++oc_block_c_init_20) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_20) + 40)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 2; ++oc_block_c_init_21) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_21) + 42)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 2; ++oc_block_c_init_22) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_22) + 44)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 2; ++oc_block_c_init_23) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_23) + 46)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 2; ++oc_block_c_init_24) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_24) + 48)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 2; ++oc_block_c_init_25) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_25) + 50)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 2; ++oc_block_c_init_26) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_26) + 52)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 2; ++oc_block_c_init_27) {
        ((float*)conv2d_NCHWc_global_let)[(((ow_c_outer * 56) + oc_block_c_init_27) + 54)] = 0.000000e+00f;
      }
      for (int32_t ic_outer = 0; ic_outer < 12; ++ic_outer) {
        for (int32_t ic_inner = 0; ic_inner < 2; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
            int32_t cse_var_2 = (ow_c_outer * 56);
            int32_t cse_var_1 = (cse_var_2 + oc_block_c);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_2) + ic_inner)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 2; ++oc_block_c_1) {
            int32_t cse_var_4 = (ow_c_outer * 56);
            int32_t cse_var_3 = ((cse_var_4 + oc_block_c_1) + 2);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_4) + ic_inner) + 2)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 2; ++oc_block_c_2) {
            int32_t cse_var_6 = (ow_c_outer * 56);
            int32_t cse_var_5 = ((cse_var_6 + oc_block_c_2) + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_6) + ic_inner) + 4)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 2; ++oc_block_c_3) {
            int32_t cse_var_8 = (ow_c_outer * 56);
            int32_t cse_var_7 = ((cse_var_8 + oc_block_c_3) + 6);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_8) + ic_inner) + 6)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 2; ++oc_block_c_4) {
            int32_t cse_var_10 = (ow_c_outer * 56);
            int32_t cse_var_9 = ((cse_var_10 + oc_block_c_4) + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_10) + ic_inner) + 8)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 2; ++oc_block_c_5) {
            int32_t cse_var_12 = (ow_c_outer * 56);
            int32_t cse_var_11 = ((cse_var_12 + oc_block_c_5) + 10);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_12) + ic_inner) + 10)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 2; ++oc_block_c_6) {
            int32_t cse_var_14 = (ow_c_outer * 56);
            int32_t cse_var_13 = ((cse_var_14 + oc_block_c_6) + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_14) + ic_inner) + 12)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 2; ++oc_block_c_7) {
            int32_t cse_var_16 = (ow_c_outer * 56);
            int32_t cse_var_15 = ((cse_var_16 + oc_block_c_7) + 14);
            ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_16) + ic_inner) + 14)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 2; ++oc_block_c_8) {
            int32_t cse_var_18 = (ow_c_outer * 56);
            int32_t cse_var_17 = ((cse_var_18 + oc_block_c_8) + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_18) + ic_inner) + 16)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 2; ++oc_block_c_9) {
            int32_t cse_var_20 = (ow_c_outer * 56);
            int32_t cse_var_19 = ((cse_var_20 + oc_block_c_9) + 18);
            ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_20) + ic_inner) + 18)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 2; ++oc_block_c_10) {
            int32_t cse_var_22 = (ow_c_outer * 56);
            int32_t cse_var_21 = ((cse_var_22 + oc_block_c_10) + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_22) + ic_inner) + 20)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 2; ++oc_block_c_11) {
            int32_t cse_var_24 = (ow_c_outer * 56);
            int32_t cse_var_23 = ((cse_var_24 + oc_block_c_11) + 22);
            ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_24) + ic_inner) + 22)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 2; ++oc_block_c_12) {
            int32_t cse_var_26 = (ow_c_outer * 56);
            int32_t cse_var_25 = ((cse_var_26 + oc_block_c_12) + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_26) + ic_inner) + 24)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_12)]));
          }
          for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 2; ++oc_block_c_13) {
            int32_t cse_var_28 = (ow_c_outer * 56);
            int32_t cse_var_27 = ((cse_var_28 + oc_block_c_13) + 26);
            ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_28) + ic_inner) + 26)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_13)]));
          }
          for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 2; ++oc_block_c_14) {
            int32_t cse_var_30 = (ow_c_outer * 56);
            int32_t cse_var_29 = ((cse_var_30 + oc_block_c_14) + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_29] = (((float*)conv2d_NCHWc_global_let)[cse_var_29] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_30) + ic_inner) + 28)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_14)]));
          }
          for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 2; ++oc_block_c_15) {
            int32_t cse_var_32 = (ow_c_outer * 56);
            int32_t cse_var_31 = ((cse_var_32 + oc_block_c_15) + 30);
            ((float*)conv2d_NCHWc_global_let)[cse_var_31] = (((float*)conv2d_NCHWc_global_let)[cse_var_31] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_32) + ic_inner) + 30)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_15)]));
          }
          for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 2; ++oc_block_c_16) {
            int32_t cse_var_34 = (ow_c_outer * 56);
            int32_t cse_var_33 = ((cse_var_34 + oc_block_c_16) + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_33] = (((float*)conv2d_NCHWc_global_let)[cse_var_33] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_34) + ic_inner) + 32)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_16)]));
          }
          for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 2; ++oc_block_c_17) {
            int32_t cse_var_36 = (ow_c_outer * 56);
            int32_t cse_var_35 = ((cse_var_36 + oc_block_c_17) + 34);
            ((float*)conv2d_NCHWc_global_let)[cse_var_35] = (((float*)conv2d_NCHWc_global_let)[cse_var_35] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_36) + ic_inner) + 34)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_17)]));
          }
          for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 2; ++oc_block_c_18) {
            int32_t cse_var_38 = (ow_c_outer * 56);
            int32_t cse_var_37 = ((cse_var_38 + oc_block_c_18) + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_37] = (((float*)conv2d_NCHWc_global_let)[cse_var_37] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_38) + ic_inner) + 36)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_18)]));
          }
          for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 2; ++oc_block_c_19) {
            int32_t cse_var_40 = (ow_c_outer * 56);
            int32_t cse_var_39 = ((cse_var_40 + oc_block_c_19) + 38);
            ((float*)conv2d_NCHWc_global_let)[cse_var_39] = (((float*)conv2d_NCHWc_global_let)[cse_var_39] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_40) + ic_inner) + 38)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_19)]));
          }
          for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 2; ++oc_block_c_20) {
            int32_t cse_var_42 = (ow_c_outer * 56);
            int32_t cse_var_41 = ((cse_var_42 + oc_block_c_20) + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_41] = (((float*)conv2d_NCHWc_global_let)[cse_var_41] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_42) + ic_inner) + 40)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_20)]));
          }
          for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 2; ++oc_block_c_21) {
            int32_t cse_var_44 = (ow_c_outer * 56);
            int32_t cse_var_43 = ((cse_var_44 + oc_block_c_21) + 42);
            ((float*)conv2d_NCHWc_global_let)[cse_var_43] = (((float*)conv2d_NCHWc_global_let)[cse_var_43] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_44) + ic_inner) + 42)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_21)]));
          }
          for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 2; ++oc_block_c_22) {
            int32_t cse_var_46 = (ow_c_outer * 56);
            int32_t cse_var_45 = ((cse_var_46 + oc_block_c_22) + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_45] = (((float*)conv2d_NCHWc_global_let)[cse_var_45] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_46) + ic_inner) + 44)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_22)]));
          }
          for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 2; ++oc_block_c_23) {
            int32_t cse_var_48 = (ow_c_outer * 56);
            int32_t cse_var_47 = ((cse_var_48 + oc_block_c_23) + 46);
            ((float*)conv2d_NCHWc_global_let)[cse_var_47] = (((float*)conv2d_NCHWc_global_let)[cse_var_47] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_48) + ic_inner) + 46)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_23)]));
          }
          for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 2; ++oc_block_c_24) {
            int32_t cse_var_50 = (ow_c_outer * 56);
            int32_t cse_var_49 = ((cse_var_50 + oc_block_c_24) + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_49] = (((float*)conv2d_NCHWc_global_let)[cse_var_49] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_50) + ic_inner) + 48)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_24)]));
          }
          for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 2; ++oc_block_c_25) {
            int32_t cse_var_52 = (ow_c_outer * 56);
            int32_t cse_var_51 = ((cse_var_52 + oc_block_c_25) + 50);
            ((float*)conv2d_NCHWc_global_let)[cse_var_51] = (((float*)conv2d_NCHWc_global_let)[cse_var_51] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_52) + ic_inner) + 50)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_25)]));
          }
          for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 2; ++oc_block_c_26) {
            int32_t cse_var_54 = (ow_c_outer * 56);
            int32_t cse_var_53 = ((cse_var_54 + oc_block_c_26) + 52);
            ((float*)conv2d_NCHWc_global_let)[cse_var_53] = (((float*)conv2d_NCHWc_global_let)[cse_var_53] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_54) + ic_inner) + 52)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_26)]));
          }
          for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 2; ++oc_block_c_27) {
            int32_t cse_var_56 = (ow_c_outer * 56);
            int32_t cse_var_55 = ((cse_var_56 + oc_block_c_27) + 54);
            ((float*)conv2d_NCHWc_global_let)[cse_var_55] = (((float*)conv2d_NCHWc_global_let)[cse_var_55] + (p0[(((((ic_outer * 6272) + ((ax0_ax1_fused_ax2_outer_fused % 56) * 112)) + cse_var_56) + ic_inner) + 54)] * ((float*)fused_constant_3_let)[(((((ax0_ax1_fused_ax2_outer_fused / 56) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_27)]));
          }
        }
      }
    }
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
          int32_t cse_var_57 = (((ow_outer * 56) + (ow_inner * 2)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_57] = ((float*)conv2d_NCHWc_global_let)[cse_var_57];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
          int32_t cse_var_59 = (ax3_outer * 56);
          int32_t cse_var_58 = (ax3_inner * 2);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_59 + cse_var_58) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_2_let)[(((ax0_ax1_fused_ax2_outer_fused / 56) * 2) + ax4)]) * 5.404069e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_59) + cse_var_58) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_1(float* p0, float* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_4_let = (&(global_const_workspace_26_var[9081040]));
  void* fused_constant_6_let = (&(global_const_workspace_26_var[8876128]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 812; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_27_var[181888]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_27_var[182112]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 2; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 2)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 2; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 2; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 6)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 2; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 2; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 10)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 2; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 2; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 14)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 2; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 2; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 18)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 2; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 2; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 22)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 2; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 2; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 26)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 2; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 2; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 30)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 2; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 2; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 34)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 2; ++oc_block_c_init_18) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 2; ++oc_block_c_init_19) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 38)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 2; ++oc_block_c_init_20) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_20 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 2; ++oc_block_c_init_21) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_21 + 42)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 2; ++oc_block_c_init_22) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_22 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 2; ++oc_block_c_init_23) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_23 + 46)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 2; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 2; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 50)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 2; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 2; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 54)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 2; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 2; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 2);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 2)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 2; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 4)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 2; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 6);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 6)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 2; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 8)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 2; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 10);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 10)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 2; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 12)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 2; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 14);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 14)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 2; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 16)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 2; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 18);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 18)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 2; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 20)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 2; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 22);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 22)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 2; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 24)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 2; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 26);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 26)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 2; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 28)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 2; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 30);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 30)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 2; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 32)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 2; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 34);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 34)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 2; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 36)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 2; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 38);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 38)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 2; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 40)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 2; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 42);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 42)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 2; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 44)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 2; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 46);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 46)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 2; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 48)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 2; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 50);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 50)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 2; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 52)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 2; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 54);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 54)] * ((float*)fused_constant_6_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
        int32_t cse_var_28 = ((ow_inner * 2) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
        int32_t cse_var_29 = (ax3_inner * 2);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_29 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_4_let)[(((ax0_ax1_fused_ax2_outer_fused / 28) * 2) + ax4)]) * 8.990323e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_outer_fused * 56) + cse_var_29) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_10(float* p0, float* T_cast, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_23_let = (&(global_const_workspace_94_var[9072384]));
  void* fused_constant_35_let = (&(global_const_workspace_94_var[8095680]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_95_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_95_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_35_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_23_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 9.188915e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_11(float* p0, float* T_cast, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_25_let = (&(global_const_workspace_104_var[9071456]));
  void* fused_constant_38_let = (&(global_const_workspace_104_var[7988032]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_105_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_105_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_38_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_25_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 9.168002e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_12(float* p0, float* T_cast, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_28_let = (&(global_const_workspace_116_var[9064096]));
  void* fused_constant_43_let = (&(global_const_workspace_116_var[7503616]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 406; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_117_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_117_var[448]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 58; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_43_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_28_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 8.107296e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_13(float* p0, float* T_cast, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_30_let = (&(global_const_workspace_126_var[9062240]));
  void* fused_constant_46_let = (&(global_const_workspace_126_var[7073024]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 406; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_127_var[45472]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_127_var[45584]));
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
    for (int32_t ic_outer = 0; ic_outer < 58; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner)] * ((float*)fused_constant_46_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 4)] * ((float*)fused_constant_46_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 8)] * ((float*)fused_constant_46_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 12)] * ((float*)fused_constant_46_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 16)] * ((float*)fused_constant_46_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 20)] * ((float*)fused_constant_46_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 24)] * ((float*)fused_constant_46_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_7 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_7] = ((float*)conv2d_NCHWc_global_let)[cse_var_7];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_8 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_8 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_30_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 9.107412e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_outer_fused * 28) + cse_var_8) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_14(float* p0, float* T_cast, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_32_let = (&(global_const_workspace_136_var[9060384]));
  void* fused_constant_49_let = (&(global_const_workspace_136_var[6642432]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 406; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_137_var[45472]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_137_var[45584]));
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
    for (int32_t ic_outer = 0; ic_outer < 58; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner)] * ((float*)fused_constant_49_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 4)] * ((float*)fused_constant_49_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 8)] * ((float*)fused_constant_49_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 12)] * ((float*)fused_constant_49_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 16)] * ((float*)fused_constant_49_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 20)] * ((float*)fused_constant_49_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 24)] * ((float*)fused_constant_49_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_7 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_7] = ((float*)conv2d_NCHWc_global_let)[cse_var_7];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_8 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_8 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_32_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 1.092545e+02f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_outer_fused * 28) + cse_var_8) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_15(float* p0, float* T_cast, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_34_let = (&(global_const_workspace_146_var[9058528]));
  void* fused_constant_52_let = (&(global_const_workspace_146_var[6211840]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 406; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_147_var[45472]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_147_var[45584]));
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
    for (int32_t ic_outer = 0; ic_outer < 58; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 4)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 8)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 12)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 16)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 20)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 24)] * ((float*)fused_constant_52_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_7 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_7] = ((float*)conv2d_NCHWc_global_let)[cse_var_7];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_8 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_8 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_34_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 1.132940e+02f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_outer_fused * 28) + cse_var_8) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_2(float* p0, float* T_cast, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_6_let = (&(global_const_workspace_34_var[9080560]));
  void* fused_constant_9_let = (&(global_const_workspace_34_var[8849216]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 812; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_35_var[181888]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_35_var[182112]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 2; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 2)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 2; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 2; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 6)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 2; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 2; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 10)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 2; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 2; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 14)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 2; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 2; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 18)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 2; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 2; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 22)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 2; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 2; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 26)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 2; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 2; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 30)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 2; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 2; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 34)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 2; ++oc_block_c_init_18) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 2; ++oc_block_c_init_19) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 38)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 2; ++oc_block_c_init_20) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_20 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 2; ++oc_block_c_init_21) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_21 + 42)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 2; ++oc_block_c_init_22) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_22 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 2; ++oc_block_c_init_23) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_23 + 46)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 2; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 2; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 50)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 2; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 2; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 54)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 2; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 2; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 2);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 2)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 2; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 4)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 2; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 6);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 6)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 2; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 8)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 2; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 10);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 10)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 2; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 12)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 2; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 14);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 14)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 2; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 16)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 2; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 18);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 18)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 2; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 20)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 2; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 22);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 22)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 2; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 24)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 2; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 26);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 26)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 2; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 28)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 2; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 30);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 30)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 2; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 32)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 2; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 34);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 34)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 2; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 36)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 2; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 38);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 38)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 2; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 40)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 2; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 42);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 42)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 2; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 44)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 2; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 46);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 46)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 2; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 48)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 2; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 50);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 50)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 2; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 52)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 2; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 54);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 54)] * ((float*)fused_constant_9_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
        int32_t cse_var_28 = ((ow_inner * 2) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
        int32_t cse_var_29 = (ax3_inner * 2);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_29 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_6_let)[(((ax0_ax1_fused_ax2_outer_fused / 28) * 2) + ax4)]) * 7.678230e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_outer_fused * 56) + cse_var_29) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_3(float* p0, float* T_cast, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_8_let = (&(global_const_workspace_40_var[9080080]));
  void* fused_constant_12_let = (&(global_const_workspace_40_var[8916496]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 812; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_41_var[181888]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_41_var[182112]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 2; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 2)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 2; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 2; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 6)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 2; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 2; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 10)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 2; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 2; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 14)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 2; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 2; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 18)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 2; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 2; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 22)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 2; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 2; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 26)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 2; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 2; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 30)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 2; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 2; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 34)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 2; ++oc_block_c_init_18) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 2; ++oc_block_c_init_19) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 38)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 2; ++oc_block_c_init_20) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_20 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 2; ++oc_block_c_init_21) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_21 + 42)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 2; ++oc_block_c_init_22) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_22 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 2; ++oc_block_c_init_23) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_23 + 46)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 2; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 2; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 50)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 2; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 2; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 54)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 2; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 2; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 2);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 2)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 2; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 4)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 2; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 6);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 6)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 2; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 8)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 2; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 10);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 10)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 2; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 12)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 2; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 14);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 14)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 2; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 16)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 2; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 18);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 18)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 2; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 20)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 2; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 22);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 22)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 2; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 24)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 2; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 26);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 26)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 2; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 28)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 2; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 30);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 30)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 2; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 32)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 2; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 34);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 34)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 2; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 36)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 2; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 38);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 38)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 2; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 40)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 2; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 42);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 42)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 2; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 44)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 2; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 46);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 46)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 2; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 48)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 2; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 50);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 50)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 2; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 52)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 2; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 54);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 54)] * ((float*)fused_constant_12_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
        int32_t cse_var_28 = ((ow_inner * 2) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
        int32_t cse_var_29 = (ax3_inner * 2);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_29 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_8_let)[(((ax0_ax1_fused_ax2_outer_fused / 28) * 2) + ax4)]) * 5.660847e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_outer_fused * 56) + cse_var_29) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_4(float* p0, float* T_cast, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_11_let = (&(global_const_workspace_52_var[9077952]));
  void* fused_constant_17_let = (&(global_const_workspace_52_var[8741568]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 812; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_53_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_53_var[448]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 3136) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_17_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_28 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_29 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_29 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_11_let)[(((ax0_ax1_fused_ax2_outer_fused / 28) * 4) + ax4)]) * 8.575772e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_29) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_5(float* p0, float* T_cast, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_13_let = (&(global_const_workspace_62_var[9077024]));
  void* fused_constant_20_let = (&(global_const_workspace_62_var[8633920]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_63_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_63_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_20_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_13_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 1.261130e+02f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_6(float* p0, float* T_cast, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_15_let = (&(global_const_workspace_70_var[9076096]));
  void* fused_constant_23_let = (&(global_const_workspace_70_var[8526272]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_71_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_71_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_23_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_15_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 1.366888e+02f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_7(float* p0, float* T_cast, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_17_let = (&(global_const_workspace_76_var[9075168]));
  void* fused_constant_26_let = (&(global_const_workspace_76_var[8418624]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_77_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_77_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_26_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_17_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 9.612992e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_8(float* p0, float* T_cast, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_19_let = (&(global_const_workspace_82_var[9074240]));
  void* fused_constant_29_let = (&(global_const_workspace_82_var[8310976]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_83_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_83_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_29_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_19_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 1.168854e+02f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_9(float* p0, float* T_cast, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_21_let = (&(global_const_workspace_88_var[9073312]));
  void* fused_constant_32_let = (&(global_const_workspace_88_var[8203328]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_89_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_89_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_32_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_21_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 7.182884e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = ((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_let = (&(global_const_workspace_4_var[9082096]));
  void* fused_constant_let = (&(global_const_workspace_4_var[9041984]));
  void* data_pad_let = (&(global_workspace_5_var[1204224]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 225; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 225; ++i3) {
      for (int32_t i4 = 0; i4 < 3; ++i4) {
        int32_t cse_var_1 = (i3 * 3);
        ((float*)data_pad_let)[(((i0_i1_fused_i2_fused * 675) + cse_var_1) + i4)] = (((1 <= i0_i1_fused_i2_fused) && (1 <= i3)) ? p0[((((i0_i1_fused_i2_fused * 672) + cse_var_1) + i4) - 675)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 672; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_5_var[1811728]));
    for (int32_t ow_outer = 0; ow_outer < 4; ++ow_outer) {
      void* conv2d_NCHWc_global_let = (&(global_workspace_5_var[1813520]));
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
      for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
      }
      for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
        ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
      }
      for (int32_t kh = 0; kh < 3; ++kh) {
        for (int32_t kw = 0; kw < 3; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 3; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (((float*)data_pad_let)[((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c)]));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_2 = (oc_block_c_1 + 4);
              ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 6)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_1)]));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_3 = (oc_block_c_2 + 8);
              ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 12)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_2)]));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_4 = (oc_block_c_3 + 12);
              ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 18)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_3)]));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_5 = (oc_block_c_4 + 16);
              ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 24)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_4)]));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_6 = (oc_block_c_5 + 20);
              ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 30)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_5)]));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_7 = (oc_block_c_6 + 24);
              ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 36)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_6)]));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_8 = (oc_block_c_7 + 28);
              ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 42)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_7)]));
            }
            for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
              int32_t cse_var_9 = (oc_block_c_8 + 32);
              ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 48)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_8)]));
            }
            for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
              int32_t cse_var_10 = (oc_block_c_9 + 36);
              ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 54)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_9)]));
            }
            for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
              int32_t cse_var_11 = (oc_block_c_10 + 40);
              ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 60)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_10)]));
            }
            for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
              int32_t cse_var_12 = (oc_block_c_11 + 44);
              ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 66)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_11)]));
            }
            for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
              int32_t cse_var_13 = (oc_block_c_12 + 48);
              ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 72)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_12)]));
            }
            for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
              int32_t cse_var_14 = (oc_block_c_13 + 52);
              ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 78)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_13)]));
            }
            for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
              int32_t cse_var_15 = (oc_block_c_14 + 56);
              ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 84)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_14)]));
            }
            for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
              int32_t cse_var_16 = (oc_block_c_15 + 60);
              ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 90)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_15)]));
            }
            for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
              int32_t cse_var_17 = (oc_block_c_16 + 64);
              ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 96)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_16)]));
            }
            for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
              int32_t cse_var_18 = (oc_block_c_17 + 68);
              ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 102)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_17)]));
            }
            for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
              int32_t cse_var_19 = (oc_block_c_18 + 72);
              ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 108)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_18)]));
            }
            for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
              int32_t cse_var_20 = (oc_block_c_19 + 76);
              ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 114)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_19)]));
            }
            for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
              int32_t cse_var_21 = (oc_block_c_20 + 80);
              ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 120)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_20)]));
            }
            for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
              int32_t cse_var_22 = (oc_block_c_21 + 84);
              ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 126)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_21)]));
            }
            for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
              int32_t cse_var_23 = (oc_block_c_22 + 88);
              ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 132)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_22)]));
            }
            for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
              int32_t cse_var_24 = (oc_block_c_23 + 92);
              ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 138)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_23)]));
            }
            for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
              int32_t cse_var_25 = (oc_block_c_24 + 96);
              ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 144)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_24)]));
            }
            for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
              int32_t cse_var_26 = (oc_block_c_25 + 100);
              ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 150)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_25)]));
            }
            for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
              int32_t cse_var_27 = (oc_block_c_26 + 104);
              ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 156)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_26)]));
            }
            for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
              int32_t cse_var_28 = (oc_block_c_27 + 108);
              ((float*)conv2d_NCHWc_global_let)[cse_var_28] = (((float*)conv2d_NCHWc_global_let)[cse_var_28] + (((float*)data_pad_let)[(((((((ax0_ax1_fused_ax2_fused % 112) * 1350) + (kh * 675)) + (ow_outer * 168)) + (kw * 3)) + ic_inner) + 162)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 108) + (kh * 36)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_27)]));
            }
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_29 = (ow_inner * 4);
          ((float*)conv2d_NCHWc_let)[(((ow_outer * 112) + cse_var_29) + oc_block)] = ((float*)conv2d_NCHWc_global_let)[(cse_var_29 + oc_block)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_31 = (ax3_outer * 112);
          int32_t cse_var_30 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_31 + cse_var_30) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_let)[(((ax0_ax1_fused_ax2_fused / 112) * 4) + ax4)]) * 1.752280e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_fused * 448) + cse_var_31) + cse_var_30) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 5.706850e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_12_var[9081760]));
  void* fused_constant_2_let = (&(global_const_workspace_12_var[8990736]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 812; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_13_var[75264]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_13_var[75488]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 2; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 2)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 2; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 2; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 6)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 2; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 2; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 10)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 2; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 2; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 14)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 2; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 2; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 18)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 2; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 2; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 22)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 2; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 2; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 26)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 2; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 2; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 30)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 2; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 2; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 34)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 2; ++oc_block_c_init_18) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 2; ++oc_block_c_init_19) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 38)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 2; ++oc_block_c_init_20) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_20 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 2; ++oc_block_c_init_21) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_21 + 42)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 2; ++oc_block_c_init_22) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_22 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 2; ++oc_block_c_init_23) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_23 + 46)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 2; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 2; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 50)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 2; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 2; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 54)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 12; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 2; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 2; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 2);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 2)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 2; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 4)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 2; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 6);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 6)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 2; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 8)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 2; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 10);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 10)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 2; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 12)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 2; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 14);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 14)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 2; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 16)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 2; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 18);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 18)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 2; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 20)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 2; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 22);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 22)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 2; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 24)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 2; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 26);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 26)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 2; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 28)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 2; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 30);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 30)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 2; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 32)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 2; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 34);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 34)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 2; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 36)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 2; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 38);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 38)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 2; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 40)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 2; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 42);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 42)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 2; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 44)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 2; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 46);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 46)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 2; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 48)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 2; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 50);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 50)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 2; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 52)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 2; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 54);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 54)] * ((float*)fused_constant_2_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 48) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
        int32_t cse_var_28 = ((ow_inner * 2) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
        int32_t cse_var_29 = (ax3_inner * 2);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_29 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_1_let)[(((ax0_ax1_fused_ax2_outer_fused / 28) * 2) + ax4)]) * 2.592525e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 56) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 3.857243e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_10(float* p0, float* T_multiply, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_18_let = (&(global_const_workspace_80_var[9074704]));
  void* fused_constant_28_let = (&(global_const_workspace_80_var[8364800]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_81_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_81_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_28_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_18_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 8.487303e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.178231e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_11(float* p0, float* T_multiply, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_20_let = (&(global_const_workspace_86_var[9073776]));
  void* fused_constant_31_let = (&(global_const_workspace_86_var[8257152]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_87_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_87_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_31_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_20_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 8.012081e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.248115e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_12(float* p0, float* T_multiply, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_22_let = (&(global_const_workspace_92_var[9072848]));
  void* fused_constant_34_let = (&(global_const_workspace_92_var[8149504]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_93_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_93_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_34_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_22_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 8.296719e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.205296e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_13(float* p0, float* T_multiply, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_24_let = (&(global_const_workspace_98_var[9071920]));
  void* fused_constant_37_let = (&(global_const_workspace_98_var[8041856]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_99_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_99_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_37_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_24_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 7.880413e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.268969e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_14(float* p0, float* T_multiply, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_26_let = (&(global_const_workspace_108_var[9070992]));
  void* fused_constant_40_let = (&(global_const_workspace_108_var[7934208]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_109_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_109_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_40_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_26_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 5.901348e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.694528e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_15(float* p0, float* T_multiply, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_27_let = (&(global_const_workspace_114_var[9065024]));
  void* fused_constant_42_let = (&(global_const_workspace_114_var[7718912]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 406; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_115_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_115_var[112]));
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
    for (int32_t ic_outer = 0; ic_outer < 58; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 4)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 8)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 12)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 16)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 20)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 24)] * ((float*)fused_constant_42_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_7 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_7] = ((float*)conv2d_NCHWc_global_let)[cse_var_7];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_8 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_8 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_27_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 7.309447e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 28) + cse_var_8) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.368093e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_16(float* p0, float* T_multiply, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_29_let = (&(global_const_workspace_120_var[9063168]));
  void* fused_constant_45_let = (&(global_const_workspace_120_var[7288320]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 406; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_121_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_121_var[112]));
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
    for (int32_t ic_outer = 0; ic_outer < 58; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 4)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 8)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 12)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 16)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 20)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 24)] * ((float*)fused_constant_45_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_7 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_7] = ((float*)conv2d_NCHWc_global_let)[cse_var_7];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_8 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_8 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_29_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 7.610210e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 28) + cse_var_8) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.314024e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_17(float* p0, float* T_multiply, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_31_let = (&(global_const_workspace_130_var[9061312]));
  void* fused_constant_48_let = (&(global_const_workspace_130_var[6857728]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 406; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_131_var[45472]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_131_var[45584]));
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
    for (int32_t ic_outer = 0; ic_outer < 58; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 4)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 8)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 12)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 16)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 20)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 24)] * ((float*)fused_constant_48_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_7 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_7] = ((float*)conv2d_NCHWc_global_let)[cse_var_7];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_8 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_8 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_31_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 7.478393e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 28) + cse_var_8) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.337186e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_18(float* p0, float* T_multiply, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_33_let = (&(global_const_workspace_140_var[9059456]));
  void* fused_constant_51_let = (&(global_const_workspace_140_var[6427136]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 406; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_141_var[45472]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_141_var[45584]));
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
    for (int32_t ic_outer = 0; ic_outer < 58; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner)] * ((float*)fused_constant_51_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 4)] * ((float*)fused_constant_51_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 8)] * ((float*)fused_constant_51_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 12)] * ((float*)fused_constant_51_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 16)] * ((float*)fused_constant_51_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 20)] * ((float*)fused_constant_51_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 24)] * ((float*)fused_constant_51_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_7 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_7] = ((float*)conv2d_NCHWc_global_let)[cse_var_7];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_8 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_8 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_33_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 7.375741e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 28) + cse_var_8) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.355796e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_19(float* p0, float* T_multiply, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_35_let = (&(global_const_workspace_150_var[9057600]));
  void* fused_constant_54_let = (&(global_const_workspace_150_var[5996544]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 406; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_151_var[45472]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_151_var[45584]));
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
    for (int32_t ic_outer = 0; ic_outer < 58; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 4)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 8)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 12)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 16)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 20)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 24)] * ((float*)fused_constant_54_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 928) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_7 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_7] = ((float*)conv2d_NCHWc_global_let)[cse_var_7];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_8 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_8 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_35_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 5.812319e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 28) + cse_var_8) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.720484e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_3_let = (&(global_const_workspace_20_var[9081280]));
  void* fused_constant_5_let = (&(global_const_workspace_20_var[8889584]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 812; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_21_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_21_var[224]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 2; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 2)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 2; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 2; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 6)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 2; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 2; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 10)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 2; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 2; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 14)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 2; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 2; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 18)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 2; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 2; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 22)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 2; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 2; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 26)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 2; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 2; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 30)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 2; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 2; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 34)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 2; ++oc_block_c_init_18) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 2; ++oc_block_c_init_19) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 38)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 2; ++oc_block_c_init_20) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_20 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 2; ++oc_block_c_init_21) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_21 + 42)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 2; ++oc_block_c_init_22) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_22 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 2; ++oc_block_c_init_23) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_23 + 46)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 2; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 2; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 50)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 2; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 2; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 54)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 2; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 2; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 2);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 2)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 2; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 4)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 2; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 6);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 6)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 2; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 8)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 2; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 10);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 10)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 2; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 12)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 2; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 14);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 14)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 2; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 16)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 2; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 18);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 18)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 2; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 20)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 2; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 22);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 22)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 2; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 24)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 2; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 26);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 26)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 2; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 28)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 2; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 30);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 30)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 2; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 32)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 2; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 34);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 34)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 2; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 36)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 2; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 38);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 38)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 2; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 40)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 2; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 42);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 42)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 2; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 44)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 2; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 46);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 46)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 2; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 48)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 2; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 50);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 50)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 2; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 52)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 2; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 54);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 54)] * ((float*)fused_constant_5_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
        int32_t cse_var_28 = ((ow_inner * 2) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
        int32_t cse_var_29 = (ax3_inner * 2);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_29 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_3_let)[(((ax0_ax1_fused_ax2_outer_fused / 28) * 2) + ax4)]) * 4.054301e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 56) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 2.466516e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_20(float* p0, float* T_multiply, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_36_let = (&(global_const_workspace_154_var[9033888]));
  void* fused_constant_55_let = (&(global_const_workspace_154_var[4096000]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 1792; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_155_var[291648]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_155_var[291760]));
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
    for (int32_t ic_outer = 0; ic_outer < 116; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner)] * ((float*)fused_constant_55_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 1856) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 4)] * ((float*)fused_constant_55_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 1856) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 8)] * ((float*)fused_constant_55_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 1856) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 12)] * ((float*)fused_constant_55_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 1856) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 16)] * ((float*)fused_constant_55_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 1856) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 20)] * ((float*)fused_constant_55_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 1856) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 196) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 28)) + ic_inner) + 24)] * ((float*)fused_constant_55_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 1856) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
        int32_t cse_var_7 = ((ow_inner * 4) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_7] = ((float*)conv2d_NCHWc_global_let)[cse_var_7];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_8 = (ax3_inner * 4);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_8 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_36_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 8.021935e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 28) + cse_var_8) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.246582e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_5_let = (&(global_const_workspace_30_var[9080800]));
  void* fused_constant_8_let = (&(global_const_workspace_30_var[8862672]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 812; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_31_var[181888]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_31_var[182112]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 2; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 2)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 2; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 2; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 6)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 2; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 2; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 10)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 2; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 2; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 14)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 2; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 2; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 18)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 2; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 2; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 22)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 2; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 2; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 26)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 2; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 2; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 30)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 2; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 2; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 34)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 2; ++oc_block_c_init_18) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 2; ++oc_block_c_init_19) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 38)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 2; ++oc_block_c_init_20) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_20 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 2; ++oc_block_c_init_21) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_21 + 42)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 2; ++oc_block_c_init_22) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_22 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 2; ++oc_block_c_init_23) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_23 + 46)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 2; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 2; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 50)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 2; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 2; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 54)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 2; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 2; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 2);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 2)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 2; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 4)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 2; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 6);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 6)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 2; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 8)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 2; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 10);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 10)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 2; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 12)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 2; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 14);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 14)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 2; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 16)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 2; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 18);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 18)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 2; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 20)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 2; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 22);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 22)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 2; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 24)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 2; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 26);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 26)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 2; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 28)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 2; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 30);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 30)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 2; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 32)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 2; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 34);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 34)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 2; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 36)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 2; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 38);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 38)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 2; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 40)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 2; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 42);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 42)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 2; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 44)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 2; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 46);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 46)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 2; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 48)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 2; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 50);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 50)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 2; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 52)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 2; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 54);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 54)] * ((float*)fused_constant_8_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
        int32_t cse_var_28 = ((ow_inner * 2) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
        int32_t cse_var_29 = (ax3_inner * 2);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_29 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_5_let)[(((ax0_ax1_fused_ax2_outer_fused / 28) * 2) + ax4)]) * 5.689228e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 56) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.757708e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_4(float* p0, float* T_multiply, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_7_let = (&(global_const_workspace_38_var[9080320]));
  void* fused_constant_11_let = (&(global_const_workspace_38_var[8929952]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 812; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_39_var[181888]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_39_var[182112]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 2; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 2)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 2; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 2; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 6)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 2; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 2; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 10)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 2; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 2; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 14)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 2; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 2; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 18)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 2; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 2; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 22)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 2; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 2; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 26)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 2; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 2; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 30)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 2; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 2; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 34)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 2; ++oc_block_c_init_18) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 2; ++oc_block_c_init_19) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 38)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 2; ++oc_block_c_init_20) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_20 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 2; ++oc_block_c_init_21) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_21 + 42)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 2; ++oc_block_c_init_22) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_22 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 2; ++oc_block_c_init_23) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_23 + 46)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 2; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 2; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 50)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 2; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 2; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 54)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 2; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 2; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 2);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 2)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 2; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 4)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 2; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 6);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 6)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 2; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 8)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 2; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 10);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 10)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 2; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 12)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 2; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 14);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 14)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 2; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 16)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 2; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 18);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 18)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 2; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 20)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 2; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 22);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 22)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 2; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 24)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 2; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 26);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 26)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 2; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 28)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 2; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 30);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 30)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 2; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 32)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 2; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 34);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 34)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 2; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 36)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 2; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 38);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 38)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 2; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 40)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 2; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 42);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 42)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 2; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 44)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 2; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 46);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 46)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 2; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 48)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 2; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 50);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 50)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 2; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 52)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 2; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 54);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 54)] * ((float*)fused_constant_11_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
        int32_t cse_var_28 = ((ow_inner * 2) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
        int32_t cse_var_29 = (ax3_inner * 2);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_29 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_7_let)[(((ax0_ax1_fused_ax2_outer_fused / 28) * 2) + ax4)]) * 5.835976e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 56) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.713509e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_5(float* p0, float* T_multiply, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_9_let = (&(global_const_workspace_44_var[9079840]));
  void* fused_constant_14_let = (&(global_const_workspace_44_var[8903040]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 812; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_45_var[181888]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_45_var[182112]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 2; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 2; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 2)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 2; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 2; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 6)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 2; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 2; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 10)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 2; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 2; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 14)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 2; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 2; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 18)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 2; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 2; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 22)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 2; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 2; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 26)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 2; ++oc_block_c_init_14) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 2; ++oc_block_c_init_15) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 30)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 2; ++oc_block_c_init_16) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 2; ++oc_block_c_init_17) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 34)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 2; ++oc_block_c_init_18) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 2; ++oc_block_c_init_19) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 38)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_20 = 0; oc_block_c_init_20 < 2; ++oc_block_c_init_20) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_20 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_21 = 0; oc_block_c_init_21 < 2; ++oc_block_c_init_21) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_21 + 42)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_22 = 0; oc_block_c_init_22 < 2; ++oc_block_c_init_22) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_22 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_23 = 0; oc_block_c_init_23 < 2; ++oc_block_c_init_23) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_23 + 46)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 2; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 2; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 50)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 2; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 52)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 2; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 54)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 2; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 2; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 2; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 2);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 2)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 2; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 4)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 2; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 6);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 6)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 2; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 8)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 2; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 10);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 10)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 2; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 12)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 2; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 14);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 14)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 2; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 16)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 2; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 18);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 18)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 2; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 20)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 2; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 22);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 22)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 2; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 24)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 2; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 26);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 26)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 2; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 28)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 2; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 30);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 30)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 2; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 32)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 2; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 34);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 34)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 2; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 36)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 2; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 38);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 38)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 2; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 40)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 2; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 42);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 42)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 2; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 44)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 2; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 46);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 46)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 2; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 48)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 2; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 50);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 50)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 2; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 52)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 2; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 54);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 1568) + ((ax0_ax1_fused_ax2_outer_fused % 28) * 56)) + ic_inner) + 54)] * ((float*)fused_constant_14_let)[(((((ax0_ax1_fused_ax2_outer_fused / 28) * 116) + (ic_outer * 4)) + (ic_inner * 2)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oc_block = 0; oc_block < 2; ++oc_block) {
        int32_t cse_var_28 = ((ow_inner * 2) + oc_block);
        ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
        int32_t cse_var_29 = (ax3_inner * 2);
        float v_ = roundf(((((float*)conv2d_NCHWc_let)[(cse_var_29 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_9_let)[(((ax0_ax1_fused_ax2_outer_fused / 28) * 2) + ax4)]) * 6.427588e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_multiply[(((ax0_ax1_fused_ax2_outer_fused * 56) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.555793e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_6(float* p0, float* T_multiply, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_10_let = (&(global_const_workspace_50_var[9078416]));
  void* fused_constant_16_let = (&(global_const_workspace_50_var[8795392]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_51_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_51_var[448]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_16_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_10_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 9.382668e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.065795e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_7(float* p0, float* T_multiply, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_12_let = (&(global_const_workspace_56_var[9077488]));
  void* fused_constant_19_let = (&(global_const_workspace_56_var[8687744]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_57_var[0]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_57_var[448]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_19_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_12_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 7.748970e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.290494e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_8(float* p0, float* T_multiply, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_14_let = (&(global_const_workspace_66_var[9076560]));
  void* fused_constant_22_let = (&(global_const_workspace_66_var[8580096]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_67_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_67_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_22_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_14_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 9.199353e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.087033e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_9(float* p0, float* T_multiply, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_16_let = (&(global_const_workspace_74_var[9075632]));
  void* fused_constant_25_let = (&(global_const_workspace_74_var[8472448]));
  for (int32_t ax0_ax1_fused_ax2_outer_fused = 0; ax0_ax1_fused_ax2_outer_fused < 203; ++ax0_ax1_fused_ax2_outer_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_75_var[90944]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_75_var[91392]));
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
    for (int32_t oc_block_c_init_24 = 0; oc_block_c_init_24 < 4; ++oc_block_c_init_24) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_25 = 0; oc_block_c_init_25 < 4; ++oc_block_c_init_25) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_26 = 0; oc_block_c_init_26 < 4; ++oc_block_c_init_26) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_27 = 0; oc_block_c_init_27 < 4; ++oc_block_c_init_27) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t ic_outer = 0; ic_outer < 29; ++ic_outer) {
      for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
        for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
          ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c)]));
        }
        for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
          int32_t cse_var_1 = (oc_block_c_1 + 4);
          ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 4)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_1)]));
        }
        for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
          int32_t cse_var_2 = (oc_block_c_2 + 8);
          ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 8)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_2)]));
        }
        for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
          int32_t cse_var_3 = (oc_block_c_3 + 12);
          ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 12)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_3)]));
        }
        for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
          int32_t cse_var_4 = (oc_block_c_4 + 16);
          ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 16)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_4)]));
        }
        for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
          int32_t cse_var_5 = (oc_block_c_5 + 20);
          ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 20)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_5)]));
        }
        for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
          int32_t cse_var_6 = (oc_block_c_6 + 24);
          ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 24)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_6)]));
        }
        for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
          int32_t cse_var_7 = (oc_block_c_7 + 28);
          ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 28)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_7)]));
        }
        for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
          int32_t cse_var_8 = (oc_block_c_8 + 32);
          ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 32)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_8)]));
        }
        for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
          int32_t cse_var_9 = (oc_block_c_9 + 36);
          ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 36)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_9)]));
        }
        for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
          int32_t cse_var_10 = (oc_block_c_10 + 40);
          ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 40)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_10)]));
        }
        for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
          int32_t cse_var_11 = (oc_block_c_11 + 44);
          ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 44)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_11)]));
        }
        for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
          int32_t cse_var_12 = (oc_block_c_12 + 48);
          ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 48)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_12)]));
        }
        for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
          int32_t cse_var_13 = (oc_block_c_13 + 52);
          ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 52)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_13)]));
        }
        for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
          int32_t cse_var_14 = (oc_block_c_14 + 56);
          ((float*)conv2d_NCHWc_global_let)[cse_var_14] = (((float*)conv2d_NCHWc_global_let)[cse_var_14] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 56)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_14)]));
        }
        for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
          int32_t cse_var_15 = (oc_block_c_15 + 60);
          ((float*)conv2d_NCHWc_global_let)[cse_var_15] = (((float*)conv2d_NCHWc_global_let)[cse_var_15] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 60)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_15)]));
        }
        for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
          int32_t cse_var_16 = (oc_block_c_16 + 64);
          ((float*)conv2d_NCHWc_global_let)[cse_var_16] = (((float*)conv2d_NCHWc_global_let)[cse_var_16] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 64)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_16)]));
        }
        for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
          int32_t cse_var_17 = (oc_block_c_17 + 68);
          ((float*)conv2d_NCHWc_global_let)[cse_var_17] = (((float*)conv2d_NCHWc_global_let)[cse_var_17] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 68)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_17)]));
        }
        for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
          int32_t cse_var_18 = (oc_block_c_18 + 72);
          ((float*)conv2d_NCHWc_global_let)[cse_var_18] = (((float*)conv2d_NCHWc_global_let)[cse_var_18] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 72)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_18)]));
        }
        for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
          int32_t cse_var_19 = (oc_block_c_19 + 76);
          ((float*)conv2d_NCHWc_global_let)[cse_var_19] = (((float*)conv2d_NCHWc_global_let)[cse_var_19] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 76)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_19)]));
        }
        for (int32_t oc_block_c_20 = 0; oc_block_c_20 < 4; ++oc_block_c_20) {
          int32_t cse_var_20 = (oc_block_c_20 + 80);
          ((float*)conv2d_NCHWc_global_let)[cse_var_20] = (((float*)conv2d_NCHWc_global_let)[cse_var_20] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 80)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_20)]));
        }
        for (int32_t oc_block_c_21 = 0; oc_block_c_21 < 4; ++oc_block_c_21) {
          int32_t cse_var_21 = (oc_block_c_21 + 84);
          ((float*)conv2d_NCHWc_global_let)[cse_var_21] = (((float*)conv2d_NCHWc_global_let)[cse_var_21] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 84)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_21)]));
        }
        for (int32_t oc_block_c_22 = 0; oc_block_c_22 < 4; ++oc_block_c_22) {
          int32_t cse_var_22 = (oc_block_c_22 + 88);
          ((float*)conv2d_NCHWc_global_let)[cse_var_22] = (((float*)conv2d_NCHWc_global_let)[cse_var_22] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 88)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_22)]));
        }
        for (int32_t oc_block_c_23 = 0; oc_block_c_23 < 4; ++oc_block_c_23) {
          int32_t cse_var_23 = (oc_block_c_23 + 92);
          ((float*)conv2d_NCHWc_global_let)[cse_var_23] = (((float*)conv2d_NCHWc_global_let)[cse_var_23] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 92)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_23)]));
        }
        for (int32_t oc_block_c_24 = 0; oc_block_c_24 < 4; ++oc_block_c_24) {
          int32_t cse_var_24 = (oc_block_c_24 + 96);
          ((float*)conv2d_NCHWc_global_let)[cse_var_24] = (((float*)conv2d_NCHWc_global_let)[cse_var_24] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 96)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_24)]));
        }
        for (int32_t oc_block_c_25 = 0; oc_block_c_25 < 4; ++oc_block_c_25) {
          int32_t cse_var_25 = (oc_block_c_25 + 100);
          ((float*)conv2d_NCHWc_global_let)[cse_var_25] = (((float*)conv2d_NCHWc_global_let)[cse_var_25] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 100)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_25)]));
        }
        for (int32_t oc_block_c_26 = 0; oc_block_c_26 < 4; ++oc_block_c_26) {
          int32_t cse_var_26 = (oc_block_c_26 + 104);
          ((float*)conv2d_NCHWc_global_let)[cse_var_26] = (((float*)conv2d_NCHWc_global_let)[cse_var_26] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 104)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_26)]));
        }
        for (int32_t oc_block_c_27 = 0; oc_block_c_27 < 4; ++oc_block_c_27) {
          int32_t cse_var_27 = (oc_block_c_27 + 108);
          ((float*)conv2d_NCHWc_global_let)[cse_var_27] = (((float*)conv2d_NCHWc_global_let)[cse_var_27] + (p0[((((ic_outer * 784) + ((ax0_ax1_fused_ax2_outer_fused % 7) * 112)) + ic_inner) + 108)] * ((float*)fused_constant_25_let)[(((((ax0_ax1_fused_ax2_outer_fused / 7) * 464) + (ic_outer * 16)) + (ic_inner * 4)) + oc_block_c_27)]));
        }
      }
    }
    for (int32_t oh_inner = 0; oh_inner < 2; ++oh_inner) {
      for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_28 = (((oh_inner * 56) + (ow_inner * 4)) + oc_block);
          ((float*)conv2d_NCHWc_let)[cse_var_28] = ((float*)conv2d_NCHWc_global_let)[cse_var_28];
        }
      }
    }
    for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_30 = (ax2_inner * 56);
          int32_t cse_var_29 = (ax3_inner * 4);
          float v_ = roundf(((((float*)conv2d_NCHWc_let)[((cse_var_30 + cse_var_29) + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_16_let)[(((ax0_ax1_fused_ax2_outer_fused / 7) * 4) + ax4)]) * 9.090032e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_multiply[((((ax0_ax1_fused_ax2_outer_fused * 112) + cse_var_30) + cse_var_29) + ax4)] = (((float)((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))) * 1.100106e-02f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_divide_round_add_clip_cast_cast_subtract_cast_multip_75ff9d653223c1d3_(float* p0, float* T_add, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var) {
  void* fused_nn_contrib_dense_pack_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_let = (&(global_const_workspace_160_var[9037984]));
  void* fused_constant_56_let = (&(global_const_workspace_160_var[0]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 125; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_161_var[4128]));
    void* compute_global_let = (&(global_workspace_161_var[4096]));
    for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
      ((float*)compute_global_let)[x_c_init] = 0.000000e+00f;
    }
    for (int32_t k_outer = 0; k_outer < 1024; ++k_outer) {
      for (int32_t x_c = 0; x_c < 8; ++x_c) {
        ((float*)compute_global_let)[x_c] = (((float*)compute_global_let)[x_c] + (p0[k_outer] * ((float*)fused_constant_56_let)[(((ax1_outer_ax0_outer_fused * 8192) + (k_outer * 8)) + x_c)]));
      }
    }
    for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
      ((float*)compute_let)[x_inner_inner] = ((float*)compute_global_let)[x_inner_inner];
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 8) + ax1_inner_inner);
      float v_ = roundf((((float*)compute_let)[ax1_inner_inner] * 6.818472e+00f)) + 5.300000e+01f;
      float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
      T_add[cse_var_1] = ((((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 53)) * 1.466604e-01f) + ((float*)fused_nn_contrib_dense_pack_divide_round_add_clip_cast_cast_subtract_cast_multiply_constant_let)[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c_(float* p0, float* T_cast, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_let = (&(global_const_workspace_8_var[9082000]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[9065952]));
  void* PaddedInput_let = (&(global_workspace_9_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 342; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 57; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 57);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 228) + cse_var_1) + i4)] = (((1 <= cse_var_2) && (1 <= i3)) ? p0[((((((i0_i1_fused_i2_fused / 57) * 12544) + (cse_var_2 * 224)) + cse_var_1) + i4) - 228)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 168; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_9_var[688672]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_9_var[688224]));
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
    for (int32_t oci_c_init_24 = 0; oci_c_init_24 < 4; ++oci_c_init_24) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_24 + 96)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_25 = 0; oci_c_init_25 < 4; ++oci_c_init_25) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_25 + 100)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_26 = 0; oci_c_init_26 < 4; ++oci_c_init_26) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_26 + 104)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_27 = 0; oci_c_init_27 < 4; ++oci_c_init_27) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_27 + 108)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 28);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_3) + oci_c)] * ((float*)fused_constant_1_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 28);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_1_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 28);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_1_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 28);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_12) + oci_c_3) + 24)] * ((float*)fused_constant_1_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 28);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_15) + oci_c_4) + 32)] * ((float*)fused_constant_1_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 28);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_18) + oci_c_5) + 40)] * ((float*)fused_constant_1_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 28);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_21) + oci_c_6) + 48)] * ((float*)fused_constant_1_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 28);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_24) + oci_c_7) + 56)] * ((float*)fused_constant_1_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 28);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_27) + oci_c_8) + 64)] * ((float*)fused_constant_1_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 28);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_30) + oci_c_9) + 72)] * ((float*)fused_constant_1_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 28);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_33) + oci_c_10) + 80)] * ((float*)fused_constant_1_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 28);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_36) + oci_c_11) + 88)] * ((float*)fused_constant_1_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 28);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_39) + oci_c_12) + 96)] * ((float*)fused_constant_1_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 28);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_42) + oci_c_13) + 104)] * ((float*)fused_constant_1_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
        for (int32_t oci_c_14 = 0; oci_c_14 < 4; ++oci_c_14) {
          int32_t cse_var_46 = (ax1_ax2_fused / 28);
          int32_t cse_var_45 = (kw * 4);
          int32_t cse_var_44 = (oci_c_14 + 56);
          ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[((((((cse_var_46 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_45) + oci_c_14) + 112)] * ((float*)fused_constant_1_let)[((((cse_var_46 * 36) + (kh * 12)) + cse_var_45) + oci_c_14)]));
        }
        for (int32_t oci_c_15 = 0; oci_c_15 < 4; ++oci_c_15) {
          int32_t cse_var_49 = (ax1_ax2_fused / 28);
          int32_t cse_var_48 = (kw * 4);
          int32_t cse_var_47 = (oci_c_15 + 60);
          ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[((((((cse_var_49 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_48) + oci_c_15) + 120)] * ((float*)fused_constant_1_let)[((((cse_var_49 * 36) + (kh * 12)) + cse_var_48) + oci_c_15)]));
        }
        for (int32_t oci_c_16 = 0; oci_c_16 < 4; ++oci_c_16) {
          int32_t cse_var_52 = (ax1_ax2_fused / 28);
          int32_t cse_var_51 = (kw * 4);
          int32_t cse_var_50 = (oci_c_16 + 64);
          ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_let)[((((((cse_var_52 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_51) + oci_c_16) + 128)] * ((float*)fused_constant_1_let)[((((cse_var_52 * 36) + (kh * 12)) + cse_var_51) + oci_c_16)]));
        }
        for (int32_t oci_c_17 = 0; oci_c_17 < 4; ++oci_c_17) {
          int32_t cse_var_55 = (ax1_ax2_fused / 28);
          int32_t cse_var_54 = (kw * 4);
          int32_t cse_var_53 = (oci_c_17 + 68);
          ((float*)DepthwiseConv2d_global_let)[cse_var_53] = (((float*)DepthwiseConv2d_global_let)[cse_var_53] + (((float*)PaddedInput_let)[((((((cse_var_55 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_54) + oci_c_17) + 136)] * ((float*)fused_constant_1_let)[((((cse_var_55 * 36) + (kh * 12)) + cse_var_54) + oci_c_17)]));
        }
        for (int32_t oci_c_18 = 0; oci_c_18 < 4; ++oci_c_18) {
          int32_t cse_var_58 = (ax1_ax2_fused / 28);
          int32_t cse_var_57 = (kw * 4);
          int32_t cse_var_56 = (oci_c_18 + 72);
          ((float*)DepthwiseConv2d_global_let)[cse_var_56] = (((float*)DepthwiseConv2d_global_let)[cse_var_56] + (((float*)PaddedInput_let)[((((((cse_var_58 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_57) + oci_c_18) + 144)] * ((float*)fused_constant_1_let)[((((cse_var_58 * 36) + (kh * 12)) + cse_var_57) + oci_c_18)]));
        }
        for (int32_t oci_c_19 = 0; oci_c_19 < 4; ++oci_c_19) {
          int32_t cse_var_61 = (ax1_ax2_fused / 28);
          int32_t cse_var_60 = (kw * 4);
          int32_t cse_var_59 = (oci_c_19 + 76);
          ((float*)DepthwiseConv2d_global_let)[cse_var_59] = (((float*)DepthwiseConv2d_global_let)[cse_var_59] + (((float*)PaddedInput_let)[((((((cse_var_61 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_60) + oci_c_19) + 152)] * ((float*)fused_constant_1_let)[((((cse_var_61 * 36) + (kh * 12)) + cse_var_60) + oci_c_19)]));
        }
        for (int32_t oci_c_20 = 0; oci_c_20 < 4; ++oci_c_20) {
          int32_t cse_var_64 = (ax1_ax2_fused / 28);
          int32_t cse_var_63 = (kw * 4);
          int32_t cse_var_62 = (oci_c_20 + 80);
          ((float*)DepthwiseConv2d_global_let)[cse_var_62] = (((float*)DepthwiseConv2d_global_let)[cse_var_62] + (((float*)PaddedInput_let)[((((((cse_var_64 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_63) + oci_c_20) + 160)] * ((float*)fused_constant_1_let)[((((cse_var_64 * 36) + (kh * 12)) + cse_var_63) + oci_c_20)]));
        }
        for (int32_t oci_c_21 = 0; oci_c_21 < 4; ++oci_c_21) {
          int32_t cse_var_67 = (ax1_ax2_fused / 28);
          int32_t cse_var_66 = (kw * 4);
          int32_t cse_var_65 = (oci_c_21 + 84);
          ((float*)DepthwiseConv2d_global_let)[cse_var_65] = (((float*)DepthwiseConv2d_global_let)[cse_var_65] + (((float*)PaddedInput_let)[((((((cse_var_67 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_66) + oci_c_21) + 168)] * ((float*)fused_constant_1_let)[((((cse_var_67 * 36) + (kh * 12)) + cse_var_66) + oci_c_21)]));
        }
        for (int32_t oci_c_22 = 0; oci_c_22 < 4; ++oci_c_22) {
          int32_t cse_var_70 = (ax1_ax2_fused / 28);
          int32_t cse_var_69 = (kw * 4);
          int32_t cse_var_68 = (oci_c_22 + 88);
          ((float*)DepthwiseConv2d_global_let)[cse_var_68] = (((float*)DepthwiseConv2d_global_let)[cse_var_68] + (((float*)PaddedInput_let)[((((((cse_var_70 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_69) + oci_c_22) + 176)] * ((float*)fused_constant_1_let)[((((cse_var_70 * 36) + (kh * 12)) + cse_var_69) + oci_c_22)]));
        }
        for (int32_t oci_c_23 = 0; oci_c_23 < 4; ++oci_c_23) {
          int32_t cse_var_73 = (ax1_ax2_fused / 28);
          int32_t cse_var_72 = (kw * 4);
          int32_t cse_var_71 = (oci_c_23 + 92);
          ((float*)DepthwiseConv2d_global_let)[cse_var_71] = (((float*)DepthwiseConv2d_global_let)[cse_var_71] + (((float*)PaddedInput_let)[((((((cse_var_73 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_72) + oci_c_23) + 184)] * ((float*)fused_constant_1_let)[((((cse_var_73 * 36) + (kh * 12)) + cse_var_72) + oci_c_23)]));
        }
        for (int32_t oci_c_24 = 0; oci_c_24 < 4; ++oci_c_24) {
          int32_t cse_var_76 = (ax1_ax2_fused / 28);
          int32_t cse_var_75 = (kw * 4);
          int32_t cse_var_74 = (oci_c_24 + 96);
          ((float*)DepthwiseConv2d_global_let)[cse_var_74] = (((float*)DepthwiseConv2d_global_let)[cse_var_74] + (((float*)PaddedInput_let)[((((((cse_var_76 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_75) + oci_c_24) + 192)] * ((float*)fused_constant_1_let)[((((cse_var_76 * 36) + (kh * 12)) + cse_var_75) + oci_c_24)]));
        }
        for (int32_t oci_c_25 = 0; oci_c_25 < 4; ++oci_c_25) {
          int32_t cse_var_79 = (ax1_ax2_fused / 28);
          int32_t cse_var_78 = (kw * 4);
          int32_t cse_var_77 = (oci_c_25 + 100);
          ((float*)DepthwiseConv2d_global_let)[cse_var_77] = (((float*)DepthwiseConv2d_global_let)[cse_var_77] + (((float*)PaddedInput_let)[((((((cse_var_79 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_78) + oci_c_25) + 200)] * ((float*)fused_constant_1_let)[((((cse_var_79 * 36) + (kh * 12)) + cse_var_78) + oci_c_25)]));
        }
        for (int32_t oci_c_26 = 0; oci_c_26 < 4; ++oci_c_26) {
          int32_t cse_var_82 = (ax1_ax2_fused / 28);
          int32_t cse_var_81 = (kw * 4);
          int32_t cse_var_80 = (oci_c_26 + 104);
          ((float*)DepthwiseConv2d_global_let)[cse_var_80] = (((float*)DepthwiseConv2d_global_let)[cse_var_80] + (((float*)PaddedInput_let)[((((((cse_var_82 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_81) + oci_c_26) + 208)] * ((float*)fused_constant_1_let)[((((cse_var_82 * 36) + (kh * 12)) + cse_var_81) + oci_c_26)]));
        }
        for (int32_t oci_c_27 = 0; oci_c_27 < 4; ++oci_c_27) {
          int32_t cse_var_85 = (ax1_ax2_fused / 28);
          int32_t cse_var_84 = (kw * 4);
          int32_t cse_var_83 = (oci_c_27 + 108);
          ((float*)DepthwiseConv2d_global_let)[cse_var_83] = (((float*)DepthwiseConv2d_global_let)[cse_var_83] + (((float*)PaddedInput_let)[((((((cse_var_85 * 12996) + ((ax1_ax2_fused % 28) * 456)) + (kh * 228)) + cse_var_84) + oci_c_27) + 216)] * ((float*)fused_constant_1_let)[((((cse_var_85 * 36) + (kh * 12)) + cse_var_84) + oci_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_86 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_86] = ((float*)DepthwiseConv2d_global_let)[cse_var_86];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_87 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_87 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_let)[(((ax1_ax2_fused / 28) * 4) + ax4)]) * 1.287499e+01f)) + 1.210000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 112) + cse_var_87) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 121));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__1(float* p0, float* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_18_var[9079600]));
  void* fused_constant_4_let = (&(global_const_workspace_18_var[9046672]));
  void* PaddedInput_let = (&(global_workspace_19_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 1653; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 57; ++i3) {
      for (int32_t i4 = 0; i4 < 2; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 57);
        int32_t cse_var_1 = (i3 * 2);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 114) + cse_var_1) + i4)] = (((1 <= cse_var_2) && (1 <= i3)) ? p0[((((((i0_i1_fused_i2_fused / 57) * 6272) + (cse_var_2 * 112)) + cse_var_1) + i4) - 114)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 812; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_19_var[935664]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_19_var[935888]));
    for (int32_t oci_c_init = 0; oci_c_init < 2; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 2; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 2)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 2; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 2; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 6)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 2; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 2; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 10)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_6 = 0; oci_c_init_6 < 2; ++oci_c_init_6) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_6 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_7 = 0; oci_c_init_7 < 2; ++oci_c_init_7) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_7 + 14)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_8 = 0; oci_c_init_8 < 2; ++oci_c_init_8) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_8 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_9 = 0; oci_c_init_9 < 2; ++oci_c_init_9) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_9 + 18)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_10 = 0; oci_c_init_10 < 2; ++oci_c_init_10) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_10 + 20)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_11 = 0; oci_c_init_11 < 2; ++oci_c_init_11) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_11 + 22)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_12 = 0; oci_c_init_12 < 2; ++oci_c_init_12) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_12 + 24)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_13 = 0; oci_c_init_13 < 2; ++oci_c_init_13) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_13 + 26)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_14 = 0; oci_c_init_14 < 2; ++oci_c_init_14) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_14 + 28)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_15 = 0; oci_c_init_15 < 2; ++oci_c_init_15) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_15 + 30)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_16 = 0; oci_c_init_16 < 2; ++oci_c_init_16) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_16 + 32)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_17 = 0; oci_c_init_17 < 2; ++oci_c_init_17) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_17 + 34)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_18 = 0; oci_c_init_18 < 2; ++oci_c_init_18) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_18 + 36)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_19 = 0; oci_c_init_19 < 2; ++oci_c_init_19) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_19 + 38)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_20 = 0; oci_c_init_20 < 2; ++oci_c_init_20) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_20 + 40)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_21 = 0; oci_c_init_21 < 2; ++oci_c_init_21) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_21 + 42)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_22 = 0; oci_c_init_22 < 2; ++oci_c_init_22) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_22 + 44)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_23 = 0; oci_c_init_23 < 2; ++oci_c_init_23) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_23 + 46)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_24 = 0; oci_c_init_24 < 2; ++oci_c_init_24) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_24 + 48)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_25 = 0; oci_c_init_25 < 2; ++oci_c_init_25) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_25 + 50)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_26 = 0; oci_c_init_26 < 2; ++oci_c_init_26) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_26 + 52)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_27 = 0; oci_c_init_27 < 2; ++oci_c_init_27) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_27 + 54)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 2; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 28);
          int32_t cse_var_3 = (kw * 2);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_3) + oci_c)] * ((float*)fused_constant_4_let)[((((cse_var_4 * 18) + (kh * 6)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 2; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 28);
          int32_t cse_var_6 = (kw * 2);
          int32_t cse_var_5 = (oci_c_1 + 2);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_4_let)[((((cse_var_7 * 18) + (kh * 6)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 2; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 28);
          int32_t cse_var_9 = (kw * 2);
          int32_t cse_var_8 = (oci_c_2 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_4_let)[((((cse_var_10 * 18) + (kh * 6)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 2; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 28);
          int32_t cse_var_12 = (kw * 2);
          int32_t cse_var_11 = (oci_c_3 + 6);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_4_let)[((((cse_var_13 * 18) + (kh * 6)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 2; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 28);
          int32_t cse_var_15 = (kw * 2);
          int32_t cse_var_14 = (oci_c_4 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_4_let)[((((cse_var_16 * 18) + (kh * 6)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 2; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 28);
          int32_t cse_var_18 = (kw * 2);
          int32_t cse_var_17 = (oci_c_5 + 10);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_4_let)[((((cse_var_19 * 18) + (kh * 6)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 2; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 28);
          int32_t cse_var_21 = (kw * 2);
          int32_t cse_var_20 = (oci_c_6 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_4_let)[((((cse_var_22 * 18) + (kh * 6)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 2; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 28);
          int32_t cse_var_24 = (kw * 2);
          int32_t cse_var_23 = (oci_c_7 + 14);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_4_let)[((((cse_var_25 * 18) + (kh * 6)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 2; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 28);
          int32_t cse_var_27 = (kw * 2);
          int32_t cse_var_26 = (oci_c_8 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_4_let)[((((cse_var_28 * 18) + (kh * 6)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 2; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 28);
          int32_t cse_var_30 = (kw * 2);
          int32_t cse_var_29 = (oci_c_9 + 18);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_4_let)[((((cse_var_31 * 18) + (kh * 6)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 2; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 28);
          int32_t cse_var_33 = (kw * 2);
          int32_t cse_var_32 = (oci_c_10 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_4_let)[((((cse_var_34 * 18) + (kh * 6)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 2; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 28);
          int32_t cse_var_36 = (kw * 2);
          int32_t cse_var_35 = (oci_c_11 + 22);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_4_let)[((((cse_var_37 * 18) + (kh * 6)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 2; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 28);
          int32_t cse_var_39 = (kw * 2);
          int32_t cse_var_38 = (oci_c_12 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_4_let)[((((cse_var_40 * 18) + (kh * 6)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 2; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 28);
          int32_t cse_var_42 = (kw * 2);
          int32_t cse_var_41 = (oci_c_13 + 26);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_42) + oci_c_13) + 52)] * ((float*)fused_constant_4_let)[((((cse_var_43 * 18) + (kh * 6)) + cse_var_42) + oci_c_13)]));
        }
        for (int32_t oci_c_14 = 0; oci_c_14 < 2; ++oci_c_14) {
          int32_t cse_var_46 = (ax1_ax2_fused / 28);
          int32_t cse_var_45 = (kw * 2);
          int32_t cse_var_44 = (oci_c_14 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[((((((cse_var_46 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_45) + oci_c_14) + 56)] * ((float*)fused_constant_4_let)[((((cse_var_46 * 18) + (kh * 6)) + cse_var_45) + oci_c_14)]));
        }
        for (int32_t oci_c_15 = 0; oci_c_15 < 2; ++oci_c_15) {
          int32_t cse_var_49 = (ax1_ax2_fused / 28);
          int32_t cse_var_48 = (kw * 2);
          int32_t cse_var_47 = (oci_c_15 + 30);
          ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[((((((cse_var_49 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_48) + oci_c_15) + 60)] * ((float*)fused_constant_4_let)[((((cse_var_49 * 18) + (kh * 6)) + cse_var_48) + oci_c_15)]));
        }
        for (int32_t oci_c_16 = 0; oci_c_16 < 2; ++oci_c_16) {
          int32_t cse_var_52 = (ax1_ax2_fused / 28);
          int32_t cse_var_51 = (kw * 2);
          int32_t cse_var_50 = (oci_c_16 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_let)[((((((cse_var_52 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_51) + oci_c_16) + 64)] * ((float*)fused_constant_4_let)[((((cse_var_52 * 18) + (kh * 6)) + cse_var_51) + oci_c_16)]));
        }
        for (int32_t oci_c_17 = 0; oci_c_17 < 2; ++oci_c_17) {
          int32_t cse_var_55 = (ax1_ax2_fused / 28);
          int32_t cse_var_54 = (kw * 2);
          int32_t cse_var_53 = (oci_c_17 + 34);
          ((float*)DepthwiseConv2d_global_let)[cse_var_53] = (((float*)DepthwiseConv2d_global_let)[cse_var_53] + (((float*)PaddedInput_let)[((((((cse_var_55 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_54) + oci_c_17) + 68)] * ((float*)fused_constant_4_let)[((((cse_var_55 * 18) + (kh * 6)) + cse_var_54) + oci_c_17)]));
        }
        for (int32_t oci_c_18 = 0; oci_c_18 < 2; ++oci_c_18) {
          int32_t cse_var_58 = (ax1_ax2_fused / 28);
          int32_t cse_var_57 = (kw * 2);
          int32_t cse_var_56 = (oci_c_18 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_56] = (((float*)DepthwiseConv2d_global_let)[cse_var_56] + (((float*)PaddedInput_let)[((((((cse_var_58 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_57) + oci_c_18) + 72)] * ((float*)fused_constant_4_let)[((((cse_var_58 * 18) + (kh * 6)) + cse_var_57) + oci_c_18)]));
        }
        for (int32_t oci_c_19 = 0; oci_c_19 < 2; ++oci_c_19) {
          int32_t cse_var_61 = (ax1_ax2_fused / 28);
          int32_t cse_var_60 = (kw * 2);
          int32_t cse_var_59 = (oci_c_19 + 38);
          ((float*)DepthwiseConv2d_global_let)[cse_var_59] = (((float*)DepthwiseConv2d_global_let)[cse_var_59] + (((float*)PaddedInput_let)[((((((cse_var_61 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_60) + oci_c_19) + 76)] * ((float*)fused_constant_4_let)[((((cse_var_61 * 18) + (kh * 6)) + cse_var_60) + oci_c_19)]));
        }
        for (int32_t oci_c_20 = 0; oci_c_20 < 2; ++oci_c_20) {
          int32_t cse_var_64 = (ax1_ax2_fused / 28);
          int32_t cse_var_63 = (kw * 2);
          int32_t cse_var_62 = (oci_c_20 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_62] = (((float*)DepthwiseConv2d_global_let)[cse_var_62] + (((float*)PaddedInput_let)[((((((cse_var_64 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_63) + oci_c_20) + 80)] * ((float*)fused_constant_4_let)[((((cse_var_64 * 18) + (kh * 6)) + cse_var_63) + oci_c_20)]));
        }
        for (int32_t oci_c_21 = 0; oci_c_21 < 2; ++oci_c_21) {
          int32_t cse_var_67 = (ax1_ax2_fused / 28);
          int32_t cse_var_66 = (kw * 2);
          int32_t cse_var_65 = (oci_c_21 + 42);
          ((float*)DepthwiseConv2d_global_let)[cse_var_65] = (((float*)DepthwiseConv2d_global_let)[cse_var_65] + (((float*)PaddedInput_let)[((((((cse_var_67 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_66) + oci_c_21) + 84)] * ((float*)fused_constant_4_let)[((((cse_var_67 * 18) + (kh * 6)) + cse_var_66) + oci_c_21)]));
        }
        for (int32_t oci_c_22 = 0; oci_c_22 < 2; ++oci_c_22) {
          int32_t cse_var_70 = (ax1_ax2_fused / 28);
          int32_t cse_var_69 = (kw * 2);
          int32_t cse_var_68 = (oci_c_22 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_68] = (((float*)DepthwiseConv2d_global_let)[cse_var_68] + (((float*)PaddedInput_let)[((((((cse_var_70 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_69) + oci_c_22) + 88)] * ((float*)fused_constant_4_let)[((((cse_var_70 * 18) + (kh * 6)) + cse_var_69) + oci_c_22)]));
        }
        for (int32_t oci_c_23 = 0; oci_c_23 < 2; ++oci_c_23) {
          int32_t cse_var_73 = (ax1_ax2_fused / 28);
          int32_t cse_var_72 = (kw * 2);
          int32_t cse_var_71 = (oci_c_23 + 46);
          ((float*)DepthwiseConv2d_global_let)[cse_var_71] = (((float*)DepthwiseConv2d_global_let)[cse_var_71] + (((float*)PaddedInput_let)[((((((cse_var_73 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_72) + oci_c_23) + 92)] * ((float*)fused_constant_4_let)[((((cse_var_73 * 18) + (kh * 6)) + cse_var_72) + oci_c_23)]));
        }
        for (int32_t oci_c_24 = 0; oci_c_24 < 2; ++oci_c_24) {
          int32_t cse_var_76 = (ax1_ax2_fused / 28);
          int32_t cse_var_75 = (kw * 2);
          int32_t cse_var_74 = (oci_c_24 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_74] = (((float*)DepthwiseConv2d_global_let)[cse_var_74] + (((float*)PaddedInput_let)[((((((cse_var_76 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_75) + oci_c_24) + 96)] * ((float*)fused_constant_4_let)[((((cse_var_76 * 18) + (kh * 6)) + cse_var_75) + oci_c_24)]));
        }
        for (int32_t oci_c_25 = 0; oci_c_25 < 2; ++oci_c_25) {
          int32_t cse_var_79 = (ax1_ax2_fused / 28);
          int32_t cse_var_78 = (kw * 2);
          int32_t cse_var_77 = (oci_c_25 + 50);
          ((float*)DepthwiseConv2d_global_let)[cse_var_77] = (((float*)DepthwiseConv2d_global_let)[cse_var_77] + (((float*)PaddedInput_let)[((((((cse_var_79 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_78) + oci_c_25) + 100)] * ((float*)fused_constant_4_let)[((((cse_var_79 * 18) + (kh * 6)) + cse_var_78) + oci_c_25)]));
        }
        for (int32_t oci_c_26 = 0; oci_c_26 < 2; ++oci_c_26) {
          int32_t cse_var_82 = (ax1_ax2_fused / 28);
          int32_t cse_var_81 = (kw * 2);
          int32_t cse_var_80 = (oci_c_26 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_80] = (((float*)DepthwiseConv2d_global_let)[cse_var_80] + (((float*)PaddedInput_let)[((((((cse_var_82 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_81) + oci_c_26) + 104)] * ((float*)fused_constant_4_let)[((((cse_var_82 * 18) + (kh * 6)) + cse_var_81) + oci_c_26)]));
        }
        for (int32_t oci_c_27 = 0; oci_c_27 < 2; ++oci_c_27) {
          int32_t cse_var_85 = (ax1_ax2_fused / 28);
          int32_t cse_var_84 = (kw * 2);
          int32_t cse_var_83 = (oci_c_27 + 54);
          ((float*)DepthwiseConv2d_global_let)[cse_var_83] = (((float*)DepthwiseConv2d_global_let)[cse_var_83] + (((float*)PaddedInput_let)[((((((cse_var_85 * 6498) + ((ax1_ax2_fused % 28) * 228)) + (kh * 114)) + cse_var_84) + oci_c_27) + 108)] * ((float*)fused_constant_4_let)[((((cse_var_85 * 18) + (kh * 6)) + cse_var_84) + oci_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oci = 0; oci < 2; ++oci) {
        int32_t cse_var_86 = ((ow_inner * 2) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_86] = ((float*)DepthwiseConv2d_global_let)[cse_var_86];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
        int32_t cse_var_87 = (ax3_inner * 2);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_87 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_1_let)[(((ax1_ax2_fused / 28) * 2) + ax4)]) * 1.642357e+01f)) + 1.240000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 56) + cse_var_87) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 124));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__10(float* p0, float* T_cast, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_10_let = (&(global_const_workspace_84_var[9070528]));
  void* fused_constant_30_let = (&(global_const_workspace_84_var[9008832]));
  void* PaddedInput_let = (&(global_workspace_85_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 464; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 16; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 15);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 64) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 15)) && (1 <= i3)) && (i3 < 15)) ? p0[((((((i0_i1_fused_i2_fused >> 4) * 784) + (cse_var_2 * 56)) + cse_var_1) + i4) - 60)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_85_var[209728]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_85_var[209952]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 14);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_3) + oci_c)] * ((float*)fused_constant_30_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 14);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_30_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 14);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_30_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 14);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_30_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 14);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_30_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 14);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_30_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 14);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_30_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 14);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_30_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 14);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_30_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 14);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_30_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 14);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_30_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 14);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_30_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 14);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_30_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 14);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_42) + oci_c_13) + 52)] * ((float*)fused_constant_30_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_44 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_44] = ((float*)DepthwiseConv2d_global_let)[cse_var_44];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_45 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_45 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_10_let)[(((ax1_ax2_fused / 14) * 4) + ax4)]) * 3.410389e+01f)) + 1.140000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 56) + cse_var_45) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 114));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__11(float* p0, float* T_cast, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_11_let = (&(global_const_workspace_90_var[9070064]));
  void* fused_constant_33_let = (&(global_const_workspace_90_var[9004656]));
  void* PaddedInput_let = (&(global_workspace_91_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 464; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 16; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 15);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 64) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 15)) && (1 <= i3)) && (i3 < 15)) ? p0[((((((i0_i1_fused_i2_fused >> 4) * 784) + (cse_var_2 * 56)) + cse_var_1) + i4) - 60)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_91_var[209728]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_91_var[209952]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 14);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_3) + oci_c)] * ((float*)fused_constant_33_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 14);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_33_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 14);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_33_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 14);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_33_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 14);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_33_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 14);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_33_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 14);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_33_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 14);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_33_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 14);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_33_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 14);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_33_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 14);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_33_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 14);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_33_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 14);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_33_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 14);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_42) + oci_c_13) + 52)] * ((float*)fused_constant_33_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_44 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_44] = ((float*)DepthwiseConv2d_global_let)[cse_var_44];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_45 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_45 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_11_let)[(((ax1_ax2_fused / 14) * 4) + ax4)]) * 2.258075e+01f)) + 1.200000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 56) + cse_var_45) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 120));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__12(float* p0, float* T_cast, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_12_let = (&(global_const_workspace_96_var[9069600]));
  void* fused_constant_36_let = (&(global_const_workspace_96_var[9000480]));
  void* PaddedInput_let = (&(global_workspace_97_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 464; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 16; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 15);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 64) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 15)) && (1 <= i3)) && (i3 < 15)) ? p0[((((((i0_i1_fused_i2_fused >> 4) * 784) + (cse_var_2 * 56)) + cse_var_1) + i4) - 60)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_97_var[118784]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_97_var[119008]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 14);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_3) + oci_c)] * ((float*)fused_constant_36_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 14);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_36_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 14);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_36_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 14);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_36_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 14);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_36_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 14);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_36_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 14);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_36_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 14);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_36_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 14);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_36_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 14);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_36_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 14);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_36_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 14);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_36_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 14);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_36_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 14);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_42) + oci_c_13) + 52)] * ((float*)fused_constant_36_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_44 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_44] = ((float*)DepthwiseConv2d_global_let)[cse_var_44];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_45 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_45 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_12_let)[(((ax1_ax2_fused / 14) * 4) + ax4)]) * 2.821515e+01f)) + 1.320000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 56) + cse_var_45) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 132));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__13(float* p0, float* T_cast, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_13_let = (&(global_const_workspace_106_var[9069136]));
  void* fused_constant_39_let = (&(global_const_workspace_106_var[8996304]));
  void* PaddedInput_let = (&(global_workspace_107_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 464; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 16; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 15);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 64) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 15)) && (1 <= i3)) && (i3 < 15)) ? p0[((((((i0_i1_fused_i2_fused >> 4) * 784) + (cse_var_2 * 56)) + cse_var_1) + i4) - 60)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_107_var[118784]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_107_var[119008]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 14);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_3) + oci_c)] * ((float*)fused_constant_39_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 14);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_39_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 14);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_39_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 14);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_39_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 14);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_39_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 14);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_39_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 14);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_39_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 14);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_39_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 14);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_39_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 14);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_39_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 14);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_39_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 14);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_39_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 14);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_39_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 14);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_42) + oci_c_13) + 52)] * ((float*)fused_constant_39_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_44 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_44] = ((float*)DepthwiseConv2d_global_let)[cse_var_44];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_45 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_45 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_13_let)[(((ax1_ax2_fused / 14) * 4) + ax4)]) * 2.095568e+01f)) + 1.680000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 56) + cse_var_45) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 168));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__14(float* p0, float* T_cast, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_14_let = (&(global_const_workspace_112_var[9056672]));
  void* fused_constant_41_let = (&(global_const_workspace_112_var[8976816]));
  void* PaddedInput_let = (&(global_workspace_113_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 870; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 15; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 15);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 60) + cse_var_1) + i4)] = (((1 <= cse_var_2) && (1 <= i3)) ? p0[((((((i0_i1_fused_i2_fused / 15) * 784) + (cse_var_2 * 56)) + cse_var_1) + i4) - 60)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_113_var[436160]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_113_var[436272]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 7);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_3) + oci_c)] * ((float*)fused_constant_41_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 7);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_41_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 7);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_41_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 7);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_12) + oci_c_3) + 24)] * ((float*)fused_constant_41_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 7);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_15) + oci_c_4) + 32)] * ((float*)fused_constant_41_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 7);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_18) + oci_c_5) + 40)] * ((float*)fused_constant_41_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 7);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_21) + oci_c_6) + 48)] * ((float*)fused_constant_41_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_23 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_23] = ((float*)DepthwiseConv2d_global_let)[cse_var_23];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_24 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_24 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_14_let)[(((ax1_ax2_fused / 7) * 4) + ax4)]) * 2.429138e+01f)) + 1.120000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 28) + cse_var_24) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 112));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__15(float* p0, float* T_cast, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_15_let = (&(global_const_workspace_118_var[9055744]));
  void* fused_constant_44_let = (&(global_const_workspace_118_var[8968464]));
  void* PaddedInput_let = (&(global_workspace_119_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 870; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 15; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 15);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 60) + cse_var_1) + i4)] = (((1 <= cse_var_2) && (1 <= i3)) ? p0[((((((i0_i1_fused_i2_fused / 15) * 784) + (cse_var_2 * 56)) + cse_var_1) + i4) - 60)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_119_var[254272]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_119_var[254384]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 7);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_3) + oci_c)] * ((float*)fused_constant_44_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 7);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_44_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 7);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_44_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 7);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_12) + oci_c_3) + 24)] * ((float*)fused_constant_44_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 7);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_15) + oci_c_4) + 32)] * ((float*)fused_constant_44_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 7);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_18) + oci_c_5) + 40)] * ((float*)fused_constant_44_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 7);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 900) + ((ax1_ax2_fused % 7) * 120)) + (kh * 60)) + cse_var_21) + oci_c_6) + 48)] * ((float*)fused_constant_44_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_23 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_23] = ((float*)DepthwiseConv2d_global_let)[cse_var_23];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_24 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_24 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_15_let)[(((ax1_ax2_fused / 7) * 4) + ax4)]) * 1.646673e+01f)) + 1.420000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 28) + cse_var_24) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 142));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__16(float* p0, float* T_cast, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_16_let = (&(global_const_workspace_128_var[9054816]));
  void* fused_constant_47_let = (&(global_const_workspace_128_var[8960112]));
  void* PaddedInput_let = (&(global_workspace_129_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 522; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 9; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 9);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 36) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 8)) && (1 <= i3)) && (i3 < 8)) ? p0[((((((i0_i1_fused_i2_fused / 9) * 196) + (cse_var_2 * 28)) + cse_var_1) + i4) - 32)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_129_var[75168]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_129_var[75280]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 7);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_3) + oci_c)] * ((float*)fused_constant_47_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 7);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_47_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 7);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_47_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 7);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_47_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 7);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_47_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 7);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_47_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 7);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_47_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_23 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_23] = ((float*)DepthwiseConv2d_global_let)[cse_var_23];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_24 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_24 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_16_let)[(((ax1_ax2_fused / 7) * 4) + ax4)]) * 2.669477e+01f)) + 1.250000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 28) + cse_var_24) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 125));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__17(float* p0, float* T_cast, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_17_let = (&(global_const_workspace_138_var[9053888]));
  void* fused_constant_50_let = (&(global_const_workspace_138_var[8951760]));
  void* PaddedInput_let = (&(global_workspace_139_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 522; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 9; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 9);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 36) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 8)) && (1 <= i3)) && (i3 < 8)) ? p0[((((((i0_i1_fused_i2_fused / 9) * 196) + (cse_var_2 * 28)) + cse_var_1) + i4) - 32)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_139_var[75168]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_139_var[75280]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 7);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_3) + oci_c)] * ((float*)fused_constant_50_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 7);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_50_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 7);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_50_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 7);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_50_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 7);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_50_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 7);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_50_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 7);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_50_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_23 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_23] = ((float*)DepthwiseConv2d_global_let)[cse_var_23];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_24 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_24 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_17_let)[(((ax1_ax2_fused / 7) * 4) + ax4)]) * 2.251252e+01f)) + 1.420000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 28) + cse_var_24) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 142));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__18(float* p0, float* T_cast, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_18_let = (&(global_const_workspace_148_var[9052960]));
  void* fused_constant_53_let = (&(global_const_workspace_148_var[8943408]));
  void* PaddedInput_let = (&(global_workspace_149_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 522; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 9; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 9);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 36) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 8)) && (1 <= i3)) && (i3 < 8)) ? p0[((((((i0_i1_fused_i2_fused / 9) * 196) + (cse_var_2 * 28)) + cse_var_1) + i4) - 32)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_149_var[75168]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_149_var[75280]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 7);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_3) + oci_c)] * ((float*)fused_constant_53_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 7);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_53_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 7);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_53_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 7);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_53_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 7);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_53_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 7);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_53_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 7);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 324) + (kh * 36)) + ((ax1_ax2_fused % 7) * 36)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_53_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 7; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_23 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_23] = ((float*)DepthwiseConv2d_global_let)[cse_var_23];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_24 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_24 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_18_let)[(((ax1_ax2_fused / 7) * 4) + ax4)]) * 2.163630e+01f)) + 1.370000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 28) + cse_var_24) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 137));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__2(float* p0, float* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_2_let = (&(global_const_workspace_28_var[9079360]));
  void* fused_constant_7_let = (&(global_const_workspace_28_var[9044576]));
  void* PaddedInput_let = (&(global_workspace_29_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 870; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 30; ++i3) {
      for (int32_t i4 = 0; i4 < 2; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 30);
        int32_t cse_var_1 = (i3 * 2);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 60) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 29)) && (1 <= i3)) && (i3 < 29)) ? p0[((((((i0_i1_fused_i2_fused / 30) * 1568) + (cse_var_2 * 56)) + cse_var_1) + i4) - 58)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 812; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_29_var[208800]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_29_var[209024]));
    for (int32_t oci_c_init = 0; oci_c_init < 2; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 2; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 2)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 2; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 2; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 6)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 2; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 2; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 10)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_6 = 0; oci_c_init_6 < 2; ++oci_c_init_6) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_6 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_7 = 0; oci_c_init_7 < 2; ++oci_c_init_7) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_7 + 14)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_8 = 0; oci_c_init_8 < 2; ++oci_c_init_8) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_8 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_9 = 0; oci_c_init_9 < 2; ++oci_c_init_9) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_9 + 18)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_10 = 0; oci_c_init_10 < 2; ++oci_c_init_10) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_10 + 20)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_11 = 0; oci_c_init_11 < 2; ++oci_c_init_11) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_11 + 22)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_12 = 0; oci_c_init_12 < 2; ++oci_c_init_12) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_12 + 24)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_13 = 0; oci_c_init_13 < 2; ++oci_c_init_13) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_13 + 26)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_14 = 0; oci_c_init_14 < 2; ++oci_c_init_14) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_14 + 28)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_15 = 0; oci_c_init_15 < 2; ++oci_c_init_15) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_15 + 30)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_16 = 0; oci_c_init_16 < 2; ++oci_c_init_16) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_16 + 32)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_17 = 0; oci_c_init_17 < 2; ++oci_c_init_17) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_17 + 34)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_18 = 0; oci_c_init_18 < 2; ++oci_c_init_18) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_18 + 36)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_19 = 0; oci_c_init_19 < 2; ++oci_c_init_19) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_19 + 38)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_20 = 0; oci_c_init_20 < 2; ++oci_c_init_20) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_20 + 40)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_21 = 0; oci_c_init_21 < 2; ++oci_c_init_21) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_21 + 42)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_22 = 0; oci_c_init_22 < 2; ++oci_c_init_22) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_22 + 44)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_23 = 0; oci_c_init_23 < 2; ++oci_c_init_23) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_23 + 46)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_24 = 0; oci_c_init_24 < 2; ++oci_c_init_24) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_24 + 48)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_25 = 0; oci_c_init_25 < 2; ++oci_c_init_25) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_25 + 50)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_26 = 0; oci_c_init_26 < 2; ++oci_c_init_26) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_26 + 52)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_27 = 0; oci_c_init_27 < 2; ++oci_c_init_27) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_27 + 54)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 2; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 28);
          int32_t cse_var_3 = (kw * 2);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_3) + oci_c)] * ((float*)fused_constant_7_let)[((((cse_var_4 * 18) + (kh * 6)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 2; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 28);
          int32_t cse_var_6 = (kw * 2);
          int32_t cse_var_5 = (oci_c_1 + 2);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_6) + oci_c_1) + 2)] * ((float*)fused_constant_7_let)[((((cse_var_7 * 18) + (kh * 6)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 2; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 28);
          int32_t cse_var_9 = (kw * 2);
          int32_t cse_var_8 = (oci_c_2 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_9) + oci_c_2) + 4)] * ((float*)fused_constant_7_let)[((((cse_var_10 * 18) + (kh * 6)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 2; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 28);
          int32_t cse_var_12 = (kw * 2);
          int32_t cse_var_11 = (oci_c_3 + 6);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_12) + oci_c_3) + 6)] * ((float*)fused_constant_7_let)[((((cse_var_13 * 18) + (kh * 6)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 2; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 28);
          int32_t cse_var_15 = (kw * 2);
          int32_t cse_var_14 = (oci_c_4 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_15) + oci_c_4) + 8)] * ((float*)fused_constant_7_let)[((((cse_var_16 * 18) + (kh * 6)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 2; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 28);
          int32_t cse_var_18 = (kw * 2);
          int32_t cse_var_17 = (oci_c_5 + 10);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_18) + oci_c_5) + 10)] * ((float*)fused_constant_7_let)[((((cse_var_19 * 18) + (kh * 6)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 2; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 28);
          int32_t cse_var_21 = (kw * 2);
          int32_t cse_var_20 = (oci_c_6 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_21) + oci_c_6) + 12)] * ((float*)fused_constant_7_let)[((((cse_var_22 * 18) + (kh * 6)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 2; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 28);
          int32_t cse_var_24 = (kw * 2);
          int32_t cse_var_23 = (oci_c_7 + 14);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_24) + oci_c_7) + 14)] * ((float*)fused_constant_7_let)[((((cse_var_25 * 18) + (kh * 6)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 2; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 28);
          int32_t cse_var_27 = (kw * 2);
          int32_t cse_var_26 = (oci_c_8 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_27) + oci_c_8) + 16)] * ((float*)fused_constant_7_let)[((((cse_var_28 * 18) + (kh * 6)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 2; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 28);
          int32_t cse_var_30 = (kw * 2);
          int32_t cse_var_29 = (oci_c_9 + 18);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_30) + oci_c_9) + 18)] * ((float*)fused_constant_7_let)[((((cse_var_31 * 18) + (kh * 6)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 2; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 28);
          int32_t cse_var_33 = (kw * 2);
          int32_t cse_var_32 = (oci_c_10 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_33) + oci_c_10) + 20)] * ((float*)fused_constant_7_let)[((((cse_var_34 * 18) + (kh * 6)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 2; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 28);
          int32_t cse_var_36 = (kw * 2);
          int32_t cse_var_35 = (oci_c_11 + 22);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_36) + oci_c_11) + 22)] * ((float*)fused_constant_7_let)[((((cse_var_37 * 18) + (kh * 6)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 2; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 28);
          int32_t cse_var_39 = (kw * 2);
          int32_t cse_var_38 = (oci_c_12 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_39) + oci_c_12) + 24)] * ((float*)fused_constant_7_let)[((((cse_var_40 * 18) + (kh * 6)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 2; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 28);
          int32_t cse_var_42 = (kw * 2);
          int32_t cse_var_41 = (oci_c_13 + 26);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_42) + oci_c_13) + 26)] * ((float*)fused_constant_7_let)[((((cse_var_43 * 18) + (kh * 6)) + cse_var_42) + oci_c_13)]));
        }
        for (int32_t oci_c_14 = 0; oci_c_14 < 2; ++oci_c_14) {
          int32_t cse_var_46 = (ax1_ax2_fused / 28);
          int32_t cse_var_45 = (kw * 2);
          int32_t cse_var_44 = (oci_c_14 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[((((((cse_var_46 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_45) + oci_c_14) + 28)] * ((float*)fused_constant_7_let)[((((cse_var_46 * 18) + (kh * 6)) + cse_var_45) + oci_c_14)]));
        }
        for (int32_t oci_c_15 = 0; oci_c_15 < 2; ++oci_c_15) {
          int32_t cse_var_49 = (ax1_ax2_fused / 28);
          int32_t cse_var_48 = (kw * 2);
          int32_t cse_var_47 = (oci_c_15 + 30);
          ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[((((((cse_var_49 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_48) + oci_c_15) + 30)] * ((float*)fused_constant_7_let)[((((cse_var_49 * 18) + (kh * 6)) + cse_var_48) + oci_c_15)]));
        }
        for (int32_t oci_c_16 = 0; oci_c_16 < 2; ++oci_c_16) {
          int32_t cse_var_52 = (ax1_ax2_fused / 28);
          int32_t cse_var_51 = (kw * 2);
          int32_t cse_var_50 = (oci_c_16 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_let)[((((((cse_var_52 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_51) + oci_c_16) + 32)] * ((float*)fused_constant_7_let)[((((cse_var_52 * 18) + (kh * 6)) + cse_var_51) + oci_c_16)]));
        }
        for (int32_t oci_c_17 = 0; oci_c_17 < 2; ++oci_c_17) {
          int32_t cse_var_55 = (ax1_ax2_fused / 28);
          int32_t cse_var_54 = (kw * 2);
          int32_t cse_var_53 = (oci_c_17 + 34);
          ((float*)DepthwiseConv2d_global_let)[cse_var_53] = (((float*)DepthwiseConv2d_global_let)[cse_var_53] + (((float*)PaddedInput_let)[((((((cse_var_55 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_54) + oci_c_17) + 34)] * ((float*)fused_constant_7_let)[((((cse_var_55 * 18) + (kh * 6)) + cse_var_54) + oci_c_17)]));
        }
        for (int32_t oci_c_18 = 0; oci_c_18 < 2; ++oci_c_18) {
          int32_t cse_var_58 = (ax1_ax2_fused / 28);
          int32_t cse_var_57 = (kw * 2);
          int32_t cse_var_56 = (oci_c_18 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_56] = (((float*)DepthwiseConv2d_global_let)[cse_var_56] + (((float*)PaddedInput_let)[((((((cse_var_58 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_57) + oci_c_18) + 36)] * ((float*)fused_constant_7_let)[((((cse_var_58 * 18) + (kh * 6)) + cse_var_57) + oci_c_18)]));
        }
        for (int32_t oci_c_19 = 0; oci_c_19 < 2; ++oci_c_19) {
          int32_t cse_var_61 = (ax1_ax2_fused / 28);
          int32_t cse_var_60 = (kw * 2);
          int32_t cse_var_59 = (oci_c_19 + 38);
          ((float*)DepthwiseConv2d_global_let)[cse_var_59] = (((float*)DepthwiseConv2d_global_let)[cse_var_59] + (((float*)PaddedInput_let)[((((((cse_var_61 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_60) + oci_c_19) + 38)] * ((float*)fused_constant_7_let)[((((cse_var_61 * 18) + (kh * 6)) + cse_var_60) + oci_c_19)]));
        }
        for (int32_t oci_c_20 = 0; oci_c_20 < 2; ++oci_c_20) {
          int32_t cse_var_64 = (ax1_ax2_fused / 28);
          int32_t cse_var_63 = (kw * 2);
          int32_t cse_var_62 = (oci_c_20 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_62] = (((float*)DepthwiseConv2d_global_let)[cse_var_62] + (((float*)PaddedInput_let)[((((((cse_var_64 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_63) + oci_c_20) + 40)] * ((float*)fused_constant_7_let)[((((cse_var_64 * 18) + (kh * 6)) + cse_var_63) + oci_c_20)]));
        }
        for (int32_t oci_c_21 = 0; oci_c_21 < 2; ++oci_c_21) {
          int32_t cse_var_67 = (ax1_ax2_fused / 28);
          int32_t cse_var_66 = (kw * 2);
          int32_t cse_var_65 = (oci_c_21 + 42);
          ((float*)DepthwiseConv2d_global_let)[cse_var_65] = (((float*)DepthwiseConv2d_global_let)[cse_var_65] + (((float*)PaddedInput_let)[((((((cse_var_67 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_66) + oci_c_21) + 42)] * ((float*)fused_constant_7_let)[((((cse_var_67 * 18) + (kh * 6)) + cse_var_66) + oci_c_21)]));
        }
        for (int32_t oci_c_22 = 0; oci_c_22 < 2; ++oci_c_22) {
          int32_t cse_var_70 = (ax1_ax2_fused / 28);
          int32_t cse_var_69 = (kw * 2);
          int32_t cse_var_68 = (oci_c_22 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_68] = (((float*)DepthwiseConv2d_global_let)[cse_var_68] + (((float*)PaddedInput_let)[((((((cse_var_70 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_69) + oci_c_22) + 44)] * ((float*)fused_constant_7_let)[((((cse_var_70 * 18) + (kh * 6)) + cse_var_69) + oci_c_22)]));
        }
        for (int32_t oci_c_23 = 0; oci_c_23 < 2; ++oci_c_23) {
          int32_t cse_var_73 = (ax1_ax2_fused / 28);
          int32_t cse_var_72 = (kw * 2);
          int32_t cse_var_71 = (oci_c_23 + 46);
          ((float*)DepthwiseConv2d_global_let)[cse_var_71] = (((float*)DepthwiseConv2d_global_let)[cse_var_71] + (((float*)PaddedInput_let)[((((((cse_var_73 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_72) + oci_c_23) + 46)] * ((float*)fused_constant_7_let)[((((cse_var_73 * 18) + (kh * 6)) + cse_var_72) + oci_c_23)]));
        }
        for (int32_t oci_c_24 = 0; oci_c_24 < 2; ++oci_c_24) {
          int32_t cse_var_76 = (ax1_ax2_fused / 28);
          int32_t cse_var_75 = (kw * 2);
          int32_t cse_var_74 = (oci_c_24 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_74] = (((float*)DepthwiseConv2d_global_let)[cse_var_74] + (((float*)PaddedInput_let)[((((((cse_var_76 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_75) + oci_c_24) + 48)] * ((float*)fused_constant_7_let)[((((cse_var_76 * 18) + (kh * 6)) + cse_var_75) + oci_c_24)]));
        }
        for (int32_t oci_c_25 = 0; oci_c_25 < 2; ++oci_c_25) {
          int32_t cse_var_79 = (ax1_ax2_fused / 28);
          int32_t cse_var_78 = (kw * 2);
          int32_t cse_var_77 = (oci_c_25 + 50);
          ((float*)DepthwiseConv2d_global_let)[cse_var_77] = (((float*)DepthwiseConv2d_global_let)[cse_var_77] + (((float*)PaddedInput_let)[((((((cse_var_79 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_78) + oci_c_25) + 50)] * ((float*)fused_constant_7_let)[((((cse_var_79 * 18) + (kh * 6)) + cse_var_78) + oci_c_25)]));
        }
        for (int32_t oci_c_26 = 0; oci_c_26 < 2; ++oci_c_26) {
          int32_t cse_var_82 = (ax1_ax2_fused / 28);
          int32_t cse_var_81 = (kw * 2);
          int32_t cse_var_80 = (oci_c_26 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_80] = (((float*)DepthwiseConv2d_global_let)[cse_var_80] + (((float*)PaddedInput_let)[((((((cse_var_82 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_81) + oci_c_26) + 52)] * ((float*)fused_constant_7_let)[((((cse_var_82 * 18) + (kh * 6)) + cse_var_81) + oci_c_26)]));
        }
        for (int32_t oci_c_27 = 0; oci_c_27 < 2; ++oci_c_27) {
          int32_t cse_var_85 = (ax1_ax2_fused / 28);
          int32_t cse_var_84 = (kw * 2);
          int32_t cse_var_83 = (oci_c_27 + 54);
          ((float*)DepthwiseConv2d_global_let)[cse_var_83] = (((float*)DepthwiseConv2d_global_let)[cse_var_83] + (((float*)PaddedInput_let)[((((((cse_var_85 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_84) + oci_c_27) + 54)] * ((float*)fused_constant_7_let)[((((cse_var_85 * 18) + (kh * 6)) + cse_var_84) + oci_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oci = 0; oci < 2; ++oci) {
        int32_t cse_var_86 = ((ow_inner * 2) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_86] = ((float*)DepthwiseConv2d_global_let)[cse_var_86];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
        int32_t cse_var_87 = (ax3_inner * 2);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_87 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_2_let)[(((ax1_ax2_fused / 28) * 2) + ax4)]) * 2.655868e+01f)) + 1.260000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 56) + cse_var_87) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 126));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__3(float* p0, float* T_cast, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_3_let = (&(global_const_workspace_36_var[9079120]));
  void* fused_constant_10_let = (&(global_const_workspace_36_var[9050864]));
  void* PaddedInput_let = (&(global_workspace_37_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 870; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 30; ++i3) {
      for (int32_t i4 = 0; i4 < 2; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 30);
        int32_t cse_var_1 = (i3 * 2);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 60) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 29)) && (1 <= i3)) && (i3 < 29)) ? p0[((((((i0_i1_fused_i2_fused / 30) * 1568) + (cse_var_2 * 56)) + cse_var_1) + i4) - 58)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 812; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_37_var[208800]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_37_var[209024]));
    for (int32_t oci_c_init = 0; oci_c_init < 2; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 2; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 2)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 2; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 2; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 6)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 2; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 2; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 10)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_6 = 0; oci_c_init_6 < 2; ++oci_c_init_6) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_6 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_7 = 0; oci_c_init_7 < 2; ++oci_c_init_7) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_7 + 14)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_8 = 0; oci_c_init_8 < 2; ++oci_c_init_8) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_8 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_9 = 0; oci_c_init_9 < 2; ++oci_c_init_9) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_9 + 18)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_10 = 0; oci_c_init_10 < 2; ++oci_c_init_10) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_10 + 20)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_11 = 0; oci_c_init_11 < 2; ++oci_c_init_11) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_11 + 22)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_12 = 0; oci_c_init_12 < 2; ++oci_c_init_12) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_12 + 24)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_13 = 0; oci_c_init_13 < 2; ++oci_c_init_13) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_13 + 26)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_14 = 0; oci_c_init_14 < 2; ++oci_c_init_14) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_14 + 28)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_15 = 0; oci_c_init_15 < 2; ++oci_c_init_15) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_15 + 30)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_16 = 0; oci_c_init_16 < 2; ++oci_c_init_16) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_16 + 32)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_17 = 0; oci_c_init_17 < 2; ++oci_c_init_17) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_17 + 34)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_18 = 0; oci_c_init_18 < 2; ++oci_c_init_18) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_18 + 36)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_19 = 0; oci_c_init_19 < 2; ++oci_c_init_19) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_19 + 38)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_20 = 0; oci_c_init_20 < 2; ++oci_c_init_20) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_20 + 40)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_21 = 0; oci_c_init_21 < 2; ++oci_c_init_21) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_21 + 42)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_22 = 0; oci_c_init_22 < 2; ++oci_c_init_22) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_22 + 44)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_23 = 0; oci_c_init_23 < 2; ++oci_c_init_23) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_23 + 46)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_24 = 0; oci_c_init_24 < 2; ++oci_c_init_24) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_24 + 48)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_25 = 0; oci_c_init_25 < 2; ++oci_c_init_25) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_25 + 50)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_26 = 0; oci_c_init_26 < 2; ++oci_c_init_26) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_26 + 52)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_27 = 0; oci_c_init_27 < 2; ++oci_c_init_27) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_27 + 54)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 2; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 28);
          int32_t cse_var_3 = (kw * 2);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_3) + oci_c)] * ((float*)fused_constant_10_let)[((((cse_var_4 * 18) + (kh * 6)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 2; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 28);
          int32_t cse_var_6 = (kw * 2);
          int32_t cse_var_5 = (oci_c_1 + 2);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_6) + oci_c_1) + 2)] * ((float*)fused_constant_10_let)[((((cse_var_7 * 18) + (kh * 6)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 2; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 28);
          int32_t cse_var_9 = (kw * 2);
          int32_t cse_var_8 = (oci_c_2 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_9) + oci_c_2) + 4)] * ((float*)fused_constant_10_let)[((((cse_var_10 * 18) + (kh * 6)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 2; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 28);
          int32_t cse_var_12 = (kw * 2);
          int32_t cse_var_11 = (oci_c_3 + 6);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_12) + oci_c_3) + 6)] * ((float*)fused_constant_10_let)[((((cse_var_13 * 18) + (kh * 6)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 2; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 28);
          int32_t cse_var_15 = (kw * 2);
          int32_t cse_var_14 = (oci_c_4 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_15) + oci_c_4) + 8)] * ((float*)fused_constant_10_let)[((((cse_var_16 * 18) + (kh * 6)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 2; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 28);
          int32_t cse_var_18 = (kw * 2);
          int32_t cse_var_17 = (oci_c_5 + 10);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_18) + oci_c_5) + 10)] * ((float*)fused_constant_10_let)[((((cse_var_19 * 18) + (kh * 6)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 2; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 28);
          int32_t cse_var_21 = (kw * 2);
          int32_t cse_var_20 = (oci_c_6 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_21) + oci_c_6) + 12)] * ((float*)fused_constant_10_let)[((((cse_var_22 * 18) + (kh * 6)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 2; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 28);
          int32_t cse_var_24 = (kw * 2);
          int32_t cse_var_23 = (oci_c_7 + 14);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_24) + oci_c_7) + 14)] * ((float*)fused_constant_10_let)[((((cse_var_25 * 18) + (kh * 6)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 2; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 28);
          int32_t cse_var_27 = (kw * 2);
          int32_t cse_var_26 = (oci_c_8 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_27) + oci_c_8) + 16)] * ((float*)fused_constant_10_let)[((((cse_var_28 * 18) + (kh * 6)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 2; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 28);
          int32_t cse_var_30 = (kw * 2);
          int32_t cse_var_29 = (oci_c_9 + 18);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_30) + oci_c_9) + 18)] * ((float*)fused_constant_10_let)[((((cse_var_31 * 18) + (kh * 6)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 2; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 28);
          int32_t cse_var_33 = (kw * 2);
          int32_t cse_var_32 = (oci_c_10 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_33) + oci_c_10) + 20)] * ((float*)fused_constant_10_let)[((((cse_var_34 * 18) + (kh * 6)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 2; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 28);
          int32_t cse_var_36 = (kw * 2);
          int32_t cse_var_35 = (oci_c_11 + 22);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_36) + oci_c_11) + 22)] * ((float*)fused_constant_10_let)[((((cse_var_37 * 18) + (kh * 6)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 2; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 28);
          int32_t cse_var_39 = (kw * 2);
          int32_t cse_var_38 = (oci_c_12 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_39) + oci_c_12) + 24)] * ((float*)fused_constant_10_let)[((((cse_var_40 * 18) + (kh * 6)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 2; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 28);
          int32_t cse_var_42 = (kw * 2);
          int32_t cse_var_41 = (oci_c_13 + 26);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_42) + oci_c_13) + 26)] * ((float*)fused_constant_10_let)[((((cse_var_43 * 18) + (kh * 6)) + cse_var_42) + oci_c_13)]));
        }
        for (int32_t oci_c_14 = 0; oci_c_14 < 2; ++oci_c_14) {
          int32_t cse_var_46 = (ax1_ax2_fused / 28);
          int32_t cse_var_45 = (kw * 2);
          int32_t cse_var_44 = (oci_c_14 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[((((((cse_var_46 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_45) + oci_c_14) + 28)] * ((float*)fused_constant_10_let)[((((cse_var_46 * 18) + (kh * 6)) + cse_var_45) + oci_c_14)]));
        }
        for (int32_t oci_c_15 = 0; oci_c_15 < 2; ++oci_c_15) {
          int32_t cse_var_49 = (ax1_ax2_fused / 28);
          int32_t cse_var_48 = (kw * 2);
          int32_t cse_var_47 = (oci_c_15 + 30);
          ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[((((((cse_var_49 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_48) + oci_c_15) + 30)] * ((float*)fused_constant_10_let)[((((cse_var_49 * 18) + (kh * 6)) + cse_var_48) + oci_c_15)]));
        }
        for (int32_t oci_c_16 = 0; oci_c_16 < 2; ++oci_c_16) {
          int32_t cse_var_52 = (ax1_ax2_fused / 28);
          int32_t cse_var_51 = (kw * 2);
          int32_t cse_var_50 = (oci_c_16 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_let)[((((((cse_var_52 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_51) + oci_c_16) + 32)] * ((float*)fused_constant_10_let)[((((cse_var_52 * 18) + (kh * 6)) + cse_var_51) + oci_c_16)]));
        }
        for (int32_t oci_c_17 = 0; oci_c_17 < 2; ++oci_c_17) {
          int32_t cse_var_55 = (ax1_ax2_fused / 28);
          int32_t cse_var_54 = (kw * 2);
          int32_t cse_var_53 = (oci_c_17 + 34);
          ((float*)DepthwiseConv2d_global_let)[cse_var_53] = (((float*)DepthwiseConv2d_global_let)[cse_var_53] + (((float*)PaddedInput_let)[((((((cse_var_55 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_54) + oci_c_17) + 34)] * ((float*)fused_constant_10_let)[((((cse_var_55 * 18) + (kh * 6)) + cse_var_54) + oci_c_17)]));
        }
        for (int32_t oci_c_18 = 0; oci_c_18 < 2; ++oci_c_18) {
          int32_t cse_var_58 = (ax1_ax2_fused / 28);
          int32_t cse_var_57 = (kw * 2);
          int32_t cse_var_56 = (oci_c_18 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_56] = (((float*)DepthwiseConv2d_global_let)[cse_var_56] + (((float*)PaddedInput_let)[((((((cse_var_58 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_57) + oci_c_18) + 36)] * ((float*)fused_constant_10_let)[((((cse_var_58 * 18) + (kh * 6)) + cse_var_57) + oci_c_18)]));
        }
        for (int32_t oci_c_19 = 0; oci_c_19 < 2; ++oci_c_19) {
          int32_t cse_var_61 = (ax1_ax2_fused / 28);
          int32_t cse_var_60 = (kw * 2);
          int32_t cse_var_59 = (oci_c_19 + 38);
          ((float*)DepthwiseConv2d_global_let)[cse_var_59] = (((float*)DepthwiseConv2d_global_let)[cse_var_59] + (((float*)PaddedInput_let)[((((((cse_var_61 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_60) + oci_c_19) + 38)] * ((float*)fused_constant_10_let)[((((cse_var_61 * 18) + (kh * 6)) + cse_var_60) + oci_c_19)]));
        }
        for (int32_t oci_c_20 = 0; oci_c_20 < 2; ++oci_c_20) {
          int32_t cse_var_64 = (ax1_ax2_fused / 28);
          int32_t cse_var_63 = (kw * 2);
          int32_t cse_var_62 = (oci_c_20 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_62] = (((float*)DepthwiseConv2d_global_let)[cse_var_62] + (((float*)PaddedInput_let)[((((((cse_var_64 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_63) + oci_c_20) + 40)] * ((float*)fused_constant_10_let)[((((cse_var_64 * 18) + (kh * 6)) + cse_var_63) + oci_c_20)]));
        }
        for (int32_t oci_c_21 = 0; oci_c_21 < 2; ++oci_c_21) {
          int32_t cse_var_67 = (ax1_ax2_fused / 28);
          int32_t cse_var_66 = (kw * 2);
          int32_t cse_var_65 = (oci_c_21 + 42);
          ((float*)DepthwiseConv2d_global_let)[cse_var_65] = (((float*)DepthwiseConv2d_global_let)[cse_var_65] + (((float*)PaddedInput_let)[((((((cse_var_67 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_66) + oci_c_21) + 42)] * ((float*)fused_constant_10_let)[((((cse_var_67 * 18) + (kh * 6)) + cse_var_66) + oci_c_21)]));
        }
        for (int32_t oci_c_22 = 0; oci_c_22 < 2; ++oci_c_22) {
          int32_t cse_var_70 = (ax1_ax2_fused / 28);
          int32_t cse_var_69 = (kw * 2);
          int32_t cse_var_68 = (oci_c_22 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_68] = (((float*)DepthwiseConv2d_global_let)[cse_var_68] + (((float*)PaddedInput_let)[((((((cse_var_70 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_69) + oci_c_22) + 44)] * ((float*)fused_constant_10_let)[((((cse_var_70 * 18) + (kh * 6)) + cse_var_69) + oci_c_22)]));
        }
        for (int32_t oci_c_23 = 0; oci_c_23 < 2; ++oci_c_23) {
          int32_t cse_var_73 = (ax1_ax2_fused / 28);
          int32_t cse_var_72 = (kw * 2);
          int32_t cse_var_71 = (oci_c_23 + 46);
          ((float*)DepthwiseConv2d_global_let)[cse_var_71] = (((float*)DepthwiseConv2d_global_let)[cse_var_71] + (((float*)PaddedInput_let)[((((((cse_var_73 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_72) + oci_c_23) + 46)] * ((float*)fused_constant_10_let)[((((cse_var_73 * 18) + (kh * 6)) + cse_var_72) + oci_c_23)]));
        }
        for (int32_t oci_c_24 = 0; oci_c_24 < 2; ++oci_c_24) {
          int32_t cse_var_76 = (ax1_ax2_fused / 28);
          int32_t cse_var_75 = (kw * 2);
          int32_t cse_var_74 = (oci_c_24 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_74] = (((float*)DepthwiseConv2d_global_let)[cse_var_74] + (((float*)PaddedInput_let)[((((((cse_var_76 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_75) + oci_c_24) + 48)] * ((float*)fused_constant_10_let)[((((cse_var_76 * 18) + (kh * 6)) + cse_var_75) + oci_c_24)]));
        }
        for (int32_t oci_c_25 = 0; oci_c_25 < 2; ++oci_c_25) {
          int32_t cse_var_79 = (ax1_ax2_fused / 28);
          int32_t cse_var_78 = (kw * 2);
          int32_t cse_var_77 = (oci_c_25 + 50);
          ((float*)DepthwiseConv2d_global_let)[cse_var_77] = (((float*)DepthwiseConv2d_global_let)[cse_var_77] + (((float*)PaddedInput_let)[((((((cse_var_79 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_78) + oci_c_25) + 50)] * ((float*)fused_constant_10_let)[((((cse_var_79 * 18) + (kh * 6)) + cse_var_78) + oci_c_25)]));
        }
        for (int32_t oci_c_26 = 0; oci_c_26 < 2; ++oci_c_26) {
          int32_t cse_var_82 = (ax1_ax2_fused / 28);
          int32_t cse_var_81 = (kw * 2);
          int32_t cse_var_80 = (oci_c_26 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_80] = (((float*)DepthwiseConv2d_global_let)[cse_var_80] + (((float*)PaddedInput_let)[((((((cse_var_82 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_81) + oci_c_26) + 52)] * ((float*)fused_constant_10_let)[((((cse_var_82 * 18) + (kh * 6)) + cse_var_81) + oci_c_26)]));
        }
        for (int32_t oci_c_27 = 0; oci_c_27 < 2; ++oci_c_27) {
          int32_t cse_var_85 = (ax1_ax2_fused / 28);
          int32_t cse_var_84 = (kw * 2);
          int32_t cse_var_83 = (oci_c_27 + 54);
          ((float*)DepthwiseConv2d_global_let)[cse_var_83] = (((float*)DepthwiseConv2d_global_let)[cse_var_83] + (((float*)PaddedInput_let)[((((((cse_var_85 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_84) + oci_c_27) + 54)] * ((float*)fused_constant_10_let)[((((cse_var_85 * 18) + (kh * 6)) + cse_var_84) + oci_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oci = 0; oci < 2; ++oci) {
        int32_t cse_var_86 = ((ow_inner * 2) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_86] = ((float*)DepthwiseConv2d_global_let)[cse_var_86];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
        int32_t cse_var_87 = (ax3_inner * 2);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_87 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_3_let)[(((ax1_ax2_fused / 28) * 2) + ax4)]) * 2.365004e+01f)) + 1.270000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 56) + cse_var_87) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 127));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__4(float* p0, float* T_cast, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_4_let = (&(global_const_workspace_42_var[9078880]));
  void* fused_constant_13_let = (&(global_const_workspace_42_var[9048768]));
  void* PaddedInput_let = (&(global_workspace_43_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 870; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 30; ++i3) {
      for (int32_t i4 = 0; i4 < 2; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 30);
        int32_t cse_var_1 = (i3 * 2);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 60) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 29)) && (1 <= i3)) && (i3 < 29)) ? p0[((((((i0_i1_fused_i2_fused / 30) * 1568) + (cse_var_2 * 56)) + cse_var_1) + i4) - 58)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 812; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_43_var[208800]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_43_var[209024]));
    for (int32_t oci_c_init = 0; oci_c_init < 2; ++oci_c_init) {
      ((float*)DepthwiseConv2d_global_let)[oci_c_init] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_1 = 0; oci_c_init_1 < 2; ++oci_c_init_1) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_1 + 2)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_2 = 0; oci_c_init_2 < 2; ++oci_c_init_2) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_2 + 4)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_3 = 0; oci_c_init_3 < 2; ++oci_c_init_3) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_3 + 6)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_4 = 0; oci_c_init_4 < 2; ++oci_c_init_4) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_4 + 8)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_5 = 0; oci_c_init_5 < 2; ++oci_c_init_5) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_5 + 10)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_6 = 0; oci_c_init_6 < 2; ++oci_c_init_6) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_6 + 12)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_7 = 0; oci_c_init_7 < 2; ++oci_c_init_7) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_7 + 14)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_8 = 0; oci_c_init_8 < 2; ++oci_c_init_8) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_8 + 16)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_9 = 0; oci_c_init_9 < 2; ++oci_c_init_9) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_9 + 18)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_10 = 0; oci_c_init_10 < 2; ++oci_c_init_10) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_10 + 20)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_11 = 0; oci_c_init_11 < 2; ++oci_c_init_11) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_11 + 22)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_12 = 0; oci_c_init_12 < 2; ++oci_c_init_12) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_12 + 24)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_13 = 0; oci_c_init_13 < 2; ++oci_c_init_13) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_13 + 26)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_14 = 0; oci_c_init_14 < 2; ++oci_c_init_14) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_14 + 28)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_15 = 0; oci_c_init_15 < 2; ++oci_c_init_15) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_15 + 30)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_16 = 0; oci_c_init_16 < 2; ++oci_c_init_16) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_16 + 32)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_17 = 0; oci_c_init_17 < 2; ++oci_c_init_17) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_17 + 34)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_18 = 0; oci_c_init_18 < 2; ++oci_c_init_18) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_18 + 36)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_19 = 0; oci_c_init_19 < 2; ++oci_c_init_19) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_19 + 38)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_20 = 0; oci_c_init_20 < 2; ++oci_c_init_20) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_20 + 40)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_21 = 0; oci_c_init_21 < 2; ++oci_c_init_21) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_21 + 42)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_22 = 0; oci_c_init_22 < 2; ++oci_c_init_22) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_22 + 44)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_23 = 0; oci_c_init_23 < 2; ++oci_c_init_23) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_23 + 46)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_24 = 0; oci_c_init_24 < 2; ++oci_c_init_24) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_24 + 48)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_25 = 0; oci_c_init_25 < 2; ++oci_c_init_25) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_25 + 50)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_26 = 0; oci_c_init_26 < 2; ++oci_c_init_26) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_26 + 52)] = 0.000000e+00f;
    }
    for (int32_t oci_c_init_27 = 0; oci_c_init_27 < 2; ++oci_c_init_27) {
      ((float*)DepthwiseConv2d_global_let)[(oci_c_init_27 + 54)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 2; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 28);
          int32_t cse_var_3 = (kw * 2);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_3) + oci_c)] * ((float*)fused_constant_13_let)[((((cse_var_4 * 18) + (kh * 6)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 2; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 28);
          int32_t cse_var_6 = (kw * 2);
          int32_t cse_var_5 = (oci_c_1 + 2);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_6) + oci_c_1) + 2)] * ((float*)fused_constant_13_let)[((((cse_var_7 * 18) + (kh * 6)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 2; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 28);
          int32_t cse_var_9 = (kw * 2);
          int32_t cse_var_8 = (oci_c_2 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_9) + oci_c_2) + 4)] * ((float*)fused_constant_13_let)[((((cse_var_10 * 18) + (kh * 6)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 2; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 28);
          int32_t cse_var_12 = (kw * 2);
          int32_t cse_var_11 = (oci_c_3 + 6);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_12) + oci_c_3) + 6)] * ((float*)fused_constant_13_let)[((((cse_var_13 * 18) + (kh * 6)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 2; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 28);
          int32_t cse_var_15 = (kw * 2);
          int32_t cse_var_14 = (oci_c_4 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_15) + oci_c_4) + 8)] * ((float*)fused_constant_13_let)[((((cse_var_16 * 18) + (kh * 6)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 2; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 28);
          int32_t cse_var_18 = (kw * 2);
          int32_t cse_var_17 = (oci_c_5 + 10);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_18) + oci_c_5) + 10)] * ((float*)fused_constant_13_let)[((((cse_var_19 * 18) + (kh * 6)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 2; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 28);
          int32_t cse_var_21 = (kw * 2);
          int32_t cse_var_20 = (oci_c_6 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_21) + oci_c_6) + 12)] * ((float*)fused_constant_13_let)[((((cse_var_22 * 18) + (kh * 6)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 2; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 28);
          int32_t cse_var_24 = (kw * 2);
          int32_t cse_var_23 = (oci_c_7 + 14);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_24) + oci_c_7) + 14)] * ((float*)fused_constant_13_let)[((((cse_var_25 * 18) + (kh * 6)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 2; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 28);
          int32_t cse_var_27 = (kw * 2);
          int32_t cse_var_26 = (oci_c_8 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_27) + oci_c_8) + 16)] * ((float*)fused_constant_13_let)[((((cse_var_28 * 18) + (kh * 6)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 2; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 28);
          int32_t cse_var_30 = (kw * 2);
          int32_t cse_var_29 = (oci_c_9 + 18);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_30) + oci_c_9) + 18)] * ((float*)fused_constant_13_let)[((((cse_var_31 * 18) + (kh * 6)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 2; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 28);
          int32_t cse_var_33 = (kw * 2);
          int32_t cse_var_32 = (oci_c_10 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_33) + oci_c_10) + 20)] * ((float*)fused_constant_13_let)[((((cse_var_34 * 18) + (kh * 6)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 2; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 28);
          int32_t cse_var_36 = (kw * 2);
          int32_t cse_var_35 = (oci_c_11 + 22);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_36) + oci_c_11) + 22)] * ((float*)fused_constant_13_let)[((((cse_var_37 * 18) + (kh * 6)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 2; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 28);
          int32_t cse_var_39 = (kw * 2);
          int32_t cse_var_38 = (oci_c_12 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_39) + oci_c_12) + 24)] * ((float*)fused_constant_13_let)[((((cse_var_40 * 18) + (kh * 6)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 2; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 28);
          int32_t cse_var_42 = (kw * 2);
          int32_t cse_var_41 = (oci_c_13 + 26);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_42) + oci_c_13) + 26)] * ((float*)fused_constant_13_let)[((((cse_var_43 * 18) + (kh * 6)) + cse_var_42) + oci_c_13)]));
        }
        for (int32_t oci_c_14 = 0; oci_c_14 < 2; ++oci_c_14) {
          int32_t cse_var_46 = (ax1_ax2_fused / 28);
          int32_t cse_var_45 = (kw * 2);
          int32_t cse_var_44 = (oci_c_14 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_let)[((((((cse_var_46 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_45) + oci_c_14) + 28)] * ((float*)fused_constant_13_let)[((((cse_var_46 * 18) + (kh * 6)) + cse_var_45) + oci_c_14)]));
        }
        for (int32_t oci_c_15 = 0; oci_c_15 < 2; ++oci_c_15) {
          int32_t cse_var_49 = (ax1_ax2_fused / 28);
          int32_t cse_var_48 = (kw * 2);
          int32_t cse_var_47 = (oci_c_15 + 30);
          ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_let)[((((((cse_var_49 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_48) + oci_c_15) + 30)] * ((float*)fused_constant_13_let)[((((cse_var_49 * 18) + (kh * 6)) + cse_var_48) + oci_c_15)]));
        }
        for (int32_t oci_c_16 = 0; oci_c_16 < 2; ++oci_c_16) {
          int32_t cse_var_52 = (ax1_ax2_fused / 28);
          int32_t cse_var_51 = (kw * 2);
          int32_t cse_var_50 = (oci_c_16 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_let)[((((((cse_var_52 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_51) + oci_c_16) + 32)] * ((float*)fused_constant_13_let)[((((cse_var_52 * 18) + (kh * 6)) + cse_var_51) + oci_c_16)]));
        }
        for (int32_t oci_c_17 = 0; oci_c_17 < 2; ++oci_c_17) {
          int32_t cse_var_55 = (ax1_ax2_fused / 28);
          int32_t cse_var_54 = (kw * 2);
          int32_t cse_var_53 = (oci_c_17 + 34);
          ((float*)DepthwiseConv2d_global_let)[cse_var_53] = (((float*)DepthwiseConv2d_global_let)[cse_var_53] + (((float*)PaddedInput_let)[((((((cse_var_55 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_54) + oci_c_17) + 34)] * ((float*)fused_constant_13_let)[((((cse_var_55 * 18) + (kh * 6)) + cse_var_54) + oci_c_17)]));
        }
        for (int32_t oci_c_18 = 0; oci_c_18 < 2; ++oci_c_18) {
          int32_t cse_var_58 = (ax1_ax2_fused / 28);
          int32_t cse_var_57 = (kw * 2);
          int32_t cse_var_56 = (oci_c_18 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_56] = (((float*)DepthwiseConv2d_global_let)[cse_var_56] + (((float*)PaddedInput_let)[((((((cse_var_58 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_57) + oci_c_18) + 36)] * ((float*)fused_constant_13_let)[((((cse_var_58 * 18) + (kh * 6)) + cse_var_57) + oci_c_18)]));
        }
        for (int32_t oci_c_19 = 0; oci_c_19 < 2; ++oci_c_19) {
          int32_t cse_var_61 = (ax1_ax2_fused / 28);
          int32_t cse_var_60 = (kw * 2);
          int32_t cse_var_59 = (oci_c_19 + 38);
          ((float*)DepthwiseConv2d_global_let)[cse_var_59] = (((float*)DepthwiseConv2d_global_let)[cse_var_59] + (((float*)PaddedInput_let)[((((((cse_var_61 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_60) + oci_c_19) + 38)] * ((float*)fused_constant_13_let)[((((cse_var_61 * 18) + (kh * 6)) + cse_var_60) + oci_c_19)]));
        }
        for (int32_t oci_c_20 = 0; oci_c_20 < 2; ++oci_c_20) {
          int32_t cse_var_64 = (ax1_ax2_fused / 28);
          int32_t cse_var_63 = (kw * 2);
          int32_t cse_var_62 = (oci_c_20 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_62] = (((float*)DepthwiseConv2d_global_let)[cse_var_62] + (((float*)PaddedInput_let)[((((((cse_var_64 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_63) + oci_c_20) + 40)] * ((float*)fused_constant_13_let)[((((cse_var_64 * 18) + (kh * 6)) + cse_var_63) + oci_c_20)]));
        }
        for (int32_t oci_c_21 = 0; oci_c_21 < 2; ++oci_c_21) {
          int32_t cse_var_67 = (ax1_ax2_fused / 28);
          int32_t cse_var_66 = (kw * 2);
          int32_t cse_var_65 = (oci_c_21 + 42);
          ((float*)DepthwiseConv2d_global_let)[cse_var_65] = (((float*)DepthwiseConv2d_global_let)[cse_var_65] + (((float*)PaddedInput_let)[((((((cse_var_67 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_66) + oci_c_21) + 42)] * ((float*)fused_constant_13_let)[((((cse_var_67 * 18) + (kh * 6)) + cse_var_66) + oci_c_21)]));
        }
        for (int32_t oci_c_22 = 0; oci_c_22 < 2; ++oci_c_22) {
          int32_t cse_var_70 = (ax1_ax2_fused / 28);
          int32_t cse_var_69 = (kw * 2);
          int32_t cse_var_68 = (oci_c_22 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_68] = (((float*)DepthwiseConv2d_global_let)[cse_var_68] + (((float*)PaddedInput_let)[((((((cse_var_70 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_69) + oci_c_22) + 44)] * ((float*)fused_constant_13_let)[((((cse_var_70 * 18) + (kh * 6)) + cse_var_69) + oci_c_22)]));
        }
        for (int32_t oci_c_23 = 0; oci_c_23 < 2; ++oci_c_23) {
          int32_t cse_var_73 = (ax1_ax2_fused / 28);
          int32_t cse_var_72 = (kw * 2);
          int32_t cse_var_71 = (oci_c_23 + 46);
          ((float*)DepthwiseConv2d_global_let)[cse_var_71] = (((float*)DepthwiseConv2d_global_let)[cse_var_71] + (((float*)PaddedInput_let)[((((((cse_var_73 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_72) + oci_c_23) + 46)] * ((float*)fused_constant_13_let)[((((cse_var_73 * 18) + (kh * 6)) + cse_var_72) + oci_c_23)]));
        }
        for (int32_t oci_c_24 = 0; oci_c_24 < 2; ++oci_c_24) {
          int32_t cse_var_76 = (ax1_ax2_fused / 28);
          int32_t cse_var_75 = (kw * 2);
          int32_t cse_var_74 = (oci_c_24 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_74] = (((float*)DepthwiseConv2d_global_let)[cse_var_74] + (((float*)PaddedInput_let)[((((((cse_var_76 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_75) + oci_c_24) + 48)] * ((float*)fused_constant_13_let)[((((cse_var_76 * 18) + (kh * 6)) + cse_var_75) + oci_c_24)]));
        }
        for (int32_t oci_c_25 = 0; oci_c_25 < 2; ++oci_c_25) {
          int32_t cse_var_79 = (ax1_ax2_fused / 28);
          int32_t cse_var_78 = (kw * 2);
          int32_t cse_var_77 = (oci_c_25 + 50);
          ((float*)DepthwiseConv2d_global_let)[cse_var_77] = (((float*)DepthwiseConv2d_global_let)[cse_var_77] + (((float*)PaddedInput_let)[((((((cse_var_79 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_78) + oci_c_25) + 50)] * ((float*)fused_constant_13_let)[((((cse_var_79 * 18) + (kh * 6)) + cse_var_78) + oci_c_25)]));
        }
        for (int32_t oci_c_26 = 0; oci_c_26 < 2; ++oci_c_26) {
          int32_t cse_var_82 = (ax1_ax2_fused / 28);
          int32_t cse_var_81 = (kw * 2);
          int32_t cse_var_80 = (oci_c_26 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_80] = (((float*)DepthwiseConv2d_global_let)[cse_var_80] + (((float*)PaddedInput_let)[((((((cse_var_82 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_81) + oci_c_26) + 52)] * ((float*)fused_constant_13_let)[((((cse_var_82 * 18) + (kh * 6)) + cse_var_81) + oci_c_26)]));
        }
        for (int32_t oci_c_27 = 0; oci_c_27 < 2; ++oci_c_27) {
          int32_t cse_var_85 = (ax1_ax2_fused / 28);
          int32_t cse_var_84 = (kw * 2);
          int32_t cse_var_83 = (oci_c_27 + 54);
          ((float*)DepthwiseConv2d_global_let)[cse_var_83] = (((float*)DepthwiseConv2d_global_let)[cse_var_83] + (((float*)PaddedInput_let)[((((((cse_var_85 * 1800) + (kh * 60)) + ((ax1_ax2_fused % 28) * 60)) + cse_var_84) + oci_c_27) + 54)] * ((float*)fused_constant_13_let)[((((cse_var_85 * 18) + (kh * 6)) + cse_var_84) + oci_c_27)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 28; ++ow_inner) {
      for (int32_t oci = 0; oci < 2; ++oci) {
        int32_t cse_var_86 = ((ow_inner * 2) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_86] = ((float*)DepthwiseConv2d_global_let)[cse_var_86];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 28; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 2; ++ax4) {
        int32_t cse_var_87 = (ax3_inner * 2);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_87 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_4_let)[(((ax1_ax2_fused / 28) * 2) + ax4)]) * 1.784929e+01f)) + 1.310000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 56) + cse_var_87) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 131));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__5(float* p0, float* T_cast, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_5_let = (&(global_const_workspace_48_var[9068672]));
  void* fused_constant_15_let = (&(global_const_workspace_48_var[9029712]));
  void* PaddedInput_let = (&(global_workspace_49_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 841; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 29; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 29);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 116) + cse_var_1) + i4)] = (((1 <= cse_var_2) && (1 <= i3)) ? p0[((((((i0_i1_fused_i2_fused / 29) * 3136) + (cse_var_2 * 112)) + cse_var_1) + i4) - 116)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_49_var[844944]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_49_var[845168]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 14);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_3) + oci_c)] * ((float*)fused_constant_15_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 14);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_15_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 14);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_15_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 14);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_12) + oci_c_3) + 24)] * ((float*)fused_constant_15_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 14);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_15) + oci_c_4) + 32)] * ((float*)fused_constant_15_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 14);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_18) + oci_c_5) + 40)] * ((float*)fused_constant_15_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 14);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_21) + oci_c_6) + 48)] * ((float*)fused_constant_15_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 14);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_24) + oci_c_7) + 56)] * ((float*)fused_constant_15_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 14);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_27) + oci_c_8) + 64)] * ((float*)fused_constant_15_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 14);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_30) + oci_c_9) + 72)] * ((float*)fused_constant_15_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 14);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_33) + oci_c_10) + 80)] * ((float*)fused_constant_15_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 14);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_36) + oci_c_11) + 88)] * ((float*)fused_constant_15_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 14);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_39) + oci_c_12) + 96)] * ((float*)fused_constant_15_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 14);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_42) + oci_c_13) + 104)] * ((float*)fused_constant_15_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_44 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_44] = ((float*)DepthwiseConv2d_global_let)[cse_var_44];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_45 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_45 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_5_let)[(((ax1_ax2_fused / 14) * 4) + ax4)]) * 1.901420e+01f)) + 1.120000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 56) + cse_var_45) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 112));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__6(float* p0, float* T_cast, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_6_let = (&(global_const_workspace_54_var[9068208]));
  void* fused_constant_18_let = (&(global_const_workspace_54_var[9025536]));
  void* PaddedInput_let = (&(global_workspace_55_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 841; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 29; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 29);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 116) + cse_var_1) + i4)] = (((1 <= cse_var_2) && (1 <= i3)) ? p0[((((((i0_i1_fused_i2_fused / 29) * 3136) + (cse_var_2 * 112)) + cse_var_1) + i4) - 116)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_55_var[481168]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_55_var[481392]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 14);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_3) + oci_c)] * ((float*)fused_constant_18_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 14);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_6) + oci_c_1) + 8)] * ((float*)fused_constant_18_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 14);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_9) + oci_c_2) + 16)] * ((float*)fused_constant_18_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 14);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_12) + oci_c_3) + 24)] * ((float*)fused_constant_18_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 14);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_15) + oci_c_4) + 32)] * ((float*)fused_constant_18_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 14);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_18) + oci_c_5) + 40)] * ((float*)fused_constant_18_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 14);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_21) + oci_c_6) + 48)] * ((float*)fused_constant_18_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 14);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_24) + oci_c_7) + 56)] * ((float*)fused_constant_18_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 14);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_27) + oci_c_8) + 64)] * ((float*)fused_constant_18_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 14);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_30) + oci_c_9) + 72)] * ((float*)fused_constant_18_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 14);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_33) + oci_c_10) + 80)] * ((float*)fused_constant_18_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 14);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_36) + oci_c_11) + 88)] * ((float*)fused_constant_18_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 14);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_39) + oci_c_12) + 96)] * ((float*)fused_constant_18_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 14);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 3364) + ((ax1_ax2_fused % 14) * 232)) + (kh * 116)) + cse_var_42) + oci_c_13) + 104)] * ((float*)fused_constant_18_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_44 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_44] = ((float*)DepthwiseConv2d_global_let)[cse_var_44];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_45 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_45 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_6_let)[(((ax1_ax2_fused / 14) * 4) + ax4)]) * 2.669857e+01f)) + 1.330000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 56) + cse_var_45) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 133));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__7(float* p0, float* T_cast, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_7_let = (&(global_const_workspace_64_var[9067744]));
  void* fused_constant_21_let = (&(global_const_workspace_64_var[9021360]));
  void* PaddedInput_let = (&(global_workspace_65_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 464; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 16; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 15);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 64) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 15)) && (1 <= i3)) && (i3 < 15)) ? p0[((((((i0_i1_fused_i2_fused >> 4) * 784) + (cse_var_2 * 56)) + cse_var_1) + i4) - 60)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_65_var[209728]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_65_var[209952]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 14);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_3) + oci_c)] * ((float*)fused_constant_21_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 14);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_21_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 14);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_21_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 14);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_21_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 14);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_21_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 14);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_21_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 14);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_21_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 14);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_21_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 14);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_21_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 14);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_21_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 14);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_21_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 14);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_21_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 14);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_21_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 14);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_42) + oci_c_13) + 52)] * ((float*)fused_constant_21_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_44 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_44] = ((float*)DepthwiseConv2d_global_let)[cse_var_44];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_45 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_45 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_7_let)[(((ax1_ax2_fused / 14) * 4) + ax4)]) * 3.769521e+01f)) + 1.400000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 56) + cse_var_45) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 140));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__8(float* p0, float* T_cast, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_8_let = (&(global_const_workspace_72_var[9067280]));
  void* fused_constant_24_let = (&(global_const_workspace_72_var[9017184]));
  void* PaddedInput_let = (&(global_workspace_73_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 464; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 16; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 15);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 64) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 15)) && (1 <= i3)) && (i3 < 15)) ? p0[((((((i0_i1_fused_i2_fused >> 4) * 784) + (cse_var_2 * 56)) + cse_var_1) + i4) - 60)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_73_var[209728]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_73_var[209952]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 14);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_3) + oci_c)] * ((float*)fused_constant_24_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 14);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_24_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 14);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_24_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 14);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_24_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 14);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_24_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 14);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_24_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 14);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_24_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 14);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_24_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 14);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_24_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 14);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_24_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 14);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_24_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 14);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_24_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 14);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_24_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 14);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_42) + oci_c_13) + 52)] * ((float*)fused_constant_24_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_44 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_44] = ((float*)DepthwiseConv2d_global_let)[cse_var_44];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_45 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_45 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_8_let)[(((ax1_ax2_fused / 14) * 4) + ax4)]) * 3.685926e+01f)) + 1.230000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 56) + cse_var_45) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 123));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__9(float* p0, float* T_cast, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_nn_contrib_depthwise_conv2d_NCHWc_constant_9_let = (&(global_const_workspace_78_var[9066816]));
  void* fused_constant_27_let = (&(global_const_workspace_78_var[9013008]));
  void* PaddedInput_let = (&(global_workspace_79_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 464; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 16; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused & 15);
        int32_t cse_var_1 = (i3 * 4);
        ((float*)PaddedInput_let)[(((i0_i1_fused_i2_fused * 64) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 15)) && (1 <= i3)) && (i3 < 15)) ? p0[((((((i0_i1_fused_i2_fused >> 4) * 784) + (cse_var_2 * 56)) + cse_var_1) + i4) - 60)] : 0.000000e+00f);
      }
    }
  }
  for (int32_t ax1_ax2_fused = 0; ax1_ax2_fused < 406; ++ax1_ax2_fused) {
    void* DepthwiseConv2d_let = (&(global_workspace_79_var[209728]));
    void* DepthwiseConv2d_global_let = (&(global_workspace_79_var[209952]));
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
    for (int32_t kh = 0; kh < 3; ++kh) {
      for (int32_t kw = 0; kw < 3; ++kw) {
        for (int32_t oci_c = 0; oci_c < 4; ++oci_c) {
          int32_t cse_var_4 = (ax1_ax2_fused / 14);
          int32_t cse_var_3 = (kw * 4);
          ((float*)DepthwiseConv2d_global_let)[oci_c] = (((float*)DepthwiseConv2d_global_let)[oci_c] + (((float*)PaddedInput_let)[(((((cse_var_4 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_3) + oci_c)] * ((float*)fused_constant_27_let)[((((cse_var_4 * 36) + (kh * 12)) + cse_var_3) + oci_c)]));
        }
        for (int32_t oci_c_1 = 0; oci_c_1 < 4; ++oci_c_1) {
          int32_t cse_var_7 = (ax1_ax2_fused / 14);
          int32_t cse_var_6 = (kw * 4);
          int32_t cse_var_5 = (oci_c_1 + 4);
          ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_let)[((((((cse_var_7 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_6) + oci_c_1) + 4)] * ((float*)fused_constant_27_let)[((((cse_var_7 * 36) + (kh * 12)) + cse_var_6) + oci_c_1)]));
        }
        for (int32_t oci_c_2 = 0; oci_c_2 < 4; ++oci_c_2) {
          int32_t cse_var_10 = (ax1_ax2_fused / 14);
          int32_t cse_var_9 = (kw * 4);
          int32_t cse_var_8 = (oci_c_2 + 8);
          ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_let)[((((((cse_var_10 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_9) + oci_c_2) + 8)] * ((float*)fused_constant_27_let)[((((cse_var_10 * 36) + (kh * 12)) + cse_var_9) + oci_c_2)]));
        }
        for (int32_t oci_c_3 = 0; oci_c_3 < 4; ++oci_c_3) {
          int32_t cse_var_13 = (ax1_ax2_fused / 14);
          int32_t cse_var_12 = (kw * 4);
          int32_t cse_var_11 = (oci_c_3 + 12);
          ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_let)[((((((cse_var_13 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_12) + oci_c_3) + 12)] * ((float*)fused_constant_27_let)[((((cse_var_13 * 36) + (kh * 12)) + cse_var_12) + oci_c_3)]));
        }
        for (int32_t oci_c_4 = 0; oci_c_4 < 4; ++oci_c_4) {
          int32_t cse_var_16 = (ax1_ax2_fused / 14);
          int32_t cse_var_15 = (kw * 4);
          int32_t cse_var_14 = (oci_c_4 + 16);
          ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_let)[((((((cse_var_16 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_15) + oci_c_4) + 16)] * ((float*)fused_constant_27_let)[((((cse_var_16 * 36) + (kh * 12)) + cse_var_15) + oci_c_4)]));
        }
        for (int32_t oci_c_5 = 0; oci_c_5 < 4; ++oci_c_5) {
          int32_t cse_var_19 = (ax1_ax2_fused / 14);
          int32_t cse_var_18 = (kw * 4);
          int32_t cse_var_17 = (oci_c_5 + 20);
          ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_let)[((((((cse_var_19 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_18) + oci_c_5) + 20)] * ((float*)fused_constant_27_let)[((((cse_var_19 * 36) + (kh * 12)) + cse_var_18) + oci_c_5)]));
        }
        for (int32_t oci_c_6 = 0; oci_c_6 < 4; ++oci_c_6) {
          int32_t cse_var_22 = (ax1_ax2_fused / 14);
          int32_t cse_var_21 = (kw * 4);
          int32_t cse_var_20 = (oci_c_6 + 24);
          ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_let)[((((((cse_var_22 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_21) + oci_c_6) + 24)] * ((float*)fused_constant_27_let)[((((cse_var_22 * 36) + (kh * 12)) + cse_var_21) + oci_c_6)]));
        }
        for (int32_t oci_c_7 = 0; oci_c_7 < 4; ++oci_c_7) {
          int32_t cse_var_25 = (ax1_ax2_fused / 14);
          int32_t cse_var_24 = (kw * 4);
          int32_t cse_var_23 = (oci_c_7 + 28);
          ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_let)[((((((cse_var_25 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_24) + oci_c_7) + 28)] * ((float*)fused_constant_27_let)[((((cse_var_25 * 36) + (kh * 12)) + cse_var_24) + oci_c_7)]));
        }
        for (int32_t oci_c_8 = 0; oci_c_8 < 4; ++oci_c_8) {
          int32_t cse_var_28 = (ax1_ax2_fused / 14);
          int32_t cse_var_27 = (kw * 4);
          int32_t cse_var_26 = (oci_c_8 + 32);
          ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_let)[((((((cse_var_28 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_27) + oci_c_8) + 32)] * ((float*)fused_constant_27_let)[((((cse_var_28 * 36) + (kh * 12)) + cse_var_27) + oci_c_8)]));
        }
        for (int32_t oci_c_9 = 0; oci_c_9 < 4; ++oci_c_9) {
          int32_t cse_var_31 = (ax1_ax2_fused / 14);
          int32_t cse_var_30 = (kw * 4);
          int32_t cse_var_29 = (oci_c_9 + 36);
          ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_let)[((((((cse_var_31 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_30) + oci_c_9) + 36)] * ((float*)fused_constant_27_let)[((((cse_var_31 * 36) + (kh * 12)) + cse_var_30) + oci_c_9)]));
        }
        for (int32_t oci_c_10 = 0; oci_c_10 < 4; ++oci_c_10) {
          int32_t cse_var_34 = (ax1_ax2_fused / 14);
          int32_t cse_var_33 = (kw * 4);
          int32_t cse_var_32 = (oci_c_10 + 40);
          ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_let)[((((((cse_var_34 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_33) + oci_c_10) + 40)] * ((float*)fused_constant_27_let)[((((cse_var_34 * 36) + (kh * 12)) + cse_var_33) + oci_c_10)]));
        }
        for (int32_t oci_c_11 = 0; oci_c_11 < 4; ++oci_c_11) {
          int32_t cse_var_37 = (ax1_ax2_fused / 14);
          int32_t cse_var_36 = (kw * 4);
          int32_t cse_var_35 = (oci_c_11 + 44);
          ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_let)[((((((cse_var_37 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_36) + oci_c_11) + 44)] * ((float*)fused_constant_27_let)[((((cse_var_37 * 36) + (kh * 12)) + cse_var_36) + oci_c_11)]));
        }
        for (int32_t oci_c_12 = 0; oci_c_12 < 4; ++oci_c_12) {
          int32_t cse_var_40 = (ax1_ax2_fused / 14);
          int32_t cse_var_39 = (kw * 4);
          int32_t cse_var_38 = (oci_c_12 + 48);
          ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_let)[((((((cse_var_40 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_39) + oci_c_12) + 48)] * ((float*)fused_constant_27_let)[((((cse_var_40 * 36) + (kh * 12)) + cse_var_39) + oci_c_12)]));
        }
        for (int32_t oci_c_13 = 0; oci_c_13 < 4; ++oci_c_13) {
          int32_t cse_var_43 = (ax1_ax2_fused / 14);
          int32_t cse_var_42 = (kw * 4);
          int32_t cse_var_41 = (oci_c_13 + 52);
          ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_let)[((((((cse_var_43 * 1024) + (kh * 64)) + ((ax1_ax2_fused % 14) * 64)) + cse_var_42) + oci_c_13) + 52)] * ((float*)fused_constant_27_let)[((((cse_var_43 * 36) + (kh * 12)) + cse_var_42) + oci_c_13)]));
        }
      }
    }
    for (int32_t ow_inner = 0; ow_inner < 14; ++ow_inner) {
      for (int32_t oci = 0; oci < 4; ++oci) {
        int32_t cse_var_44 = ((ow_inner * 4) + oci);
        ((float*)DepthwiseConv2d_let)[cse_var_44] = ((float*)DepthwiseConv2d_global_let)[cse_var_44];
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_45 = (ax3_inner * 4);
        float v_ = roundf(((((float*)DepthwiseConv2d_let)[(cse_var_45 + ax4)] + ((float*)fused_nn_contrib_depthwise_conv2d_NCHWc_constant_9_let)[(((ax1_ax2_fused / 14) * 4) + ax4)]) * 2.731177e+01f)) + 1.240000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_cast[(((ax1_ax2_fused * 56) + cse_var_45) + ax4)] = ((float)(((int32_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - 124));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_max_pool2d_divide_round_clip_cast_cast_cast(float* p0, float* T_cast, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* pool_max_let = (&(global_workspace_7_var[1204224]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 336; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 56; ++ax3) {
      for (int32_t ax4_init = 0; ax4_init < 4; ++ax4_init) {
        ((float*)pool_max_let)[(((ax0_ax1_fused_ax2_fused * 224) + (ax3 * 4)) + ax4_init)] = -3.402823e+38f;
      }
      for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 9; ++rv0_rv1_fused) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_3 = (rv0_rv1_fused % 3);
          int32_t cse_var_2 = (rv0_rv1_fused / 3);
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 224) + (ax3 * 4)) + ax4);
          float v_ = ((float*)pool_max_let)[cse_var_1];
          float v__1 = ((1 <= (((ax0_ax1_fused_ax2_fused % 56) * 2) + cse_var_2)) && (1 <= ((ax3 * 2) + cse_var_3))) ? p0[((((((ax0_ax1_fused_ax2_fused * 896) + (cse_var_2 * 448)) + (ax3 * 8)) + (cse_var_3 * 4)) + ax4) - 452)] : -3.402823e+38f;
          ((float*)pool_max_let)[cse_var_1] = ((v_) > (v__1) ? (v_) : (v__1));
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 56; ++ax2) {
      for (int32_t ax3_1 = 0; ax3_1 < 56; ++ax3_1) {
        for (int32_t ax4_1 = 0; ax4_1 < 4; ++ax4_1) {
          int32_t cse_var_4 = ((((ax0_ax1_fused * 12544) + (ax2 * 224)) + (ax3_1 * 4)) + ax4_1);
          float v__2 = roundf((((float*)pool_max_let)[cse_var_4] * 1.752280e+01f));
          float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
          T_cast[cse_var_4] = ((float)((int32_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* input_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_67_let = (&(global_workspace_1_var[0]));
  void* sid_66_let = (&(global_workspace_1_var[272832]));
  void* sid_65_let = (&(global_workspace_1_var[181888]));
  void* sid_70_let = (&(global_workspace_1_var[0]));
  void* sid_56_let = (&(global_workspace_1_var[118784]));
  void* sid_57_let = (&(global_workspace_1_var[118784]));
  void* sid_55_let = (&(global_workspace_1_var[0]));
  void* sid_68_let = (&(global_workspace_1_var[272832]));
  void* sid_72_let = (&(global_workspace_1_var[272832]));
  void* sid_71_let = (&(global_workspace_1_var[181888]));
  void* sid_50_let = (&(global_workspace_1_var[118784]));
  void* sid_63_let = (&(global_workspace_1_var[118784]));
  void* sid_54_let = (&(global_workspace_1_var[181888]));
  void* sid_53_let = (&(global_workspace_1_var[272832]));
  void* sid_62_let = (&(global_workspace_1_var[118784]));
  void* sid_100_let = (&(global_workspace_1_var[0]));
  void* sid_40_let = (&(global_workspace_1_var[0]));
  void* sid_51_let = (&(global_workspace_1_var[118784]));
  void* sid_37_let = (&(global_workspace_1_var[0]));
  void* sid_49_let = (&(global_workspace_1_var[0]));
  void* sid_36_let = (&(global_workspace_1_var[181888]));
  void* sid_35_let = (&(global_workspace_1_var[272832]));
  void* sid_52_let = (&(global_workspace_1_var[0]));
  void* sid_45_let = (&(global_workspace_1_var[118784]));
  void* sid_34_let = (&(global_workspace_1_var[181888]));
  void* sid_10_let = (&(global_workspace_1_var[363776]));
  void* sid_19_let = (&(global_workspace_1_var[0]));
  void* sid_33_let = (&(global_workspace_1_var[390224]));
  void* sid_46_let = (&(global_workspace_1_var[0]));
  void* sid_3_let = (&(global_workspace_1_var[311904]));
  void* sid_29_let = (&(global_workspace_1_var[390224]));
  void* sid_38_let = (&(global_workspace_1_var[118784]));
  void* sid_96_let = (&(global_workspace_1_var[136416]));
  void* sid_95_let = (&(global_workspace_1_var[90944]));
  void* sid_43_let = (&(global_workspace_1_var[0]));
  void* sid_22_let = (&(global_workspace_1_var[0]));
  void* sid_13_let = (&(global_workspace_1_var[0]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_6_let = (&(global_workspace_1_var[1481328]));
  void* sid_61_let = (&(global_workspace_1_var[0]));
  void* sid_42_let = (&(global_workspace_1_var[181888]));
  void* sid_41_let = (&(global_workspace_1_var[272832]));
  void* sid_2_let = (&(global_workspace_1_var[0]));
  void* sid_20_let = (&(global_workspace_1_var[545664]));
  void* sid_15_let = (&(global_workspace_1_var[545664]));
  void* sid_12_let = (&(global_workspace_1_var[545664]));
  void* sid_11_let = (&(global_workspace_1_var[363776]));
  void* sid_1_let = (&(global_workspace_1_var[0]));
  void* sid_58_let = (&(global_workspace_1_var[0]));
  void* sid_14_let = (&(global_workspace_1_var[545664]));
  void* sid_80_let = (&(global_workspace_1_var[390688]));
  void* sid_39_let = (&(global_workspace_1_var[118784]));
  void* sid_48_let = (&(global_workspace_1_var[181888]));
  void* sid_47_let = (&(global_workspace_1_var[272832]));
  void* sid_8_let = (&(global_workspace_1_var[753776]));
  void* sid_5_let = (&(global_workspace_1_var[0]));
  void* sid_16_let = (&(global_workspace_1_var[0]));
  void* sid_31_let = (&(global_workspace_1_var[1117776]));
  void* sid_97_let = (&(global_workspace_1_var[0]));
  void* sid_69_let = (&(global_workspace_1_var[272832]));
  void* sid_9_let = (&(global_workspace_1_var[753776]));
  void* sid_18_let = (&(global_workspace_1_var[545664]));
  void* sid_17_let = (&(global_workspace_1_var[363776]));
  void* sid_44_let = (&(global_workspace_1_var[118784]));
  void* sid_4_let = (&(global_workspace_1_var[612960]));
  void* sid_21_let = (&(global_workspace_1_var[545664]));
  void* sid_24_let = (&(global_workspace_1_var[545664]));
  void* sid_23_let = (&(global_workspace_1_var[363776]));
  void* sid_26_let = (&(global_workspace_1_var[545664]));
  void* sid_101_let = (&(global_workspace_1_var[200704]));
  void* sid_79_let = (&(global_workspace_1_var[572576]));
  void* sid_86_let = (&(global_workspace_1_var[136416]));
  void* sid_25_let = (&(global_workspace_1_var[0]));
  void* sid_73_let = (&(global_workspace_1_var[0]));
  void* sid_27_let = (&(global_workspace_1_var[545664]));
  void* sid_30_let = (&(global_workspace_1_var[754000]));
  void* sid_64_let = (&(global_workspace_1_var[0]));
  void* sid_93_let = (&(global_workspace_1_var[136416]));
  void* sid_60_let = (&(global_workspace_1_var[181888]));
  void* sid_59_let = (&(global_workspace_1_var[272832]));
  void* sid_87_let = (&(global_workspace_1_var[136416]));
  void* sid_28_let = (&(global_workspace_1_var[0]));
  void* sid_32_let = (&(global_workspace_1_var[754000]));
  void* sid_74_let = (&(global_workspace_1_var[272832]));
  void* sid_98_let = (&(global_workspace_1_var[136416]));
  void* sid_75_let = (&(global_workspace_1_var[272832]));
  void* sid_76_let = (&(global_workspace_1_var[0]));
  void* sid_77_let = (&(global_workspace_1_var[208800]));
  void* sid_78_let = (&(global_workspace_1_var[390688]));
  void* sid_81_let = (&(global_workspace_1_var[208800]));
  void* sid_82_let = (&(global_workspace_1_var[90944]));
  void* sid_84_let = (&(global_workspace_1_var[136416]));
  void* sid_83_let = (&(global_workspace_1_var[90944]));
  void* sid_85_let = (&(global_workspace_1_var[0]));
  void* sid_88_let = (&(global_workspace_1_var[0]));
  void* sid_90_let = (&(global_workspace_1_var[136416]));
  void* sid_89_let = (&(global_workspace_1_var[90944]));
  void* sid_91_let = (&(global_workspace_1_var[0]));
  void* sid_92_let = (&(global_workspace_1_var[136416]));
  void* sid_94_let = (&(global_workspace_1_var[0]));
  void* sid_99_let = (&(global_workspace_1_var[136416]));
  void* sid_102_let = (&(global_workspace_1_var[0]));
  void* sid_103_let = (&(global_workspace_1_var[4096]));
  void* sid_104_let = (&(global_workspace_1_var[0]));
  if (tvmgen_default_fused_divide_round_add_clip_cast_cast_subtract_cast_layout_transform(input_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_max_pool2d_divide_round_clip_cast_cast_cast(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c_(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_1(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_1(sid_3_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__1(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_2(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_concatenate_divide_round_clip_cast_cast_cast_multiply_layout_transform_res_5282196681183f22_(sid_6_let, sid_10_let, sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform(sid_11_let, sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_1(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__2(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_3(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6_(sid_11_let, sid_12_let, sid_16_let, sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform(sid_17_let, sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_2(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__3(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_4(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6_(sid_17_let, sid_18_let, sid_22_let, sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform(sid_23_let, sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_3(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__4(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_5(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_1994d658f1d82640_(sid_23_let, sid_24_let, sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__5(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_6(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_4(sid_29_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__6(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_7(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_concatenate_divide_round_clip_cast_cast_cast_multiply_layout_transform_res_5282196681183f22__1(sid_31_let, sid_34_let, sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_1(sid_35_let, sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_5(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__7(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_8(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6__1(sid_35_let, sid_36_let, sid_40_let, sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_1(sid_41_let, sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_6(sid_43_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__8(sid_44_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_9(sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6__1(sid_41_let, sid_42_let, sid_46_let, sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_1(sid_47_let, sid_48_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_7(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__9(sid_50_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_10(sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6__1(sid_47_let, sid_48_let, sid_52_let, sid_53_let, sid_54_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_1(sid_53_let, sid_54_let, sid_55_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_8(sid_55_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__10(sid_56_let, sid_57_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_11(sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6__1(sid_53_let, sid_54_let, sid_58_let, sid_59_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_1(sid_59_let, sid_60_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_9(sid_61_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__11(sid_62_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_12(sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6__1(sid_59_let, sid_60_let, sid_64_let, sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_1(sid_65_let, sid_66_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_10(sid_67_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__12(sid_68_let, sid_69_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_13(sid_69_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6__2(sid_65_let, sid_66_let, sid_70_let, sid_71_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_2(sid_71_let, sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_11(sid_73_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__13(sid_74_let, sid_75_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_14(sid_75_let, sid_76_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_1994d658f1d82640__1(sid_71_let, sid_72_let, sid_76_let, sid_77_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__14(sid_77_let, sid_78_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_15(sid_78_let, sid_79_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_12(sid_77_let, sid_80_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__15(sid_80_let, sid_81_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_16(sid_81_let, sid_82_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_concatenate_divide_round_clip_cast_cast_cast_multiply_layout_transform_res_5282196681183f22__2(sid_79_let, sid_82_let, sid_83_let, sid_84_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_3(sid_83_let, sid_84_let, sid_85_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_13(sid_85_let, sid_86_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__16(sid_86_let, sid_87_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_17(sid_87_let, sid_88_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6__3(sid_83_let, sid_84_let, sid_88_let, sid_89_let, sid_90_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_4(sid_89_let, sid_90_let, sid_91_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_14(sid_91_let, sid_92_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__17(sid_92_let, sid_93_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_18(sid_93_let, sid_94_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_f6434fb90512e0c6__4(sid_89_let, sid_90_let, sid_94_let, sid_95_let, sid_96_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_5(sid_95_let, sid_96_let, sid_97_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_15(sid_97_let, sid_98_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_depthwise_conv2d_NCHWc_add_divide_round_add_clip_cast_cast_subt_53313e250755e99c__18(sid_98_let, sid_99_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_19(sid_99_let, sid_100_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_multiply_layout_transform_concatenate_div_1994d658f1d82640__2(sid_95_let, sid_96_let, sid_100_let, sid_101_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_divide_round_clip_cast_cast_cast_multiply_20(sid_101_let, sid_102_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_102_let, sid_103_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast_cast_layout_transform_6(sid_103_let, sid_104_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_divide_round_add_clip_cast_cast_subtract_cast_multip_75ff9d653223c1d3_(sid_104_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

