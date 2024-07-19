// tvm target: c -keys=cpu -model=esp32
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__10f1814a0ed56b76_(uint8_t* p0, uint8_t* p0_1, float* p1, int16_t* T_cast, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* T_multiply_let = (&(global_workspace_43_var[363776]));
  for (int32_t ax1 = 0; ax1 < 58; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 28; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 784) + (ax2 * 28)) + ax3);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)p0[cse_var_1])) * 3.221148e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_43_var[545664]));
  for (int32_t ax1_1 = 0; ax1_1 < 58; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 28; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 28; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 784) + (ax2_1 * 28)) + ax3_1)] = p1[(((ax2_1 * 1624) + (ax3_1 * 58)) + ax1_1)];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_43_var[0]));
  for (int32_t j = 0; j < 45472; ++j) {
    ((float*)concatenate_ext_let)[j] = ((float*)T_multiply_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 45472; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 45472)] = ((float*)T_layout_trans_let)[j_1];
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 28; ++ax0_ax1_fused) {
    for (int32_t ax2_2 = 0; ax2_2 < 28; ++ax2_2) {
      for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 4) + (ax3_inner >> 2)) < 29) {
            float v_ = roundf((((float*)concatenate_ext_let)[(((((ax3_inner & 1) * 45472) + ((((ax3_outer * 8) + (ax3_inner >> 1)) % 58) * 784)) + (ax0_ax1_fused * 28)) + ax2_2)] * 4.186971e+01f));
            float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
            T_cast[((((ax0_ax1_fused * 3248) + (ax2_2 * 116)) + (ax3_outer * 16)) + ax3_inner)] = ((int16_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))));
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
TVM_DLL int32_t tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__10f1814a0ed56b76__1(uint8_t* p0, uint8_t* p0_1, float* p1, int16_t* T_cast, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  void* T_multiply_let = (&(global_workspace_113_var[181888]));
  for (int32_t ax1 = 0; ax1 < 116; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 196) + (ax2 * 14)) + ax3);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)p0[cse_var_1])) * 1.397763e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_113_var[272832]));
  for (int32_t ax1_1 = 0; ax1_1 < 116; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 14; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 196) + (ax2_1 * 14)) + ax3_1)] = p1[(((ax2_1 * 1624) + (ax3_1 * 116)) + ax1_1)];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_113_var[0]));
  for (int32_t j = 0; j < 22736; ++j) {
    ((float*)concatenate_ext_let)[j] = ((float*)T_multiply_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 22736; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 22736)] = ((float*)T_layout_trans_let)[j_1];
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 14; ++ax0_ax1_fused) {
    for (int32_t ax2_2 = 0; ax2_2 < 14; ++ax2_2) {
      for (int32_t ax3_outer = 0; ax3_outer < 15; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 29) {
            float v_ = roundf((((float*)concatenate_ext_let)[(((((ax3_inner & 1) * 22736) + ((((ax3_outer * 8) + (ax3_inner >> 1)) % 116) * 196)) + (ax0_ax1_fused * 14)) + ax2_2)] * 6.158009e+01f));
            float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
            T_cast[((((ax0_ax1_fused * 3248) + (ax2_2 * 232)) + (ax3_outer * 16)) + ax3_inner)] = ((int16_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))));
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
TVM_DLL int32_t tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__10f1814a0ed56b76__2(uint8_t* p0, uint8_t* p0_1, float* p1, int16_t* T_cast, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var) {
  void* T_multiply_let = (&(global_workspace_151_var[90944]));
  for (int32_t ax1 = 0; ax1 < 232; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 49) + (ax2 * 7)) + ax3);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)p0[cse_var_1])) * 1.746249e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_151_var[136416]));
  for (int32_t ax1_1 = 0; ax1_1 < 232; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 7; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 49) + (ax2_1 * 7)) + ax3_1)] = p1[(((ax2_1 * 1624) + (ax3_1 * 232)) + ax1_1)];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_151_var[0]));
  for (int32_t j = 0; j < 11368; ++j) {
    ((float*)concatenate_ext_let)[j] = ((float*)T_multiply_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 11368; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 11368)] = ((float*)T_layout_trans_let)[j_1];
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 7; ++ax0_ax1_fused) {
    for (int32_t ax2_2 = 0; ax2_2 < 7; ++ax2_2) {
      for (int32_t ax3_outer = 0; ax3_outer < 29; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          float v_ = roundf((((float*)concatenate_ext_let)[((((((ax3_inner & 1) * 11368) + (ax3_outer * 392)) + ((ax3_inner >> 1) * 49)) + (ax0_ax1_fused * 7)) + ax2_2)] * 5.195085e+01f));
          float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
          T_cast[((((ax0_ax1_fused * 3248) + (ax2_2 * 464)) + (ax3_outer * 16)) + ax3_inner)] = ((int16_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae_(uint8_t* p0, uint8_t* p0_1, float* p1, uint8_t* T_split, uint8_t* T_split_1, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* T_multiply_let = (&(global_workspace_29_var[363776]));
  for (int32_t ax1 = 0; ax1 < 58; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 28; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 784) + (ax2 * 28)) + ax3);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)p0[cse_var_1])) * 3.221148e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_29_var[545664]));
  for (int32_t ax1_1 = 0; ax1_1 < 58; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 28; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 28; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 784) + (ax2_1 * 28)) + ax3_1)] = p1[(((ax2_1 * 1624) + (ax3_1 * 58)) + ax1_1)];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_29_var[0]));
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
            float v_ = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused & 1) * 45472) + ((ax0_ax1_fused >> 1) * 784)) + cse_var_3) + cse_var_2) + ax3_inner)] * 3.104483e+01f));
            float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
            T_split[((((ax0_ax1_fused * 784) + cse_var_3) + cse_var_2) + ax3_inner)] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
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
            float v__2 = roundf((((float*)concatenate_ext_let)[(((((((ax0_ax1_fused_1 & 1) * 45472) + ((ax0_ax1_fused_1 >> 1) * 784)) + cse_var_5) + cse_var_4) + ax3_inner_1) + 22736)] * 3.104483e+01f));
            float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
            T_split_1[((((ax0_ax1_fused_1 * 784) + cse_var_5) + cse_var_4) + ax3_inner_1)] = ((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
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
TVM_DLL int32_t tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__1(uint8_t* p0, uint8_t* p0_1, float* p1, uint8_t* T_split, uint8_t* T_split_1, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* T_multiply_let = (&(global_workspace_65_var[181888]));
  for (int32_t ax1 = 0; ax1 < 116; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 196) + (ax2 * 14)) + ax3);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)p0[cse_var_1])) * 1.498563e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_65_var[272832]));
  for (int32_t ax1_1 = 0; ax1_1 < 116; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 14; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 196) + (ax2_1 * 14)) + ax3_1)] = p1[(((ax2_1 * 1624) + (ax3_1 * 116)) + ax1_1)];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_65_var[0]));
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
        float v_ = roundf((((float*)concatenate_ext_let)[(((((ax0_ax1_fused & 1) * 22736) + ((ax0_ax1_fused >> 1) * 196)) + cse_var_2) + ax3_inner)] * 6.673058e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 196) + cse_var_2) + ax3_inner)] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 116; ++ax0_ax1_fused_1) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 14; ++ax3_inner_1) {
        int32_t cse_var_3 = (ax2_3 * 14);
        float v__2 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused_1 & 1) * 22736) + ((ax0_ax1_fused_1 >> 1) * 196)) + cse_var_3) + ax3_inner_1) + 11368)] * 6.673058e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 196) + cse_var_3) + ax3_inner_1)] = ((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__2(uint8_t* p0, uint8_t* p0_1, float* p1, uint8_t* T_split, uint8_t* T_split_1, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* T_multiply_let = (&(global_workspace_73_var[181888]));
  for (int32_t ax1 = 0; ax1 < 116; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 196) + (ax2 * 14)) + ax3);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)p0[cse_var_1])) * 1.498563e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_73_var[272832]));
  for (int32_t ax1_1 = 0; ax1_1 < 116; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 14; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 196) + (ax2_1 * 14)) + ax3_1)] = p1[(((ax2_1 * 1624) + (ax3_1 * 116)) + ax1_1)];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_73_var[0]));
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
        float v_ = roundf((((float*)concatenate_ext_let)[(((((ax0_ax1_fused & 1) * 22736) + ((ax0_ax1_fused >> 1) * 196)) + cse_var_2) + ax3_inner)] * 9.165745e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 196) + cse_var_2) + ax3_inner)] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 116; ++ax0_ax1_fused_1) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 14; ++ax3_inner_1) {
        int32_t cse_var_3 = (ax2_3 * 14);
        float v__2 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused_1 & 1) * 22736) + ((ax0_ax1_fused_1 >> 1) * 196)) + cse_var_3) + ax3_inner_1) + 11368)] * 9.165745e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 196) + cse_var_3) + ax3_inner_1)] = ((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__3(uint8_t* p0, uint8_t* p0_1, float* p1, uint8_t* T_split, uint8_t* T_split_1, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  void* T_multiply_let = (&(global_workspace_81_var[181888]));
  for (int32_t ax1 = 0; ax1 < 116; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 196) + (ax2 * 14)) + ax3);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)p0[cse_var_1])) * 1.091019e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_81_var[272832]));
  for (int32_t ax1_1 = 0; ax1_1 < 116; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 14; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 196) + (ax2_1 * 14)) + ax3_1)] = p1[(((ax2_1 * 1624) + (ax3_1 * 116)) + ax1_1)];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_81_var[0]));
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
        float v_ = roundf((((float*)concatenate_ext_let)[(((((ax0_ax1_fused & 1) * 22736) + ((ax0_ax1_fused >> 1) * 196)) + cse_var_2) + ax3_inner)] * 7.841377e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 196) + cse_var_2) + ax3_inner)] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 116; ++ax0_ax1_fused_1) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 14; ++ax3_inner_1) {
        int32_t cse_var_3 = (ax2_3 * 14);
        float v__2 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused_1 & 1) * 22736) + ((ax0_ax1_fused_1 >> 1) * 196)) + cse_var_3) + ax3_inner_1) + 11368)] * 7.841377e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 196) + cse_var_3) + ax3_inner_1)] = ((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__4(uint8_t* p0, uint8_t* p0_1, float* p1, uint8_t* T_split, uint8_t* T_split_1, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  void* T_multiply_let = (&(global_workspace_89_var[181888]));
  for (int32_t ax1 = 0; ax1 < 116; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 196) + (ax2 * 14)) + ax3);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)p0[cse_var_1])) * 1.275286e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_89_var[272832]));
  for (int32_t ax1_1 = 0; ax1_1 < 116; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 14; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 196) + (ax2_1 * 14)) + ax3_1)] = p1[(((ax2_1 * 1624) + (ax3_1 * 116)) + ax1_1)];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_89_var[0]));
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
        float v_ = roundf((((float*)concatenate_ext_let)[(((((ax0_ax1_fused & 1) * 22736) + ((ax0_ax1_fused >> 1) * 196)) + cse_var_2) + ax3_inner)] * 6.712627e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 196) + cse_var_2) + ax3_inner)] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 116; ++ax0_ax1_fused_1) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 14; ++ax3_inner_1) {
        int32_t cse_var_3 = (ax2_3 * 14);
        float v__2 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused_1 & 1) * 22736) + ((ax0_ax1_fused_1 >> 1) * 196)) + cse_var_3) + ax3_inner_1) + 11368)] * 6.712627e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 196) + cse_var_3) + ax3_inner_1)] = ((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__5(uint8_t* p0, uint8_t* p0_1, float* p1, uint8_t* T_split, uint8_t* T_split_1, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  void* T_multiply_let = (&(global_workspace_97_var[181888]));
  for (int32_t ax1 = 0; ax1 < 116; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 196) + (ax2 * 14)) + ax3);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)p0[cse_var_1])) * 1.489730e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_97_var[272832]));
  for (int32_t ax1_1 = 0; ax1_1 < 116; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 14; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 196) + (ax2_1 * 14)) + ax3_1)] = p1[(((ax2_1 * 1624) + (ax3_1 * 116)) + ax1_1)];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_97_var[0]));
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
        float v_ = roundf((((float*)concatenate_ext_let)[(((((ax0_ax1_fused & 1) * 22736) + ((ax0_ax1_fused >> 1) * 196)) + cse_var_2) + ax3_inner)] * 8.562313e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 196) + cse_var_2) + ax3_inner)] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 116; ++ax0_ax1_fused_1) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 14; ++ax3_inner_1) {
        int32_t cse_var_3 = (ax2_3 * 14);
        float v__2 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused_1 & 1) * 22736) + ((ax0_ax1_fused_1 >> 1) * 196)) + cse_var_3) + ax3_inner_1) + 11368)] * 8.562313e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 196) + cse_var_3) + ax3_inner_1)] = ((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__6(uint8_t* p0, uint8_t* p0_1, float* p1, uint8_t* T_split, uint8_t* T_split_1, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  void* T_multiply_let = (&(global_workspace_105_var[181888]));
  for (int32_t ax1 = 0; ax1 < 116; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 196) + (ax2 * 14)) + ax3);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)p0[cse_var_1])) * 1.167909e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_105_var[272832]));
  for (int32_t ax1_1 = 0; ax1_1 < 116; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 14; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 196) + (ax2_1 * 14)) + ax3_1)] = p1[(((ax2_1 * 1624) + (ax3_1 * 116)) + ax1_1)];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_105_var[0]));
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
        float v_ = roundf((((float*)concatenate_ext_let)[(((((ax0_ax1_fused & 1) * 22736) + ((ax0_ax1_fused >> 1) * 196)) + cse_var_2) + ax3_inner)] * 7.154288e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 196) + cse_var_2) + ax3_inner)] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 116; ++ax0_ax1_fused_1) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 14; ++ax3_inner_1) {
        int32_t cse_var_3 = (ax2_3 * 14);
        float v__2 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused_1 & 1) * 22736) + ((ax0_ax1_fused_1 >> 1) * 196)) + cse_var_3) + ax3_inner_1) + 11368)] * 7.154288e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 196) + cse_var_3) + ax3_inner_1)] = ((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__7(uint8_t* p0, uint8_t* p0_1, float* p1, uint8_t* T_split, uint8_t* T_split_1, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
  void* T_multiply_let = (&(global_workspace_135_var[90944]));
  for (int32_t ax1 = 0; ax1 < 232; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 49) + (ax2 * 7)) + ax3);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)p0[cse_var_1])) * 1.972029e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_135_var[136416]));
  for (int32_t ax1_1 = 0; ax1_1 < 232; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 7; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 49) + (ax2_1 * 7)) + ax3_1)] = p1[(((ax2_1 * 1624) + (ax3_1 * 232)) + ax1_1)];
      }
    }
  }
  void* concatenate_ext_let = (&(global_workspace_135_var[0]));
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
        float v_ = roundf((((float*)concatenate_ext_let)[(((((ax0_ax1_fused & 1) * 11368) + ((ax0_ax1_fused >> 1) * 49)) + cse_var_2) + ax3_inner)] * 5.772115e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 49) + cse_var_2) + ax3_inner)] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 232; ++ax0_ax1_fused_1) {
    for (int32_t ax2_3 = 0; ax2_3 < 7; ++ax2_3) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 7; ++ax3_inner_1) {
        int32_t cse_var_3 = (ax2_3 * 7);
        float v__2 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused_1 & 1) * 11368) + ((ax0_ax1_fused_1 >> 1) * 49)) + cse_var_3) + ax3_inner_1) + 5684)] * 5.772115e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 49) + cse_var_3) + ax3_inner_1)] = ((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__8(uint8_t* p0, uint8_t* p0_1, float* p1, uint8_t* T_split, uint8_t* T_split_1, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
  void* T_multiply_let = (&(global_workspace_143_var[90944]));
  for (int32_t ax1 = 0; ax1 < 232; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        int32_t cse_var_1 = (((ax1 * 49) + (ax2 * 7)) + ax3);
        ((float*)T_multiply_let)[cse_var_1] = (((float)((int32_t)p0[cse_var_1])) * 1.732467e-02f);
      }
    }
  }
  void* T_layout_trans_let = (&(global_workspace_143_var[136416]));
  for (int32_t ax1_1 = 0; ax1_1 < 232; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 7; ++ax3_1) {
        ((float*)T_layout_trans_let)[(((ax1_1 * 49) + (ax2_1 * 7)) + ax3_1)] = p1[(((ax2_1 * 1624) + (ax3_1 * 232)) + ax1_1)];
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
        float v_ = roundf((((float*)concatenate_ext_let)[(((((ax0_ax1_fused & 1) * 11368) + ((ax0_ax1_fused >> 1) * 49)) + cse_var_2) + ax3_inner)] * 5.726560e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 49) + cse_var_2) + ax3_inner)] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 232; ++ax0_ax1_fused_1) {
    for (int32_t ax2_3 = 0; ax2_3 < 7; ++ax2_3) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 7; ++ax3_inner_1) {
        int32_t cse_var_3 = (ax2_3 * 7);
        float v__2 = roundf((((float*)concatenate_ext_let)[((((((ax0_ax1_fused_1 & 1) * 11368) + ((ax0_ax1_fused_1 >> 1) * 49)) + cse_var_3) + ax3_inner_1) + 5684)] * 5.726560e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 49) + cse_var_3) + ax3_inner_1)] = ((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_concatenate_layout_transform_reshape_transpose_reshape_divide_round_clip_c_9209744e31b51ea9_(float* p0, float* p1, uint8_t* T_split, uint8_t* T_split_1, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* concatenate_ext_let = (&(global_workspace_19_var[181888]));
  for (int32_t inn = 0; inn < 784; ++inn) {
    for (int32_t j = 0; j < 58; ++j) {
      ((float*)concatenate_ext_let)[((inn * 116) + j)] = p0[((inn * 58) + j)];
    }
    for (int32_t j_1 = 0; j_1 < 58; ++j_1) {
      ((float*)concatenate_ext_let)[(((inn * 116) + j_1) + 58)] = p1[((inn * 58) + j_1)];
    }
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 58; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 4) + (ax3_inner >> 2)) < 7) {
            float v_ = roundf((((float*)concatenate_ext_let)[(((((ax2 * 3248) + (ax3_outer * 1856)) + (ax3_inner * 116)) + ((ax0_ax1_fused & 1) * 58)) + (ax0_ax1_fused >> 1))] * 3.104483e+01f));
            float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
            T_split[((((ax0_ax1_fused * 784) + (ax2 * 28)) + (ax3_outer * 16)) + ax3_inner)] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
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
            float v__2 = roundf((((float*)concatenate_ext_let)[((((((ax2_1 * 3248) + (ax3_outer_1 * 1856)) + (ax3_inner_1 * 116)) + ((ax0_ax1_fused_1 & 1) * 58)) + (ax0_ax1_fused_1 >> 1)) + 29)] * 3.104483e+01f));
            float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
            T_split_1[((((ax0_ax1_fused_1 * 784) + (ax2_1 * 28)) + (ax3_outer_1 * 16)) + ax3_inner_1)] = ((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
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
TVM_DLL int32_t tvmgen_default_fused_concatenate_layout_transform_reshape_transpose_reshape_divide_round_clip_c_9209744e31b51ea9__1(float* p0, float* p1, uint8_t* T_split, uint8_t* T_split_1, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* concatenate_ext_let = (&(global_workspace_55_var[0]));
  for (int32_t inn = 0; inn < 196; ++inn) {
    for (int32_t j = 0; j < 116; ++j) {
      ((float*)concatenate_ext_let)[((inn * 232) + j)] = p0[((inn * 116) + j)];
    }
    for (int32_t j_1 = 0; j_1 < 116; ++j_1) {
      ((float*)concatenate_ext_let)[(((inn * 232) + j_1) + 116)] = p1[((inn * 116) + j_1)];
    }
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 116; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
        float v_ = roundf((((float*)concatenate_ext_let)[((((ax2 * 3248) + (ax3_inner * 232)) + ((ax0_ax1_fused & 1) * 116)) + (ax0_ax1_fused >> 1))] * 6.673058e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 196) + (ax2 * 14)) + ax3_inner)] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 116; ++ax0_ax1_fused_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 14; ++ax3_inner_1) {
        float v__2 = roundf((((float*)concatenate_ext_let)[(((((ax2_1 * 3248) + (ax3_inner_1 * 232)) + ((ax0_ax1_fused_1 & 1) * 116)) + (ax0_ax1_fused_1 >> 1)) + 58)] * 6.673058e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 196) + (ax2_1 * 14)) + ax3_inner_1)] = ((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_concatenate_layout_transform_reshape_transpose_reshape_divide_round_clip_c_9209744e31b51ea9__2(float* p0, float* p1, uint8_t* T_split, uint8_t* T_split_1, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  void* concatenate_ext_let = (&(global_workspace_125_var[0]));
  for (int32_t inn = 0; inn < 49; ++inn) {
    for (int32_t j = 0; j < 232; ++j) {
      ((float*)concatenate_ext_let)[((inn * 464) + j)] = p0[((inn * 232) + j)];
    }
    for (int32_t j_1 = 0; j_1 < 232; ++j_1) {
      ((float*)concatenate_ext_let)[(((inn * 464) + j_1) + 232)] = p1[((inn * 232) + j_1)];
    }
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 232; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 7; ++ax3_inner) {
        float v_ = roundf((((float*)concatenate_ext_let)[((((ax2 * 3248) + (ax3_inner * 464)) + ((ax0_ax1_fused & 1) * 232)) + (ax0_ax1_fused >> 1))] * 5.070918e+01f));
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_split[(((ax0_ax1_fused * 49) + (ax2 * 7)) + ax3_inner)] = ((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)));
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 232; ++ax0_ax1_fused_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 7; ++ax3_inner_1) {
        float v__2 = roundf((((float*)concatenate_ext_let)[(((((ax2_1 * 3248) + (ax3_inner_1 * 464)) + ((ax0_ax1_fused_1 & 1) * 232)) + (ax0_ax1_fused_1 >> 1)) + 116)] * 5.070918e+01f));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        T_split_1[(((ax0_ax1_fused_1 * 49) + (ax2_1 * 7)) + ax3_inner_1)] = ((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_add_clip_cast_layout_transform_cast_subtract(float* p0, int16_t* T_subtract, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 224; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 224; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
        float v_ = roundf((p0[(((ax3_inner * 50176) + (ax0_ax1_fused * 224)) + ax2)] * 5.359503e+01f)) + 1.140000e+02f;
        float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
        T_subtract[(((ax0_ax1_fused * 672) + (ax2 * 3)) + ax3_inner)] = (((int16_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))) - (int16_t)114);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_clip_cast_cast(float* p0, int16_t* T_cast, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 64; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      float v_ = roundf((p0[cse_var_1] * 1.024629e+03f));
      float v__1 = (v_) < (2.550000e+02f) ? (v_) : (2.550000e+02f);
      T_cast[cse_var_1] = ((int16_t)((uint8_t)((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_cast(uint8_t* p0, uint8_t* p0_1, int16_t* T_cast, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 28; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 8) + (ax3_inner >> 1)) < 29) {
            T_cast[((((ax0_ax1_fused * 1624) + (ax2 * 58)) + (ax3_outer * 16)) + ax3_inner)] = ((int16_t)p0_1[((((ax3_outer * 12544) + (ax3_inner * 784)) + (ax0_ax1_fused * 28)) + ax2)]);
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
TVM_DLL int32_t tvmgen_default_fused_layout_transform_cast_1(uint8_t* p0, uint8_t* p0_1, int16_t* T_cast, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 14; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 4) + (ax3_inner >> 2)) < 29) {
            T_cast[((((ax0_ax1_fused * 1624) + (ax2 * 116)) + (ax3_outer * 16)) + ax3_inner)] = ((int16_t)p0_1[((((ax3_outer * 3136) + (ax3_inner * 196)) + (ax0_ax1_fused * 14)) + ax2)]);
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
TVM_DLL int32_t tvmgen_default_fused_layout_transform_cast_2(uint8_t* p0, uint8_t* p0_1, int16_t* T_cast, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 7; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 15; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 29) {
            T_cast[((((ax0_ax1_fused * 1624) + (ax2 * 232)) + (ax3_outer * 16)) + ax3_inner)] = ((int16_t)p0_1[((((ax3_outer * 784) + (ax3_inner * 49)) + (ax0_ax1_fused * 7)) + ax2)]);
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
TVM_DLL int32_t tvmgen_default_fused_mean(float* p0, float* T_divide, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var) {
  void* p0_red_let = (&(global_workspace_155_var[200704]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 1024; ++ax0_ax1_fused) {
    ((float*)p0_red_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t k1 = 0; k1 < 7; ++k1) {
      for (int32_t k2 = 0; k2 < 7; ++k2) {
        ((float*)p0_red_let)[ax0_ax1_fused] = (((float*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 7168) + (k2 * 1024)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 64; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      T_divide[cse_var_1] = (((float*)p0_red_let)[cse_var_1] * 2.040816e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_zeros_greater_equal_where_add_right_sh_96b9864142cb9bbc_(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var) {
  void* fused_nn_contrib_dense_pack_cast_multiply_zeros_greater_equal_where_add_right_shift_cast_add_clip_subtract_cast_multiply_constant_let = (&(global_const_workspace_158_var[4525024]));
  void* fused_nn_contrib_dense_pack_cast_multiply_zeros_greater_equal_constant_1_let = (&(global_const_workspace_158_var[4424608]));
  void* fused_nn_contrib_dense_pack_cast_multiply_zeros_greater_equal_constant_let = (&(global_const_workspace_158_var[4432608]));
  void* fused_constant_56_let = (&(global_const_workspace_158_var[0]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 125; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_159_var[0]));
    void* compute_global_let = (&(global_workspace_159_var[32]));
    for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 1024; ++k_outer) {
      for (int32_t x_c = 0; x_c < 8; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_56_let)[(((ax1_outer_ax0_outer_fused * 8192) + (k_outer * 8)) + x_c)])));
      }
    }
    for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
      ((int32_t*)compute_let)[x_inner_inner] = ((int32_t*)compute_global_let)[x_inner_inner];
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 8) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((int64_t)((int32_t*)compute_let)[ax1_inner_inner]) * (int64_t)1947133299) + ((0 < ((int32_t)((int64_t)0 <= ((int64_t)((int32_t*)compute_let)[ax1_inner_inner])))) ? ((int64_t*)fused_nn_contrib_dense_pack_cast_multiply_zeros_greater_equal_constant_let)[cse_var_1] : ((int64_t*)fused_nn_contrib_dense_pack_cast_multiply_zeros_greater_equal_constant_1_let)[cse_var_1])) >> (int64_t)40)) + 49;
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      float v__2 = roundf((((((float)(((v__1) > (0) ? (v__1) : (0)) - 49)) * 1.745405e-01f) + ((float*)fused_nn_contrib_dense_pack_cast_multiply_zeros_greater_equal_where_add_right_shift_cast_add_clip_subtract_cast_multiply_constant_let)[cse_var_1]) * 5.800464e+00f)) + 5.400000e+01f;
      float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
      T_multiply[cse_var_1] = (((float)(((int32_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)))) - 54)) * 1.724000e-01f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_conv2d_add_constant_5_let = (&(global_const_workspace_8_var[4672304]));
  void* fused_nn_conv2d_add_constant_4_let = (&(global_const_workspace_8_var[4672400]));
  void* fused_nn_conv2d_add_constant_3_let = (&(global_const_workspace_8_var[4672496]));
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_8_var[4672112]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[4659200]));
  void* PaddedInput_let = (&(global_workspace_9_var[0]));
  for (int32_t i1 = 0; i1 < 57; ++i1) {
    for (int32_t i2 = 0; i2 < 57; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (i2 * 24);
        ((int16_t*)PaddedInput_let)[(((i1 * 1368) + cse_var_1) + i3)] = (((1 <= i1) && (1 <= i2)) ? p0[((((i1 * 1344) + cse_var_1) + i3) - 1368)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_9_var[332416]));
  for (int32_t i = 0; i < 28; ++i) {
    for (int32_t j = 0; j < 28; ++j) {
      for (int32_t c = 0; c < 24; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 672) + (j * 24)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 24);
            int32_t cse_var_2 = (((i * 672) + (j * 24)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 2736) + (di * 1368)) + (j * 48)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((di * 72) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_9_var[75264]));
  for (int32_t ax1 = 0; ax1 < 28; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 672) + (ax2 * 24)) + ax3);
        ((int32_t*)T_add_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] + ((int32_t*)fused_nn_conv2d_constant_1_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_9_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 28; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 28; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 24; ++i3_1) {
        int32_t cse_var_5 = (((i1_1 * 672) + (i2_1 * 24)) + i3_1);
        ((int32_t*)compute_let)[cse_var_5] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_5]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_3_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_5_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_5_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_9_var[75264]));
  for (int32_t ax1_1 = 0; ax1_1 < 28; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 28; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 24; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 672) + (ax2_1 * 24)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_6] = (((int32_t*)compute_let)[cse_var_6] + 123);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_9_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 28; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 28; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 24; ++i3_2) {
        int32_t cse_var_7 = (((i1_2 * 672) + (i2_2 * 24)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_7];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_7] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_9_var[75264]));
  for (int32_t ax1_2 = 0; ax1_2 < 28; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 28; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 24; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 672) + (ax2_2 * 24)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_8] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_8]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_9_var[37632]));
  for (int32_t ax1_3 = 0; ax1_3 < 28; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 28; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 24; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 672) + (ax2_3 * 24)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_9] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 28; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 28; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 24; ++ax3_4) {
        int32_t cse_var_10 = (((ax1_4 * 672) + (ax2_4 * 24)) + ax3_4);
        T_subtract[cse_var_10] = (((int16_t*)T_cast_let_1)[cse_var_10] - (int16_t)123);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_1(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_conv2d_add_constant_14_let = (&(global_const_workspace_14_var[4670912]));
  void* fused_nn_conv2d_add_constant_13_let = (&(global_const_workspace_14_var[4671152]));
  void* fused_nn_conv2d_add_constant_12_let = (&(global_const_workspace_14_var[4671392]));
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_14_var[4660832]));
  void* fused_constant_4_let = (&(global_const_workspace_14_var[4555808]));
  void* PaddedInput_let = (&(global_workspace_15_var[545664]));
  for (int32_t i1 = 0; i1 < 57; ++i1) {
    for (int32_t i2 = 0; i2 < 57; ++i2) {
      for (int32_t i3 = 0; i3 < 58; ++i3) {
        int32_t cse_var_1 = (i2 * 58);
        ((int16_t*)PaddedInput_let)[(((i1 * 3306) + cse_var_1) + i3)] = (((1 <= i1) && (1 <= i2)) ? p0[((((i1 * 3248) + cse_var_1) + i3) - 3306)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_15_var[181888]));
  for (int32_t i = 0; i < 28; ++i) {
    for (int32_t j = 0; j < 28; ++j) {
      for (int32_t c = 0; c < 58; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 58)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 58);
            int32_t cse_var_2 = (((i * 1624) + (j * 58)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 6612) + (di * 3306)) + (j * 116)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((di * 174) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_15_var[363776]));
  for (int32_t ax1 = 0; ax1 < 28; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 58; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 1624) + (ax2 * 58)) + ax3);
        ((int32_t*)T_add_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] + ((int32_t*)fused_nn_conv2d_constant_4_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_15_var[181888]));
  for (int32_t i1_1 = 0; i1_1 < 28; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 28; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 58; ++i3_1) {
        int32_t cse_var_5 = (((i1_1 * 1624) + (i2_1 * 58)) + i3_1);
        ((int32_t*)compute_let)[cse_var_5] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_5]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_12_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_14_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_14_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_15_var[363776]));
  for (int32_t ax1_1 = 0; ax1_1 < 28; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 28; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 58; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 1624) + (ax2_1 * 58)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_6] = (((int32_t*)compute_let)[cse_var_6] + 128);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_15_var[181888]));
  for (int32_t i1_2 = 0; i1_2 < 28; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 28; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 58; ++i3_2) {
        int32_t cse_var_7 = (((i1_2 * 1624) + (i2_2 * 58)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_7];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_7] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_15_var[363776]));
  for (int32_t ax1_2 = 0; ax1_2 < 28; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 28; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 58; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 1624) + (ax2_2 * 58)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_8] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_8]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_15_var[181888]));
  for (int32_t ax1_3 = 0; ax1_3 < 28; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 28; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 58; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 1624) + (ax2_3 * 58)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_9] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 28; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 28; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 58; ++ax3_4) {
        int32_t cse_var_10 = (((ax1_4 * 1624) + (ax2_4 * 58)) + ax3_4);
        T_subtract[cse_var_10] = (((int16_t*)T_cast_let_1)[cse_var_10] - (int16_t)128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_10(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  void* fused_nn_conv2d_add_constant_92_let = (&(global_const_workspace_84_var[4626256]));
  void* fused_nn_conv2d_add_constant_91_let = (&(global_const_workspace_84_var[4626720]));
  void* fused_nn_conv2d_add_constant_90_let = (&(global_const_workspace_84_var[4627184]));
  void* fused_nn_conv2d_constant_30_let = (&(global_const_workspace_84_var[4615584]));
  void* fused_constant_30_let = (&(global_const_workspace_84_var[4540880]));
  void* PaddedInput_let = (&(global_workspace_85_var[90944]));
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (i2 * 116);
        ((int16_t*)PaddedInput_let)[(((i1 * 1856) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 15)) && (1 <= i2)) && (i2 < 15)) ? p0[((((i1 * 1624) + cse_var_1) + i3) - 1740)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_85_var[0]));
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 116; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 116)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 116);
            int32_t cse_var_3 = (dj * 116);
            int32_t cse_var_2 = (((i * 1624) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1856) + (di * 1856)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_30_let)[(((di * 348) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_85_var[90944]));
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 1624) + (ax2 * 116)) + ax3);
        ((int32_t*)T_add_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_30_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_85_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 14; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 14; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 116; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 1624) + (i2_1 * 116)) + i3_1);
        ((int32_t*)compute_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_90_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_92_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_92_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_85_var[90944]));
  for (int32_t ax1_1 = 0; ax1_1 < 14; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 116; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 1624) + (ax2_1 * 116)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_7] = (((int32_t*)compute_let)[cse_var_7] + 132);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_85_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 14; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 14; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 116; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 1624) + (i2_2 * 116)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_8];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_8] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_85_var[90944]));
  for (int32_t ax1_2 = 0; ax1_2 < 14; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 14; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 116; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 1624) + (ax2_2 * 116)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_9] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_9]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_85_var[45472]));
  for (int32_t ax1_3 = 0; ax1_3 < 14; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 116; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 1624) + (ax2_3 * 116)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_10] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 14; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 14; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 116; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 1624) + (ax2_4 * 116)) + ax3_4);
        T_subtract[cse_var_11] = (((int16_t*)T_cast_let_1)[cse_var_11] - (int16_t)132);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_11(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  void* fused_nn_conv2d_add_constant_101_let = (&(global_const_workspace_92_var[4658272]));
  void* fused_nn_conv2d_add_constant_100_let = (&(global_const_workspace_92_var[4658736]));
  void* fused_nn_conv2d_add_constant_99_let = (&(global_const_workspace_92_var[4623008]));
  void* fused_nn_conv2d_constant_33_let = (&(global_const_workspace_92_var[4614192]));
  void* fused_constant_33_let = (&(global_const_workspace_92_var[4538784]));
  void* PaddedInput_let = (&(global_workspace_93_var[90944]));
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (i2 * 116);
        ((int16_t*)PaddedInput_let)[(((i1 * 1856) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 15)) && (1 <= i2)) && (i2 < 15)) ? p0[((((i1 * 1624) + cse_var_1) + i3) - 1740)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_93_var[0]));
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 116; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 116)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 116);
            int32_t cse_var_3 = (dj * 116);
            int32_t cse_var_2 = (((i * 1624) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1856) + (di * 1856)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_33_let)[(((di * 348) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_93_var[90944]));
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 1624) + (ax2 * 116)) + ax3);
        ((int32_t*)T_add_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_33_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_93_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 14; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 14; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 116; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 1624) + (i2_1 * 116)) + i3_1);
        ((int32_t*)compute_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_99_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_101_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_101_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_93_var[90944]));
  for (int32_t ax1_1 = 0; ax1_1 < 14; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 116; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 1624) + (ax2_1 * 116)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_7] = (((int32_t*)compute_let)[cse_var_7] + 113);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_93_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 14; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 14; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 116; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 1624) + (i2_2 * 116)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_8];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_8] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_93_var[90944]));
  for (int32_t ax1_2 = 0; ax1_2 < 14; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 14; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 116; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 1624) + (ax2_2 * 116)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_9] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_9]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_93_var[45472]));
  for (int32_t ax1_3 = 0; ax1_3 < 14; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 116; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 1624) + (ax2_3 * 116)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_10] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 14; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 14; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 116; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 1624) + (ax2_4 * 116)) + ax3_4);
        T_subtract[cse_var_11] = (((int16_t*)T_cast_let_1)[cse_var_11] - (int16_t)113);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_12(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  void* fused_nn_conv2d_add_constant_110_let = (&(global_const_workspace_100_var[4654096]));
  void* fused_nn_conv2d_add_constant_109_let = (&(global_const_workspace_100_var[4654560]));
  void* fused_nn_conv2d_add_constant_108_let = (&(global_const_workspace_100_var[4655024]));
  void* fused_nn_conv2d_constant_36_let = (&(global_const_workspace_100_var[4612800]));
  void* fused_constant_36_let = (&(global_const_workspace_100_var[4536688]));
  void* PaddedInput_let = (&(global_workspace_101_var[90944]));
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (i2 * 116);
        ((int16_t*)PaddedInput_let)[(((i1 * 1856) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 15)) && (1 <= i2)) && (i2 < 15)) ? p0[((((i1 * 1624) + cse_var_1) + i3) - 1740)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_101_var[0]));
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 116; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 116)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 116);
            int32_t cse_var_3 = (dj * 116);
            int32_t cse_var_2 = (((i * 1624) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1856) + (di * 1856)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_36_let)[(((di * 348) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_101_var[90944]));
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 1624) + (ax2 * 116)) + ax3);
        ((int32_t*)T_add_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_36_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_101_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 14; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 14; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 116; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 1624) + (i2_1 * 116)) + i3_1);
        ((int32_t*)compute_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_108_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_110_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_110_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_101_var[90944]));
  for (int32_t ax1_1 = 0; ax1_1 < 14; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 116; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 1624) + (ax2_1 * 116)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_7] = (((int32_t*)compute_let)[cse_var_7] + 152);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_101_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 14; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 14; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 116; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 1624) + (i2_2 * 116)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_8];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_8] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_101_var[90944]));
  for (int32_t ax1_2 = 0; ax1_2 < 14; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 14; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 116; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 1624) + (ax2_2 * 116)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_9] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_9]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_101_var[45472]));
  for (int32_t ax1_3 = 0; ax1_3 < 14; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 116; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 1624) + (ax2_3 * 116)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_10] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 14; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 14; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 116; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 1624) + (ax2_4 * 116)) + ax3_4);
        T_subtract[cse_var_11] = (((int16_t*)T_cast_let_1)[cse_var_11] - (int16_t)152);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_13(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  void* fused_nn_conv2d_add_constant_119_let = (&(global_const_workspace_108_var[4649920]));
  void* fused_nn_conv2d_add_constant_118_let = (&(global_const_workspace_108_var[4650384]));
  void* fused_nn_conv2d_add_constant_117_let = (&(global_const_workspace_108_var[4650848]));
  void* fused_nn_conv2d_constant_39_let = (&(global_const_workspace_108_var[4611408]));
  void* fused_constant_39_let = (&(global_const_workspace_108_var[4534592]));
  void* PaddedInput_let = (&(global_workspace_109_var[90944]));
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (i2 * 116);
        ((int16_t*)PaddedInput_let)[(((i1 * 1856) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 15)) && (1 <= i2)) && (i2 < 15)) ? p0[((((i1 * 1624) + cse_var_1) + i3) - 1740)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_109_var[0]));
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 116; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 116)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 116);
            int32_t cse_var_3 = (dj * 116);
            int32_t cse_var_2 = (((i * 1624) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1856) + (di * 1856)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_39_let)[(((di * 348) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_109_var[90944]));
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 1624) + (ax2 * 116)) + ax3);
        ((int32_t*)T_add_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_39_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_109_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 14; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 14; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 116; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 1624) + (i2_1 * 116)) + i3_1);
        ((int32_t*)compute_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_117_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_119_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_119_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_109_var[90944]));
  for (int32_t ax1_1 = 0; ax1_1 < 14; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 116; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 1624) + (ax2_1 * 116)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_7] = (((int32_t*)compute_let)[cse_var_7] + 144);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_109_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 14; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 14; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 116; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 1624) + (i2_2 * 116)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_8];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_8] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_109_var[90944]));
  for (int32_t ax1_2 = 0; ax1_2 < 14; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 14; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 116; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 1624) + (ax2_2 * 116)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_9] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_9]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_109_var[45472]));
  for (int32_t ax1_3 = 0; ax1_3 < 14; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 116; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 1624) + (ax2_3 * 116)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_10] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 14; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 14; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 116; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 1624) + (ax2_4 * 116)) + ax3_4);
        T_subtract[cse_var_11] = (((int16_t*)T_cast_let_1)[cse_var_11] - (int16_t)144);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_14(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  void* fused_nn_conv2d_add_constant_125_let = (&(global_const_workspace_114_var[4608160]));
  void* fused_nn_conv2d_add_constant_124_let = (&(global_const_workspace_114_var[4609088]));
  void* fused_nn_conv2d_add_constant_123_let = (&(global_const_workspace_114_var[4610016]));
  void* fused_nn_conv2d_constant_41_let = (&(global_const_workspace_114_var[4571040]));
  void* fused_constant_41_let = (&(global_const_workspace_114_var[4504464]));
  void* PaddedInput_let = (&(global_workspace_115_var[0]));
  for (int32_t i1 = 0; i1 < 15; ++i1) {
    for (int32_t i2 = 0; i2 < 15; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (i2 * 232);
        ((int16_t*)PaddedInput_let)[(((i1 * 3480) + cse_var_1) + i3)] = (((1 <= i1) && (1 <= i2)) ? p0[((((i1 * 3248) + cse_var_1) + i3) - 3480)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_115_var[104400]));
  for (int32_t i = 0; i < 7; ++i) {
    for (int32_t j = 0; j < 7; ++j) {
      for (int32_t c = 0; c < 232; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 232)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 232);
            int32_t cse_var_2 = (((i * 1624) + (j * 232)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 6960) + (di * 3480)) + (j * 464)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_41_let)[(((di * 696) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_115_var[45472]));
  for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 1624) + (ax2 * 232)) + ax3);
        ((int32_t*)T_add_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] + ((int32_t*)fused_nn_conv2d_constant_41_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_115_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 7; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 7; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 232; ++i3_1) {
        int32_t cse_var_5 = (((i1_1 * 1624) + (i2_1 * 232)) + i3_1);
        ((int32_t*)compute_let)[cse_var_5] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_5]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_123_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_125_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_125_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_115_var[45472]));
  for (int32_t ax1_1 = 0; ax1_1 < 7; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 232; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 1624) + (ax2_1 * 232)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_6] = (((int32_t*)compute_let)[cse_var_6] + 117);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_115_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 7; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 7; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 232; ++i3_2) {
        int32_t cse_var_7 = (((i1_2 * 1624) + (i2_2 * 232)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_7];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_7] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_115_var[45472]));
  for (int32_t ax1_2 = 0; ax1_2 < 7; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 7; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 232; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 1624) + (ax2_2 * 232)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_8] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_8]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_115_var[0]));
  for (int32_t ax1_3 = 0; ax1_3 < 7; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 7; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 232; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 1624) + (ax2_3 * 232)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_9] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 7; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 7; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 232; ++ax3_4) {
        int32_t cse_var_10 = (((ax1_4 * 1624) + (ax2_4 * 232)) + ax3_4);
        T_subtract[cse_var_10] = (((int16_t*)T_cast_let_1)[cse_var_10] - (int16_t)117);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_15(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  void* fused_nn_conv2d_add_constant_134_let = (&(global_const_workspace_120_var[4599808]));
  void* fused_nn_conv2d_add_constant_133_let = (&(global_const_workspace_120_var[4600736]));
  void* fused_nn_conv2d_add_constant_132_let = (&(global_const_workspace_120_var[4601664]));
  void* fused_nn_conv2d_constant_44_let = (&(global_const_workspace_120_var[4568256]));
  void* fused_constant_44_let = (&(global_const_workspace_120_var[4500288]));
  void* PaddedInput_let = (&(global_workspace_121_var[0]));
  for (int32_t i1 = 0; i1 < 15; ++i1) {
    for (int32_t i2 = 0; i2 < 15; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (i2 * 232);
        ((int16_t*)PaddedInput_let)[(((i1 * 3480) + cse_var_1) + i3)] = (((1 <= i1) && (1 <= i2)) ? p0[((((i1 * 3248) + cse_var_1) + i3) - 3480)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_121_var[104400]));
  for (int32_t i = 0; i < 7; ++i) {
    for (int32_t j = 0; j < 7; ++j) {
      for (int32_t c = 0; c < 232; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 232)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 232);
            int32_t cse_var_2 = (((i * 1624) + (j * 232)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 6960) + (di * 3480)) + (j * 464)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_44_let)[(((di * 696) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_121_var[45472]));
  for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 1624) + (ax2 * 232)) + ax3);
        ((int32_t*)T_add_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] + ((int32_t*)fused_nn_conv2d_constant_44_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_121_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 7; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 7; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 232; ++i3_1) {
        int32_t cse_var_5 = (((i1_1 * 1624) + (i2_1 * 232)) + i3_1);
        ((int32_t*)compute_let)[cse_var_5] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_5]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_132_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_134_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_134_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_121_var[45472]));
  for (int32_t ax1_1 = 0; ax1_1 < 7; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 232; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 1624) + (ax2_1 * 232)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_6] = (((int32_t*)compute_let)[cse_var_6] + 128);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_121_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 7; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 7; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 232; ++i3_2) {
        int32_t cse_var_7 = (((i1_2 * 1624) + (i2_2 * 232)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_7];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_7] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_121_var[45472]));
  for (int32_t ax1_2 = 0; ax1_2 < 7; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 7; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 232; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 1624) + (ax2_2 * 232)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_8] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_8]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_121_var[0]));
  for (int32_t ax1_3 = 0; ax1_3 < 7; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 7; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 232; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 1624) + (ax2_3 * 232)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_9] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 7; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 7; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 232; ++ax3_4) {
        int32_t cse_var_10 = (((ax1_4 * 1624) + (ax2_4 * 232)) + ax3_4);
        T_subtract[cse_var_10] = (((int16_t*)T_cast_let_1)[cse_var_10] - (int16_t)128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_16(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  void* fused_nn_conv2d_add_constant_143_let = (&(global_const_workspace_130_var[4591456]));
  void* fused_nn_conv2d_add_constant_142_let = (&(global_const_workspace_130_var[4592384]));
  void* fused_nn_conv2d_add_constant_141_let = (&(global_const_workspace_130_var[4593312]));
  void* fused_nn_conv2d_constant_47_let = (&(global_const_workspace_130_var[4565472]));
  void* fused_constant_47_let = (&(global_const_workspace_130_var[4496112]));
  void* PaddedInput_let = (&(global_workspace_131_var[45472]));
  for (int32_t i1 = 0; i1 < 9; ++i1) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (i2 * 232);
        ((int16_t*)PaddedInput_let)[(((i1 * 2088) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 8)) && (1 <= i2)) && (i2 < 8)) ? p0[((((i1 * 1624) + cse_var_1) + i3) - 1856)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_131_var[0]));
  for (int32_t i = 0; i < 7; ++i) {
    for (int32_t j = 0; j < 7; ++j) {
      for (int32_t c = 0; c < 232; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 232)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 232);
            int32_t cse_var_3 = (dj * 232);
            int32_t cse_var_2 = (((i * 1624) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 2088) + (di * 2088)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_47_let)[(((di * 696) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_131_var[45472]));
  for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 1624) + (ax2 * 232)) + ax3);
        ((int32_t*)T_add_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_47_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_131_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 7; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 7; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 232; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 1624) + (i2_1 * 232)) + i3_1);
        ((int32_t*)compute_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_141_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_143_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_143_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_131_var[45472]));
  for (int32_t ax1_1 = 0; ax1_1 < 7; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 232; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 1624) + (ax2_1 * 232)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_7] = (((int32_t*)compute_let)[cse_var_7] + 124);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_131_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 7; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 7; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 232; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 1624) + (i2_2 * 232)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_8];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_8] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_131_var[45472]));
  for (int32_t ax1_2 = 0; ax1_2 < 7; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 7; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 232; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 1624) + (ax2_2 * 232)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_9] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_9]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_131_var[22736]));
  for (int32_t ax1_3 = 0; ax1_3 < 7; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 7; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 232; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 1624) + (ax2_3 * 232)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_10] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 7; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 7; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 232; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 1624) + (ax2_4 * 232)) + ax3_4);
        T_subtract[cse_var_11] = (((int16_t*)T_cast_let_1)[cse_var_11] - (int16_t)124);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_17(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  void* fused_nn_conv2d_add_constant_152_let = (&(global_const_workspace_138_var[4583104]));
  void* fused_nn_conv2d_add_constant_151_let = (&(global_const_workspace_138_var[4584032]));
  void* fused_nn_conv2d_add_constant_150_let = (&(global_const_workspace_138_var[4584960]));
  void* fused_nn_conv2d_constant_50_let = (&(global_const_workspace_138_var[4562688]));
  void* fused_constant_50_let = (&(global_const_workspace_138_var[4491936]));
  void* PaddedInput_let = (&(global_workspace_139_var[45472]));
  for (int32_t i1 = 0; i1 < 9; ++i1) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (i2 * 232);
        ((int16_t*)PaddedInput_let)[(((i1 * 2088) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 8)) && (1 <= i2)) && (i2 < 8)) ? p0[((((i1 * 1624) + cse_var_1) + i3) - 1856)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_139_var[0]));
  for (int32_t i = 0; i < 7; ++i) {
    for (int32_t j = 0; j < 7; ++j) {
      for (int32_t c = 0; c < 232; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 232)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 232);
            int32_t cse_var_3 = (dj * 232);
            int32_t cse_var_2 = (((i * 1624) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 2088) + (di * 2088)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_50_let)[(((di * 696) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_139_var[45472]));
  for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 1624) + (ax2 * 232)) + ax3);
        ((int32_t*)T_add_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_50_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_139_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 7; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 7; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 232; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 1624) + (i2_1 * 232)) + i3_1);
        ((int32_t*)compute_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_150_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_152_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_152_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_139_var[45472]));
  for (int32_t ax1_1 = 0; ax1_1 < 7; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 232; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 1624) + (ax2_1 * 232)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_7] = (((int32_t*)compute_let)[cse_var_7] + 141);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_139_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 7; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 7; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 232; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 1624) + (i2_2 * 232)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_8];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_8] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_139_var[45472]));
  for (int32_t ax1_2 = 0; ax1_2 < 7; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 7; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 232; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 1624) + (ax2_2 * 232)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_9] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_9]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_139_var[22736]));
  for (int32_t ax1_3 = 0; ax1_3 < 7; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 7; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 232; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 1624) + (ax2_3 * 232)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_10] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 7; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 7; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 232; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 1624) + (ax2_4 * 232)) + ax3_4);
        T_subtract[cse_var_11] = (((int16_t*)T_cast_let_1)[cse_var_11] - (int16_t)141);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_18(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
  void* fused_nn_conv2d_add_constant_161_let = (&(global_const_workspace_146_var[4574752]));
  void* fused_nn_conv2d_add_constant_160_let = (&(global_const_workspace_146_var[4575680]));
  void* fused_nn_conv2d_add_constant_159_let = (&(global_const_workspace_146_var[4576608]));
  void* fused_nn_conv2d_constant_53_let = (&(global_const_workspace_146_var[4559904]));
  void* fused_constant_53_let = (&(global_const_workspace_146_var[4487760]));
  void* PaddedInput_let = (&(global_workspace_147_var[45472]));
  for (int32_t i1 = 0; i1 < 9; ++i1) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (i2 * 232);
        ((int16_t*)PaddedInput_let)[(((i1 * 2088) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 8)) && (1 <= i2)) && (i2 < 8)) ? p0[((((i1 * 1624) + cse_var_1) + i3) - 1856)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_147_var[0]));
  for (int32_t i = 0; i < 7; ++i) {
    for (int32_t j = 0; j < 7; ++j) {
      for (int32_t c = 0; c < 232; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 232)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 232);
            int32_t cse_var_3 = (dj * 232);
            int32_t cse_var_2 = (((i * 1624) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 2088) + (di * 2088)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_53_let)[(((di * 696) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_147_var[45472]));
  for (int32_t ax1 = 0; ax1 < 7; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 1624) + (ax2 * 232)) + ax3);
        ((int32_t*)T_add_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_53_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_147_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 7; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 7; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 232; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 1624) + (i2_1 * 232)) + i3_1);
        ((int32_t*)compute_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_159_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_161_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_161_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_147_var[45472]));
  for (int32_t ax1_1 = 0; ax1_1 < 7; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 7; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 232; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 1624) + (ax2_1 * 232)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_7] = (((int32_t*)compute_let)[cse_var_7] + 132);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_147_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 7; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 7; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 232; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 1624) + (i2_2 * 232)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_8];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_8] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_147_var[45472]));
  for (int32_t ax1_2 = 0; ax1_2 < 7; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 7; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 232; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 1624) + (ax2_2 * 232)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_9] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_9]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_147_var[22736]));
  for (int32_t ax1_3 = 0; ax1_3 < 7; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 7; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 232; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 1624) + (ax2_3 * 232)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_10] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 7; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 7; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 232; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 1624) + (ax2_4 * 232)) + ax3_4);
        T_subtract[cse_var_11] = (((int16_t*)T_cast_let_1)[cse_var_11] - (int16_t)132);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_2(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_conv2d_add_constant_23_let = (&(global_const_workspace_24_var[4668752]));
  void* fused_nn_conv2d_add_constant_22_let = (&(global_const_workspace_24_var[4668992]));
  void* fused_nn_conv2d_add_constant_21_let = (&(global_const_workspace_24_var[4669232]));
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_24_var[4660112]));
  void* fused_constant_7_let = (&(global_const_workspace_24_var[4554752]));
  void* PaddedInput_let = (&(global_workspace_25_var[181888]));
  for (int32_t i1 = 0; i1 < 30; ++i1) {
    for (int32_t i2 = 0; i2 < 30; ++i2) {
      for (int32_t i3 = 0; i3 < 58; ++i3) {
        int32_t cse_var_1 = (i2 * 58);
        ((int16_t*)PaddedInput_let)[(((i1 * 1740) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 29)) && (1 <= i2)) && (i2 < 29)) ? p0[((((i1 * 1624) + cse_var_1) + i3) - 1682)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_25_var[0]));
  for (int32_t i = 0; i < 28; ++i) {
    for (int32_t j = 0; j < 28; ++j) {
      for (int32_t c = 0; c < 58; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 58)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 58);
            int32_t cse_var_3 = (dj * 58);
            int32_t cse_var_2 = (((i * 1624) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1740) + (di * 1740)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((di * 174) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_25_var[181888]));
  for (int32_t ax1 = 0; ax1 < 28; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 58; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 1624) + (ax2 * 58)) + ax3);
        ((int32_t*)T_add_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_7_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_25_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 28; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 28; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 58; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 1624) + (i2_1 * 58)) + i3_1);
        ((int32_t*)compute_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_21_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_23_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_23_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_25_var[181888]));
  for (int32_t ax1_1 = 0; ax1_1 < 28; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 28; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 58; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 1624) + (ax2_1 * 58)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_7] = (((int32_t*)compute_let)[cse_var_7] + 128);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_25_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 28; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 28; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 58; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 1624) + (i2_2 * 58)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_8];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_8] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_25_var[181888]));
  for (int32_t ax1_2 = 0; ax1_2 < 28; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 28; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 58; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 1624) + (ax2_2 * 58)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_9] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_9]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_25_var[90944]));
  for (int32_t ax1_3 = 0; ax1_3 < 28; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 28; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 58; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 1624) + (ax2_3 * 58)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_10] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 28; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 28; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 58; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 1624) + (ax2_4 * 58)) + ax3_4);
        T_subtract[cse_var_11] = (((int16_t*)T_cast_let_1)[cse_var_11] - (int16_t)128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_3(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_conv2d_add_constant_32_let = (&(global_const_workspace_32_var[4666592]));
  void* fused_nn_conv2d_add_constant_31_let = (&(global_const_workspace_32_var[4666832]));
  void* fused_nn_conv2d_add_constant_30_let = (&(global_const_workspace_32_var[4667072]));
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_32_var[4662512]));
  void* fused_constant_10_let = (&(global_const_workspace_32_var[4557920]));
  void* PaddedInput_let = (&(global_workspace_33_var[181888]));
  for (int32_t i1 = 0; i1 < 30; ++i1) {
    for (int32_t i2 = 0; i2 < 30; ++i2) {
      for (int32_t i3 = 0; i3 < 58; ++i3) {
        int32_t cse_var_1 = (i2 * 58);
        ((int16_t*)PaddedInput_let)[(((i1 * 1740) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 29)) && (1 <= i2)) && (i2 < 29)) ? p0[((((i1 * 1624) + cse_var_1) + i3) - 1682)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_33_var[0]));
  for (int32_t i = 0; i < 28; ++i) {
    for (int32_t j = 0; j < 28; ++j) {
      for (int32_t c = 0; c < 58; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 58)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 58);
            int32_t cse_var_3 = (dj * 58);
            int32_t cse_var_2 = (((i * 1624) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1740) + (di * 1740)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_10_let)[(((di * 174) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_33_var[181888]));
  for (int32_t ax1 = 0; ax1 < 28; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 58; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 1624) + (ax2 * 58)) + ax3);
        ((int32_t*)T_add_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_10_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_33_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 28; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 28; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 58; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 1624) + (i2_1 * 58)) + i3_1);
        ((int32_t*)compute_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_30_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_32_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_32_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_33_var[181888]));
  for (int32_t ax1_1 = 0; ax1_1 < 28; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 28; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 58; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 1624) + (ax2_1 * 58)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_7] = (((int32_t*)compute_let)[cse_var_7] + 129);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_33_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 28; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 28; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 58; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 1624) + (i2_2 * 58)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_8];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_8] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_33_var[181888]));
  for (int32_t ax1_2 = 0; ax1_2 < 28; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 28; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 58; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 1624) + (ax2_2 * 58)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_9] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_9]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_33_var[90944]));
  for (int32_t ax1_3 = 0; ax1_3 < 28; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 28; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 58; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 1624) + (ax2_3 * 58)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_10] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 28; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 28; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 58; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 1624) + (ax2_4 * 58)) + ax3_4);
        T_subtract[cse_var_11] = (((int16_t*)T_cast_let_1)[cse_var_11] - (int16_t)129);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_4(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_conv2d_add_constant_41_let = (&(global_const_workspace_38_var[4664432]));
  void* fused_nn_conv2d_add_constant_40_let = (&(global_const_workspace_38_var[4664672]));
  void* fused_nn_conv2d_add_constant_39_let = (&(global_const_workspace_38_var[4664912]));
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_38_var[4661792]));
  void* fused_constant_13_let = (&(global_const_workspace_38_var[4556864]));
  void* PaddedInput_let = (&(global_workspace_39_var[181888]));
  for (int32_t i1 = 0; i1 < 30; ++i1) {
    for (int32_t i2 = 0; i2 < 30; ++i2) {
      for (int32_t i3 = 0; i3 < 58; ++i3) {
        int32_t cse_var_1 = (i2 * 58);
        ((int16_t*)PaddedInput_let)[(((i1 * 1740) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 29)) && (1 <= i2)) && (i2 < 29)) ? p0[((((i1 * 1624) + cse_var_1) + i3) - 1682)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_39_var[0]));
  for (int32_t i = 0; i < 28; ++i) {
    for (int32_t j = 0; j < 28; ++j) {
      for (int32_t c = 0; c < 58; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 58)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 58);
            int32_t cse_var_3 = (dj * 58);
            int32_t cse_var_2 = (((i * 1624) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1740) + (di * 1740)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_13_let)[(((di * 174) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_39_var[181888]));
  for (int32_t ax1 = 0; ax1 < 28; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 28; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 58; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 1624) + (ax2 * 58)) + ax3);
        ((int32_t*)T_add_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_13_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_39_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 28; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 28; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 58; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 1624) + (i2_1 * 58)) + i3_1);
        ((int32_t*)compute_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_39_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_41_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_41_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_39_var[181888]));
  for (int32_t ax1_1 = 0; ax1_1 < 28; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 28; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 58; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 1624) + (ax2_1 * 58)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_7] = (((int32_t*)compute_let)[cse_var_7] + 129);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_39_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 28; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 28; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 58; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 1624) + (i2_2 * 58)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_8];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_8] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_39_var[181888]));
  for (int32_t ax1_2 = 0; ax1_2 < 28; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 28; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 58; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 1624) + (ax2_2 * 58)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_9] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_9]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_39_var[90944]));
  for (int32_t ax1_3 = 0; ax1_3 < 28; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 28; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 58; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 1624) + (ax2_3 * 58)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_10] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 28; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 28; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 58; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 1624) + (ax2_4 * 58)) + ax3_4);
        T_subtract[cse_var_11] = (((int16_t*)T_cast_let_1)[cse_var_11] - (int16_t)129);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_5(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_conv2d_add_constant_47_let = (&(global_const_workspace_44_var[4647136]));
  void* fused_nn_conv2d_add_constant_46_let = (&(global_const_workspace_44_var[4647600]));
  void* fused_nn_conv2d_add_constant_45_let = (&(global_const_workspace_44_var[4648064]));
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_44_var[4622544]));
  void* fused_constant_15_let = (&(global_const_workspace_44_var[4551360]));
  void* PaddedInput_let = (&(global_workspace_45_var[0]));
  for (int32_t i1 = 0; i1 < 29; ++i1) {
    for (int32_t i2 = 0; i2 < 29; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (i2 * 116);
        ((int16_t*)PaddedInput_let)[(((i1 * 3364) + cse_var_1) + i3)] = (((1 <= i1) && (1 <= i2)) ? p0[((((i1 * 3248) + cse_var_1) + i3) - 3364)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_45_var[195120]));
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 116; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 116)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 116);
            int32_t cse_var_2 = (((i * 1624) + (j * 116)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 6728) + (di * 3364)) + (j * 232)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_15_let)[(((di * 348) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_45_var[90944]));
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 1624) + (ax2 * 116)) + ax3);
        ((int32_t*)T_add_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] + ((int32_t*)fused_nn_conv2d_constant_15_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_45_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 14; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 14; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 116; ++i3_1) {
        int32_t cse_var_5 = (((i1_1 * 1624) + (i2_1 * 116)) + i3_1);
        ((int32_t*)compute_let)[cse_var_5] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_5]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_45_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_47_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_47_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_45_var[90944]));
  for (int32_t ax1_1 = 0; ax1_1 < 14; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 116; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 1624) + (ax2_1 * 116)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_6] = (((int32_t*)compute_let)[cse_var_6] + 129);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_45_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 14; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 14; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 116; ++i3_2) {
        int32_t cse_var_7 = (((i1_2 * 1624) + (i2_2 * 116)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_7];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_7] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_45_var[90944]));
  for (int32_t ax1_2 = 0; ax1_2 < 14; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 14; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 116; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 1624) + (ax2_2 * 116)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_8] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_8]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_45_var[0]));
  for (int32_t ax1_3 = 0; ax1_3 < 14; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 116; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 1624) + (ax2_3 * 116)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_9] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 14; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 14; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 116; ++ax3_4) {
        int32_t cse_var_10 = (((ax1_4 * 1624) + (ax2_4 * 116)) + ax3_4);
        T_subtract[cse_var_10] = (((int16_t*)T_cast_let_1)[cse_var_10] - (int16_t)129);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_6(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_nn_conv2d_add_constant_56_let = (&(global_const_workspace_50_var[4642960]));
  void* fused_nn_conv2d_add_constant_55_let = (&(global_const_workspace_50_var[4643424]));
  void* fused_nn_conv2d_add_constant_54_let = (&(global_const_workspace_50_var[4643888]));
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_50_var[4621152]));
  void* fused_constant_18_let = (&(global_const_workspace_50_var[4549264]));
  void* PaddedInput_let = (&(global_workspace_51_var[0]));
  for (int32_t i1 = 0; i1 < 29; ++i1) {
    for (int32_t i2 = 0; i2 < 29; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (i2 * 116);
        ((int16_t*)PaddedInput_let)[(((i1 * 3364) + cse_var_1) + i3)] = (((1 <= i1) && (1 <= i2)) ? p0[((((i1 * 3248) + cse_var_1) + i3) - 3364)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_51_var[195120]));
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 116; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 116)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 116);
            int32_t cse_var_2 = (((i * 1624) + (j * 116)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 6728) + (di * 3364)) + (j * 232)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_18_let)[(((di * 348) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_51_var[90944]));
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 1624) + (ax2 * 116)) + ax3);
        ((int32_t*)T_add_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] + ((int32_t*)fused_nn_conv2d_constant_18_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_51_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 14; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 14; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 116; ++i3_1) {
        int32_t cse_var_5 = (((i1_1 * 1624) + (i2_1 * 116)) + i3_1);
        ((int32_t*)compute_let)[cse_var_5] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_5]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_54_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_56_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_56_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_51_var[90944]));
  for (int32_t ax1_1 = 0; ax1_1 < 14; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 116; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 1624) + (ax2_1 * 116)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_6] = (((int32_t*)compute_let)[cse_var_6] + 111);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_51_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 14; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 14; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 116; ++i3_2) {
        int32_t cse_var_7 = (((i1_2 * 1624) + (i2_2 * 116)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_7];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_7] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_51_var[90944]));
  for (int32_t ax1_2 = 0; ax1_2 < 14; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 14; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 116; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 1624) + (ax2_2 * 116)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_8] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_8]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_51_var[0]));
  for (int32_t ax1_3 = 0; ax1_3 < 14; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 116; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 1624) + (ax2_3 * 116)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_9] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 14; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 14; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 116; ++ax3_4) {
        int32_t cse_var_10 = (((ax1_4 * 1624) + (ax2_4 * 116)) + ax3_4);
        T_subtract[cse_var_10] = (((int16_t*)T_cast_let_1)[cse_var_10] - (int16_t)111);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_7(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* fused_nn_conv2d_add_constant_65_let = (&(global_const_workspace_60_var[4638784]));
  void* fused_nn_conv2d_add_constant_64_let = (&(global_const_workspace_60_var[4639248]));
  void* fused_nn_conv2d_add_constant_63_let = (&(global_const_workspace_60_var[4639712]));
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_60_var[4619760]));
  void* fused_constant_21_let = (&(global_const_workspace_60_var[4547168]));
  void* PaddedInput_let = (&(global_workspace_61_var[90944]));
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (i2 * 116);
        ((int16_t*)PaddedInput_let)[(((i1 * 1856) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 15)) && (1 <= i2)) && (i2 < 15)) ? p0[((((i1 * 1624) + cse_var_1) + i3) - 1740)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_61_var[0]));
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 116; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 116)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 116);
            int32_t cse_var_3 = (dj * 116);
            int32_t cse_var_2 = (((i * 1624) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1856) + (di * 1856)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_21_let)[(((di * 348) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_61_var[90944]));
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 1624) + (ax2 * 116)) + ax3);
        ((int32_t*)T_add_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_21_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_61_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 14; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 14; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 116; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 1624) + (i2_1 * 116)) + i3_1);
        ((int32_t*)compute_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_63_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_65_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_65_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_61_var[90944]));
  for (int32_t ax1_1 = 0; ax1_1 < 14; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 116; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 1624) + (ax2_1 * 116)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_7] = (((int32_t*)compute_let)[cse_var_7] + 130);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_61_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 14; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 14; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 116; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 1624) + (i2_2 * 116)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_8];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_8] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_61_var[90944]));
  for (int32_t ax1_2 = 0; ax1_2 < 14; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 14; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 116; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 1624) + (ax2_2 * 116)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_9] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_9]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_61_var[45472]));
  for (int32_t ax1_3 = 0; ax1_3 < 14; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 116; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 1624) + (ax2_3 * 116)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_10] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 14; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 14; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 116; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 1624) + (ax2_4 * 116)) + ax3_4);
        T_subtract[cse_var_11] = (((int16_t*)T_cast_let_1)[cse_var_11] - (int16_t)130);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_8(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* fused_nn_conv2d_add_constant_74_let = (&(global_const_workspace_68_var[4634608]));
  void* fused_nn_conv2d_add_constant_73_let = (&(global_const_workspace_68_var[4635072]));
  void* fused_nn_conv2d_add_constant_72_let = (&(global_const_workspace_68_var[4635536]));
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_68_var[4618368]));
  void* fused_constant_24_let = (&(global_const_workspace_68_var[4545072]));
  void* PaddedInput_let = (&(global_workspace_69_var[90944]));
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (i2 * 116);
        ((int16_t*)PaddedInput_let)[(((i1 * 1856) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 15)) && (1 <= i2)) && (i2 < 15)) ? p0[((((i1 * 1624) + cse_var_1) + i3) - 1740)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_69_var[0]));
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 116; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 116)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 116);
            int32_t cse_var_3 = (dj * 116);
            int32_t cse_var_2 = (((i * 1624) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1856) + (di * 1856)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_24_let)[(((di * 348) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_69_var[90944]));
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 1624) + (ax2 * 116)) + ax3);
        ((int32_t*)T_add_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_24_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_69_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 14; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 14; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 116; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 1624) + (i2_1 * 116)) + i3_1);
        ((int32_t*)compute_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_72_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_74_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_74_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_69_var[90944]));
  for (int32_t ax1_1 = 0; ax1_1 < 14; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 116; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 1624) + (ax2_1 * 116)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_7] = (((int32_t*)compute_let)[cse_var_7] + 138);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_69_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 14; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 14; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 116; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 1624) + (i2_2 * 116)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_8];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_8] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_69_var[90944]));
  for (int32_t ax1_2 = 0; ax1_2 < 14; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 14; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 116; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 1624) + (ax2_2 * 116)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_9] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_9]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_69_var[45472]));
  for (int32_t ax1_3 = 0; ax1_3 < 14; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 116; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 1624) + (ax2_3 * 116)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_10] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 14; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 14; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 116; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 1624) + (ax2_4 * 116)) + ax3_4);
        T_subtract[cse_var_11] = (((int16_t*)T_cast_let_1)[cse_var_11] - (int16_t)138);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_9(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* fused_nn_conv2d_add_constant_83_let = (&(global_const_workspace_76_var[4630432]));
  void* fused_nn_conv2d_add_constant_82_let = (&(global_const_workspace_76_var[4630896]));
  void* fused_nn_conv2d_add_constant_81_let = (&(global_const_workspace_76_var[4631360]));
  void* fused_nn_conv2d_constant_27_let = (&(global_const_workspace_76_var[4616976]));
  void* fused_constant_27_let = (&(global_const_workspace_76_var[4542976]));
  void* PaddedInput_let = (&(global_workspace_77_var[90944]));
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (i2 * 116);
        ((int16_t*)PaddedInput_let)[(((i1 * 1856) + cse_var_1) + i3)] = (((((1 <= i1) && (i1 < 15)) && (1 <= i2)) && (i2 < 15)) ? p0[((((i1 * 1624) + cse_var_1) + i3) - 1740)] : (int16_t)0);
      }
    }
  }
  void* DepthwiseConv2d_let = (&(global_workspace_77_var[0]));
  for (int32_t i = 0; i < 14; ++i) {
    for (int32_t j = 0; j < 14; ++j) {
      for (int32_t c = 0; c < 116; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 1624) + (j * 116)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 116);
            int32_t cse_var_3 = (dj * 116);
            int32_t cse_var_2 = (((i * 1624) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1856) + (di * 1856)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_27_let)[(((di * 348) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  void* T_add_let = (&(global_workspace_77_var[90944]));
  for (int32_t ax1 = 0; ax1 < 14; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 1624) + (ax2 * 116)) + ax3);
        ((int32_t*)T_add_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_27_let)[ax3]);
      }
    }
  }
  void* compute_let = (&(global_workspace_77_var[0]));
  for (int32_t i1_1 = 0; i1_1 < 14; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 14; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 116; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 1624) + (i2_1 * 116)) + i3_1);
        ((int32_t*)compute_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)T_add_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_81_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_83_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_83_let)[i3_1] + 31))));
      }
    }
  }
  void* T_add_let_1 = (&(global_workspace_77_var[90944]));
  for (int32_t ax1_1 = 0; ax1_1 < 14; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 14; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 116; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 1624) + (ax2_1 * 116)) + ax3_1);
        ((int32_t*)T_add_let_1)[cse_var_7] = (((int32_t*)compute_let)[cse_var_7] + 145);
      }
    }
  }
  void* compute_let_1 = (&(global_workspace_77_var[0]));
  for (int32_t i1_2 = 0; i1_2 < 14; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 14; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 116; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 1624) + (i2_2 * 116)) + i3_2);
        int32_t v_ = ((int32_t*)T_add_let_1)[cse_var_8];
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        ((int32_t*)compute_let_1)[cse_var_8] = ((v__1) > (0) ? (v__1) : (0));
      }
    }
  }
  void* T_cast_let = (&(global_workspace_77_var[90944]));
  for (int32_t ax1_2 = 0; ax1_2 < 14; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 14; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 116; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 1624) + (ax2_2 * 116)) + ax3_2);
        ((uint8_t*)T_cast_let)[cse_var_9] = ((uint8_t)((int32_t*)compute_let_1)[cse_var_9]);
      }
    }
  }
  void* T_cast_let_1 = (&(global_workspace_77_var[45472]));
  for (int32_t ax1_3 = 0; ax1_3 < 14; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 14; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 116; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 1624) + (ax2_3 * 116)) + ax3_3);
        ((int16_t*)T_cast_let_1)[cse_var_10] = ((int16_t)((uint8_t*)T_cast_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 14; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 14; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 116; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 1624) + (ax2_4 * 116)) + ax3_4);
        T_subtract[cse_var_11] = (((int16_t*)T_cast_let_1)[cse_var_11] - (int16_t)145);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast(int16_t* p0, uint8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_add_constant_2_let = (&(global_const_workspace_4_var[4672592]));
  void* fused_nn_conv2d_add_constant_1_let = (&(global_const_workspace_4_var[4672688]));
  void* fused_nn_conv2d_add_constant_let = (&(global_const_workspace_4_var[4672784]));
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_4_var[4672208]));
  void* fused_constant_let = (&(global_const_workspace_4_var[4553456]));
  void* pad_temp_let = (&(global_workspace_5_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 225; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 225; ++i2) {
      for (int32_t i3 = 0; i3 < 3; ++i3) {
        int32_t cse_var_1 = (i2 * 3);
        ((int16_t*)pad_temp_let)[(((i0_i1_fused * 675) + cse_var_1) + i3)] = (((1 <= i0_i1_fused) && (1 <= i2)) ? p0[((((i0_i1_fused * 672) + cse_var_1) + i3) - 675)] : (int16_t)0);
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12544; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_5_var[604816]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 3; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused / 112) * 1350) + (ry * 675)) + ((ax0_ax1_fused_ax2_fused % 112) * 6)) + (rx * 3)) + rc)]) * ((int32_t)((int16_t*)fused_constant_let)[((((ry * 216) + (rx * 72)) + (rc * 24)) + ax3)])));
          }
        }
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_2_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 24) + ax3)] = ((uint8_t)((v__1) > (0) ? (v__1) : (0)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_conv2d_add_constant_11_let = (&(global_const_workspace_12_var[4671632]));
  void* fused_nn_conv2d_add_constant_10_let = (&(global_const_workspace_12_var[4671872]));
  void* fused_nn_conv2d_add_constant_9_let = (&(global_const_workspace_12_var[4662752]));
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_12_var[4661072]));
  void* fused_constant_3_let = (&(global_const_workspace_12_var[4529024]));
  void* pad_temp_let = (&(global_workspace_13_var[545664]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 56; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 56; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1344) + (i2 * 24)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 3136; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 58; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_13_var[696192]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int16_t*)fused_constant_3_let)[((rc * 58) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_11_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 58) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_1(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_conv2d_add_constant_20_let = (&(global_const_workspace_22_var[4669472]));
  void* fused_nn_conv2d_add_constant_19_let = (&(global_const_workspace_22_var[4669712]));
  void* fused_nn_conv2d_add_constant_18_let = (&(global_const_workspace_22_var[4669952]));
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_22_var[4660352]));
  void* fused_constant_6_let = (&(global_const_workspace_22_var[4454080]));
  void* pad_temp_let = (&(global_workspace_23_var[90944]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 58; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 58)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 58; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_23_var[181888]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 58; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 58) + rc)]) * ((int32_t)((int16_t*)fused_constant_6_let)[((rc * 58) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_6_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_18_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_20_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_20_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 58) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_10(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  void* fused_nn_conv2d_add_constant_107_let = (&(global_const_workspace_98_var[4655488]));
  void* fused_nn_conv2d_add_constant_106_let = (&(global_const_workspace_98_var[4655952]));
  void* fused_nn_conv2d_add_constant_105_let = (&(global_const_workspace_98_var[4656416]));
  void* fused_nn_conv2d_constant_35_let = (&(global_const_workspace_98_var[4613264]));
  void* fused_constant_35_let = (&(global_const_workspace_98_var[4047840]));
  void* pad_temp_let = (&(global_workspace_99_var[45472]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_99_var[90944]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_35_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_35_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_105_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_107_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_107_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_11(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  void* fused_nn_conv2d_add_constant_116_let = (&(global_const_workspace_106_var[4651312]));
  void* fused_nn_conv2d_add_constant_115_let = (&(global_const_workspace_106_var[4651776]));
  void* fused_nn_conv2d_add_constant_114_let = (&(global_const_workspace_106_var[4652240]));
  void* fused_nn_conv2d_constant_38_let = (&(global_const_workspace_106_var[4611872]));
  void* fused_constant_38_let = (&(global_const_workspace_106_var[3994016]));
  void* pad_temp_let = (&(global_workspace_107_var[45472]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_107_var[90944]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_38_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_38_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_114_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_116_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_116_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_12(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  void* fused_nn_conv2d_add_constant_131_let = (&(global_const_workspace_118_var[4602592]));
  void* fused_nn_conv2d_add_constant_130_let = (&(global_const_workspace_118_var[4603520]));
  void* fused_nn_conv2d_add_constant_129_let = (&(global_const_workspace_118_var[4604448]));
  void* fused_nn_conv2d_constant_43_let = (&(global_const_workspace_118_var[4569184]));
  void* fused_constant_43_let = (&(global_const_workspace_118_var[3751808]));
  void* pad_temp_let = (&(global_workspace_119_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 3248) + (i2 * 232)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_119_var[90944]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 232; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 232) + rc)]) * ((int32_t)((int16_t*)fused_constant_43_let)[((rc * 232) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_43_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_129_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_131_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_131_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 232) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_13(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  void* fused_nn_conv2d_add_constant_140_let = (&(global_const_workspace_128_var[4594240]));
  void* fused_nn_conv2d_add_constant_139_let = (&(global_const_workspace_128_var[4595168]));
  void* fused_nn_conv2d_add_constant_138_let = (&(global_const_workspace_128_var[4596096]));
  void* fused_nn_conv2d_constant_46_let = (&(global_const_workspace_128_var[4566400]));
  void* fused_constant_46_let = (&(global_const_workspace_128_var[3536512]));
  void* pad_temp_let = (&(global_workspace_129_var[22736]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 232)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_129_var[45472]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 232; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 232) + rc)]) * ((int32_t)((int16_t*)fused_constant_46_let)[((rc * 232) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_46_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_138_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_140_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_140_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 232) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_14(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  void* fused_nn_conv2d_add_constant_149_let = (&(global_const_workspace_136_var[4585888]));
  void* fused_nn_conv2d_add_constant_148_let = (&(global_const_workspace_136_var[4586816]));
  void* fused_nn_conv2d_add_constant_147_let = (&(global_const_workspace_136_var[4587744]));
  void* fused_nn_conv2d_constant_49_let = (&(global_const_workspace_136_var[4563616]));
  void* fused_constant_49_let = (&(global_const_workspace_136_var[3321216]));
  void* pad_temp_let = (&(global_workspace_137_var[22736]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 232)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_137_var[45472]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 232; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 232) + rc)]) * ((int32_t)((int16_t*)fused_constant_49_let)[((rc * 232) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_49_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_147_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_149_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_149_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 232) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_15(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
  void* fused_nn_conv2d_add_constant_158_let = (&(global_const_workspace_144_var[4577536]));
  void* fused_nn_conv2d_add_constant_157_let = (&(global_const_workspace_144_var[4578464]));
  void* fused_nn_conv2d_add_constant_156_let = (&(global_const_workspace_144_var[4579392]));
  void* fused_nn_conv2d_constant_52_let = (&(global_const_workspace_144_var[4560832]));
  void* fused_constant_52_let = (&(global_const_workspace_144_var[3105920]));
  void* pad_temp_let = (&(global_workspace_145_var[22736]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 232)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_145_var[45472]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 232; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 232) + rc)]) * ((int32_t)((int16_t*)fused_constant_52_let)[((rc * 232) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_52_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_156_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_158_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_158_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 232) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_2(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_conv2d_add_constant_29_let = (&(global_const_workspace_30_var[4667312]));
  void* fused_nn_conv2d_add_constant_28_let = (&(global_const_workspace_30_var[4667552]));
  void* fused_nn_conv2d_add_constant_27_let = (&(global_const_workspace_30_var[4667792]));
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_30_var[4659632]));
  void* fused_constant_9_let = (&(global_const_workspace_30_var[4440608]));
  void* pad_temp_let = (&(global_workspace_31_var[90944]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 58; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 58)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 58; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_31_var[181888]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 58; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 58) + rc)]) * ((int32_t)((int16_t*)fused_constant_9_let)[((rc * 58) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_9_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_27_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_29_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_29_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 58) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_3(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_conv2d_add_constant_38_let = (&(global_const_workspace_36_var[4665152]));
  void* fused_nn_conv2d_add_constant_37_let = (&(global_const_workspace_36_var[4665392]));
  void* fused_nn_conv2d_add_constant_36_let = (&(global_const_workspace_36_var[4665632]));
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_36_var[4662032]));
  void* fused_constant_12_let = (&(global_const_workspace_36_var[4474288]));
  void* pad_temp_let = (&(global_workspace_37_var[90944]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 58; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 58)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 58; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_37_var[181888]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 58; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 58) + rc)]) * ((int32_t)((int16_t*)fused_constant_12_let)[((rc * 58) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_12_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_36_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_38_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_38_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 58) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_4(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_conv2d_add_constant_53_let = (&(global_const_workspace_48_var[4644352]));
  void* fused_nn_conv2d_add_constant_52_let = (&(global_const_workspace_48_var[4644816]));
  void* fused_nn_conv2d_add_constant_51_let = (&(global_const_workspace_48_var[4645280]));
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_48_var[4621616]));
  void* fused_constant_17_let = (&(global_const_workspace_48_var[4370784]));
  void* pad_temp_let = (&(global_workspace_49_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 3248) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_49_var[181888]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_17_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_17_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_51_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_53_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_53_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_5(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* fused_nn_conv2d_add_constant_62_let = (&(global_const_workspace_58_var[4640176]));
  void* fused_nn_conv2d_add_constant_61_let = (&(global_const_workspace_58_var[4640640]));
  void* fused_nn_conv2d_add_constant_60_let = (&(global_const_workspace_58_var[4641104]));
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_58_var[4620224]));
  void* fused_constant_20_let = (&(global_const_workspace_58_var[4316960]));
  void* pad_temp_let = (&(global_workspace_59_var[45472]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_59_var[90944]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_20_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_20_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_60_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_62_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_62_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_6(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_nn_conv2d_add_constant_71_let = (&(global_const_workspace_66_var[4636000]));
  void* fused_nn_conv2d_add_constant_70_let = (&(global_const_workspace_66_var[4636464]));
  void* fused_nn_conv2d_add_constant_69_let = (&(global_const_workspace_66_var[4636928]));
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_66_var[4618832]));
  void* fused_constant_23_let = (&(global_const_workspace_66_var[4263136]));
  void* pad_temp_let = (&(global_workspace_67_var[45472]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_67_var[90944]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_23_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_23_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_69_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_71_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_71_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_7(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  void* fused_nn_conv2d_add_constant_80_let = (&(global_const_workspace_74_var[4631824]));
  void* fused_nn_conv2d_add_constant_79_let = (&(global_const_workspace_74_var[4632288]));
  void* fused_nn_conv2d_add_constant_78_let = (&(global_const_workspace_74_var[4632752]));
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_74_var[4617440]));
  void* fused_constant_26_let = (&(global_const_workspace_74_var[4209312]));
  void* pad_temp_let = (&(global_workspace_75_var[45472]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_75_var[90944]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_26_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_26_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_78_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_80_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_80_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_8(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  void* fused_nn_conv2d_add_constant_89_let = (&(global_const_workspace_82_var[4627648]));
  void* fused_nn_conv2d_add_constant_88_let = (&(global_const_workspace_82_var[4628112]));
  void* fused_nn_conv2d_add_constant_87_let = (&(global_const_workspace_82_var[4628576]));
  void* fused_nn_conv2d_constant_29_let = (&(global_const_workspace_82_var[4616048]));
  void* fused_constant_29_let = (&(global_const_workspace_82_var[4155488]));
  void* pad_temp_let = (&(global_workspace_83_var[45472]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_83_var[90944]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_29_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_29_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_87_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_89_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_89_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_9(int16_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  void* fused_nn_conv2d_add_constant_98_let = (&(global_const_workspace_90_var[4623472]));
  void* fused_nn_conv2d_add_constant_97_let = (&(global_const_workspace_90_var[4623936]));
  void* fused_nn_conv2d_add_constant_96_let = (&(global_const_workspace_90_var[4624400]));
  void* fused_nn_conv2d_constant_32_let = (&(global_const_workspace_90_var[4614656]));
  void* fused_constant_32_let = (&(global_const_workspace_90_var[4101664]));
  void* pad_temp_let = (&(global_workspace_91_var[45472]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_91_var[90944]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_32_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_32_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_96_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_98_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_98_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_cast[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = ((int16_t)((uint8_t)((v__1) > (0) ? (v__1) : (0))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_conv2d_add_constant_8_let = (&(global_const_workspace_10_var[4662992]));
  void* fused_nn_conv2d_add_constant_7_let = (&(global_const_workspace_10_var[4663232]));
  void* fused_nn_conv2d_add_constant_6_let = (&(global_const_workspace_10_var[4663472]));
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_10_var[4661312]));
  void* fused_constant_2_let = (&(global_const_workspace_10_var[4531808]));
  void* pad_temp_let = (&(global_workspace_11_var[332416]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 672) + (i2 * 24)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 58; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_11_var[370048]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int16_t*)fused_constant_2_let)[((rc * 58) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_8_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 58) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 3.221148e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_1(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_conv2d_add_constant_17_let = (&(global_const_workspace_16_var[4670192]));
  void* fused_nn_conv2d_add_constant_16_let = (&(global_const_workspace_16_var[4670432]));
  void* fused_nn_conv2d_add_constant_15_let = (&(global_const_workspace_16_var[4670672]));
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_16_var[4660592]));
  void* fused_constant_5_let = (&(global_const_workspace_16_var[4460816]));
  void* pad_temp_let = (&(global_workspace_17_var[181888]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 58; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 58)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 58; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_17_var[272832]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 58; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 58) + rc)]) * ((int32_t)((int16_t*)fused_constant_5_let)[((rc * 58) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_5_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_15_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_17_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_17_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 58) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 2.264015e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_10(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* fused_nn_conv2d_add_constant_95_let = (&(global_const_workspace_86_var[4624864]));
  void* fused_nn_conv2d_add_constant_94_let = (&(global_const_workspace_86_var[4625328]));
  void* fused_nn_conv2d_add_constant_93_let = (&(global_const_workspace_86_var[4625792]));
  void* fused_nn_conv2d_constant_31_let = (&(global_const_workspace_86_var[4615120]));
  void* fused_constant_31_let = (&(global_const_workspace_86_var[4128576]));
  void* pad_temp_let = (&(global_workspace_87_var[90944]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_87_var[136416]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_31_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_31_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_93_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_95_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_95_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.489730e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_11(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  void* fused_nn_conv2d_add_constant_104_let = (&(global_const_workspace_94_var[4656880]));
  void* fused_nn_conv2d_add_constant_103_let = (&(global_const_workspace_94_var[4657344]));
  void* fused_nn_conv2d_add_constant_102_let = (&(global_const_workspace_94_var[4657808]));
  void* fused_nn_conv2d_constant_34_let = (&(global_const_workspace_94_var[4613728]));
  void* fused_constant_34_let = (&(global_const_workspace_94_var[4074752]));
  void* pad_temp_let = (&(global_workspace_95_var[90944]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_95_var[136416]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_34_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_34_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_102_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_104_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_104_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.167909e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_12(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  void* fused_nn_conv2d_add_constant_113_let = (&(global_const_workspace_102_var[4652704]));
  void* fused_nn_conv2d_add_constant_112_let = (&(global_const_workspace_102_var[4653168]));
  void* fused_nn_conv2d_add_constant_111_let = (&(global_const_workspace_102_var[4653632]));
  void* fused_nn_conv2d_constant_37_let = (&(global_const_workspace_102_var[4612336]));
  void* fused_constant_37_let = (&(global_const_workspace_102_var[4020928]));
  void* pad_temp_let = (&(global_workspace_103_var[90944]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_103_var[136416]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_37_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_37_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_111_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_113_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_113_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.397763e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_13(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  void* fused_nn_conv2d_add_constant_122_let = (&(global_const_workspace_110_var[4648528]));
  void* fused_nn_conv2d_add_constant_121_let = (&(global_const_workspace_110_var[4648992]));
  void* fused_nn_conv2d_add_constant_120_let = (&(global_const_workspace_110_var[4649456]));
  void* fused_nn_conv2d_constant_40_let = (&(global_const_workspace_110_var[4610944]));
  void* fused_constant_40_let = (&(global_const_workspace_110_var[3967104]));
  void* pad_temp_let = (&(global_workspace_111_var[90944]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_111_var[136416]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_40_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_40_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_120_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_122_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_122_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.623902e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_14(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  void* fused_nn_conv2d_add_constant_128_let = (&(global_const_workspace_116_var[4605376]));
  void* fused_nn_conv2d_add_constant_127_let = (&(global_const_workspace_116_var[4606304]));
  void* fused_nn_conv2d_add_constant_126_let = (&(global_const_workspace_116_var[4607232]));
  void* fused_nn_conv2d_constant_42_let = (&(global_const_workspace_116_var[4570112]));
  void* fused_constant_42_let = (&(global_const_workspace_116_var[3859456]));
  void* pad_temp_let = (&(global_workspace_117_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 232)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_117_var[22736]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 232; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 232) + rc)]) * ((int32_t)((int16_t*)fused_constant_42_let)[((rc * 232) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_42_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_126_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_128_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_128_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 232) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.085233e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_15(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  void* fused_nn_conv2d_add_constant_137_let = (&(global_const_workspace_122_var[4597024]));
  void* fused_nn_conv2d_add_constant_136_let = (&(global_const_workspace_122_var[4597952]));
  void* fused_nn_conv2d_add_constant_135_let = (&(global_const_workspace_122_var[4598880]));
  void* fused_nn_conv2d_constant_45_let = (&(global_const_workspace_122_var[4567328]));
  void* fused_constant_45_let = (&(global_const_workspace_122_var[3644160]));
  void* pad_temp_let = (&(global_workspace_123_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 232)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_123_var[22736]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 232; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 232) + rc)]) * ((int32_t)((int16_t*)fused_constant_45_let)[((rc * 232) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_45_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_135_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_137_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_137_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 232) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.972029e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_16(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  void* fused_nn_conv2d_add_constant_146_let = (&(global_const_workspace_132_var[4588672]));
  void* fused_nn_conv2d_add_constant_145_let = (&(global_const_workspace_132_var[4589600]));
  void* fused_nn_conv2d_add_constant_144_let = (&(global_const_workspace_132_var[4590528]));
  void* fused_nn_conv2d_constant_48_let = (&(global_const_workspace_132_var[4564544]));
  void* fused_constant_48_let = (&(global_const_workspace_132_var[3428864]));
  void* pad_temp_let = (&(global_workspace_133_var[45472]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 232)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_133_var[68208]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 232; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 232) + rc)]) * ((int32_t)((int16_t*)fused_constant_48_let)[((rc * 232) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_48_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_144_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_146_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_146_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 232) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.732467e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_17(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  void* fused_nn_conv2d_add_constant_155_let = (&(global_const_workspace_140_var[4580320]));
  void* fused_nn_conv2d_add_constant_154_let = (&(global_const_workspace_140_var[4581248]));
  void* fused_nn_conv2d_add_constant_153_let = (&(global_const_workspace_140_var[4582176]));
  void* fused_nn_conv2d_constant_51_let = (&(global_const_workspace_140_var[4561760]));
  void* fused_constant_51_let = (&(global_const_workspace_140_var[3213568]));
  void* pad_temp_let = (&(global_workspace_141_var[45472]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 232)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_141_var[68208]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 232; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 232) + rc)]) * ((int32_t)((int16_t*)fused_constant_51_let)[((rc * 232) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_51_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_153_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_155_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_155_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 232) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.746249e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_18(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var) {
  void* fused_nn_conv2d_add_constant_164_let = (&(global_const_workspace_148_var[4571968]));
  void* fused_nn_conv2d_add_constant_163_let = (&(global_const_workspace_148_var[4572896]));
  void* fused_nn_conv2d_add_constant_162_let = (&(global_const_workspace_148_var[4573824]));
  void* fused_nn_conv2d_constant_54_let = (&(global_const_workspace_148_var[4558976]));
  void* fused_constant_54_let = (&(global_const_workspace_148_var[2998272]));
  void* pad_temp_let = (&(global_workspace_149_var[45472]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 232; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 232)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 232; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_149_var[68208]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 232; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 232) + rc)]) * ((int32_t)((int16_t*)fused_constant_54_let)[((rc * 232) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_54_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_162_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_164_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_164_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 232) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.924896e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_19(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var) {
  void* fused_nn_conv2d_add_constant_167_let = (&(global_const_workspace_152_var[4512736]));
  void* fused_nn_conv2d_add_constant_166_let = (&(global_const_workspace_152_var[4516832]));
  void* fused_nn_conv2d_add_constant_165_let = (&(global_const_workspace_152_var[4520928]));
  void* fused_nn_conv2d_constant_55_let = (&(global_const_workspace_152_var[4508640]));
  void* fused_constant_55_let = (&(global_const_workspace_152_var[2048000]));
  void* pad_temp_let = (&(global_workspace_153_var[200704]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 464; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 3248) + (i2 * 464)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
      void* conv2d_nhwc_let = (&(global_workspace_153_var[246176]));
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 464; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 464) + rc)]) * ((int32_t)((int16_t*)fused_constant_55_let)[(((rc * 1024) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_55_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_165_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_167_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_167_let)[cse_var_2] + 31)));
        int32_t v__1 = (v_) < (255) ? (v_) : (255);
        T_multiply[(((ax0_ax1_fused_ax2_fused * 1024) + cse_var_3) + ax3_inner)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.072755e-02f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_2(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_conv2d_add_constant_26_let = (&(global_const_workspace_26_var[4668032]));
  void* fused_nn_conv2d_add_constant_25_let = (&(global_const_workspace_26_var[4668272]));
  void* fused_nn_conv2d_add_constant_24_let = (&(global_const_workspace_26_var[4668512]));
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_26_var[4659872]));
  void* fused_constant_8_let = (&(global_const_workspace_26_var[4447344]));
  void* pad_temp_let = (&(global_workspace_27_var[181888]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 58; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 58)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 58; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_27_var[272832]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 58; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 58) + rc)]) * ((int32_t)((int16_t*)fused_constant_8_let)[((rc * 58) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_8_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_24_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_26_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_26_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 58) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.518807e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_3(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* fused_nn_conv2d_add_constant_35_let = (&(global_const_workspace_34_var[4665872]));
  void* fused_nn_conv2d_add_constant_34_let = (&(global_const_workspace_34_var[4666112]));
  void* fused_nn_conv2d_add_constant_33_let = (&(global_const_workspace_34_var[4666352]));
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_34_var[4662272]));
  void* fused_constant_11_let = (&(global_const_workspace_34_var[4481024]));
  void* pad_temp_let = (&(global_workspace_35_var[181888]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 58; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 58)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 58; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_35_var[272832]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 58; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 58) + rc)]) * ((int32_t)((int16_t*)fused_constant_11_let)[((rc * 58) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_11_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_33_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_35_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_35_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 58) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.910955e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_4(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_conv2d_add_constant_44_let = (&(global_const_workspace_40_var[4663712]));
  void* fused_nn_conv2d_add_constant_43_let = (&(global_const_workspace_40_var[4663952]));
  void* fused_nn_conv2d_add_constant_42_let = (&(global_const_workspace_40_var[4664192]));
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_40_var[4661552]));
  void* fused_constant_14_let = (&(global_const_workspace_40_var[4467552]));
  void* pad_temp_let = (&(global_workspace_41_var[181888]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 28; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 28; ++i2) {
      for (int32_t i3 = 0; i3 < 58; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 58)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 58; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_41_var[272832]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 58; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 58) + rc)]) * ((int32_t)((int16_t*)fused_constant_14_let)[((rc * 58) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_14_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_42_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_44_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_44_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 58) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 2.120461e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_5(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_conv2d_add_constant_50_let = (&(global_const_workspace_46_var[4645744]));
  void* fused_nn_conv2d_add_constant_49_let = (&(global_const_workspace_46_var[4646208]));
  void* fused_nn_conv2d_add_constant_48_let = (&(global_const_workspace_46_var[4646672]));
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_46_var[4622080]));
  void* fused_constant_16_let = (&(global_const_workspace_46_var[4397696]));
  void* pad_temp_let = (&(global_workspace_47_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_47_var[45472]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_16_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_16_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_48_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_50_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_50_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.004745e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_6(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_nn_conv2d_add_constant_59_let = (&(global_const_workspace_52_var[4641568]));
  void* fused_nn_conv2d_add_constant_58_let = (&(global_const_workspace_52_var[4642032]));
  void* fused_nn_conv2d_add_constant_57_let = (&(global_const_workspace_52_var[4642496]));
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_52_var[4620688]));
  void* fused_constant_19_let = (&(global_const_workspace_52_var[4343872]));
  void* pad_temp_let = (&(global_workspace_53_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_53_var[45472]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_19_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_19_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_57_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_59_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_59_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.498563e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_7(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* fused_nn_conv2d_add_constant_68_let = (&(global_const_workspace_62_var[4637392]));
  void* fused_nn_conv2d_add_constant_67_let = (&(global_const_workspace_62_var[4637856]));
  void* fused_nn_conv2d_add_constant_66_let = (&(global_const_workspace_62_var[4638320]));
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_62_var[4619296]));
  void* fused_constant_22_let = (&(global_const_workspace_62_var[4290048]));
  void* pad_temp_let = (&(global_workspace_63_var[90944]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_63_var[136416]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_22_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_22_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_66_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_68_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_68_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.272213e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_8(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_nn_conv2d_add_constant_77_let = (&(global_const_workspace_70_var[4633216]));
  void* fused_nn_conv2d_add_constant_76_let = (&(global_const_workspace_70_var[4633680]));
  void* fused_nn_conv2d_add_constant_75_let = (&(global_const_workspace_70_var[4634144]));
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_70_var[4617904]));
  void* fused_constant_25_let = (&(global_const_workspace_70_var[4236224]));
  void* pad_temp_let = (&(global_workspace_71_var[90944]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_71_var[136416]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_25_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_25_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_75_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_77_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_77_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 9.800953e-03f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_9(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_nn_conv2d_add_constant_86_let = (&(global_const_workspace_78_var[4629040]));
  void* fused_nn_conv2d_add_constant_85_let = (&(global_const_workspace_78_var[4629504]));
  void* fused_nn_conv2d_add_constant_84_let = (&(global_const_workspace_78_var[4629968]));
  void* fused_nn_conv2d_constant_28_let = (&(global_const_workspace_78_var[4616512]));
  void* fused_constant_28_let = (&(global_const_workspace_78_var[4182400]));
  void* pad_temp_let = (&(global_workspace_79_var[90944]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 14; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 116; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1624) + (i2 * 116)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 116; ++ax3) {
      void* conv2d_nhwc_let = (&(global_workspace_79_var[136416]));
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 116; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 116) + rc)]) * ((int32_t)((int16_t*)fused_constant_28_let)[((rc * 116) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_28_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_84_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_86_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_86_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (255) ? (v_) : (255);
      T_multiply[((ax0_ax1_fused_ax2_fused * 116) + ax3)] = (((float)((v__1) > (0) ? (v__1) : (0))) * 1.275286e-02f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_max_pool2d_cast(uint8_t* p0, int16_t* T_cast, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* pool_max_let = (&(global_workspace_7_var[0]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 56; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 56; ++ax2) {
      for (int32_t ax3_init = 0; ax3_init < 24; ++ax3_init) {
        ((uint8_t*)pool_max_let)[(((ax0_ax1_fused * 1344) + (ax2 * 24)) + ax3_init)] = (uint8_t)0;
      }
      for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 9; ++rv0_rv1_fused) {
        for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
          int32_t cse_var_3 = (rv0_rv1_fused % 3);
          int32_t cse_var_2 = (rv0_rv1_fused / 3);
          int32_t cse_var_1 = (((ax0_ax1_fused * 1344) + (ax2 * 24)) + ax3);
          uint8_t v_ = ((uint8_t*)pool_max_let)[cse_var_1];
          uint8_t v__1 = ((1 <= ((ax0_ax1_fused * 2) + cse_var_2)) && (1 <= ((ax2 * 2) + cse_var_3))) ? p0[((((((ax0_ax1_fused * 5376) + (cse_var_2 * 2688)) + (ax2 * 48)) + (cse_var_3 * 24)) + ax3) - 2712)] : (uint8_t)0;
          ((uint8_t*)pool_max_let)[cse_var_1] = ((v_) > (v__1) ? (v_) : (v__1));
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 56; ++ax0_ax1_fused_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 56; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 24; ++ax3_1) {
        int32_t cse_var_4 = (((ax0_ax1_fused_1 * 1344) + (ax2_1 * 24)) + ax3_1);
        T_cast[cse_var_4] = ((int16_t)((uint8_t*)pool_max_let)[cse_var_4]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* input_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_71_let = (&(global_workspace_1_var[0]));
  void* sid_66_let = (&(global_workspace_1_var[0]));
  void* sid_56_let = (&(global_workspace_1_var[0]));
  void* sid_68_let = (&(global_workspace_1_var[0]));
  void* sid_54_let = (&(global_workspace_1_var[0]));
  void* sid_53_let = (&(global_workspace_1_var[0]));
  void* sid_52_let = (&(global_workspace_1_var[181888]));
  void* sid_51_let = (&(global_workspace_1_var[272832]));
  void* sid_50_let = (&(global_workspace_1_var[0]));
  void* sid_55_let = (&(global_workspace_1_var[0]));
  void* sid_67_let = (&(global_workspace_1_var[0]));
  void* sid_47_let = (&(global_workspace_1_var[0]));
  void* sid_60_let = (&(global_workspace_1_var[0]));
  void* sid_99_let = (&(global_workspace_1_var[90944]));
  void* sid_65_let = (&(global_workspace_1_var[0]));
  void* sid_49_let = (&(global_workspace_1_var[0]));
  void* sid_43_let = (&(global_workspace_1_var[0]));
  void* sid_48_let = (&(global_workspace_1_var[0]));
  void* sid_42_let = (&(global_workspace_1_var[0]));
  void* sid_41_let = (&(global_workspace_1_var[0]));
  void* sid_40_let = (&(global_workspace_1_var[181888]));
  void* sid_39_let = (&(global_workspace_1_var[272832]));
  void* sid_38_let = (&(global_workspace_1_var[0]));
  void* sid_44_let = (&(global_workspace_1_var[0]));
  void* sid_37_let = (&(global_workspace_1_var[0]));
  void* sid_62_let = (&(global_workspace_1_var[0]));
  void* sid_64_let = (&(global_workspace_1_var[181888]));
  void* sid_63_let = (&(global_workspace_1_var[272832]));
  void* sid_34_let = (&(global_workspace_1_var[181888]));
  void* sid_33_let = (&(global_workspace_1_var[272832]));
  void* sid_46_let = (&(global_workspace_1_var[181888]));
  void* sid_45_let = (&(global_workspace_1_var[272832]));
  void* sid_7_let = (&(global_workspace_1_var[272832]));
  void* sid_10_let = (&(global_workspace_1_var[90944]));
  void* sid_9_let = (&(global_workspace_1_var[545664]));
  void* sid_72_let = (&(global_workspace_1_var[0]));
  void* sid_8_let = (&(global_workspace_1_var[545664]));
  void* sid_73_let = (&(global_workspace_1_var[0]));
  void* sid_59_let = (&(global_workspace_1_var[0]));
  void* sid_58_let = (&(global_workspace_1_var[181888]));
  void* sid_57_let = (&(global_workspace_1_var[272832]));
  void* sid_13_let = (&(global_workspace_1_var[0]));
  void* sid_36_let = (&(global_workspace_1_var[0]));
  void* sid_61_let = (&(global_workspace_1_var[0]));
  void* sid_35_let = (&(global_workspace_1_var[0]));
  void* sid_14_let = (&(global_workspace_1_var[0]));
  void* sid_12_let = (&(global_workspace_1_var[0]));
  void* sid_18_let = (&(global_workspace_1_var[0]));
  void* sid_2_let = (&(global_workspace_1_var[303760]));
  void* sid_29_let = (&(global_workspace_1_var[545664]));
  void* sid_16_let = (&(global_workspace_1_var[363776]));
  void* sid_15_let = (&(global_workspace_1_var[545664]));
  void* sid_6_let = (&(global_workspace_1_var[181888]));
  void* sid_3_let = (&(global_workspace_1_var[181888]));
  void* sid_70_let = (&(global_workspace_1_var[181888]));
  void* sid_69_let = (&(global_workspace_1_var[272832]));
  void* sid_11_let = (&(global_workspace_1_var[0]));
  void* sid_5_let = (&(global_workspace_1_var[0]));
  void* sid_102_let = (&(global_workspace_1_var[4096]));
  void* sid_17_let = (&(global_workspace_1_var[0]));
  void* sid_27_let = (&(global_workspace_1_var[363776]));
  void* sid_31_let = (&(global_workspace_1_var[45472]));
  void* sid_19_let = (&(global_workspace_1_var[0]));
  void* sid_20_let = (&(global_workspace_1_var[0]));
  void* sid_90_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[303760]));
  void* sid_28_let = (&(global_workspace_1_var[45472]));
  void* sid_32_let = (&(global_workspace_1_var[181888]));
  void* sid_23_let = (&(global_workspace_1_var[0]));
  void* sid_22_let = (&(global_workspace_1_var[363776]));
  void* sid_21_let = (&(global_workspace_1_var[545664]));
  void* sid_4_let = (&(global_workspace_1_var[0]));
  void* sid_25_let = (&(global_workspace_1_var[0]));
  void* sid_26_let = (&(global_workspace_1_var[0]));
  void* sid_30_let = (&(global_workspace_1_var[195120]));
  void* sid_75_let = (&(global_workspace_1_var[181888]));
  void* sid_24_let = (&(global_workspace_1_var[0]));
  void* sid_74_let = (&(global_workspace_1_var[0]));
  void* sid_76_let = (&(global_workspace_1_var[22736]));
  void* sid_77_let = (&(global_workspace_1_var[272832]));
  void* sid_78_let = (&(global_workspace_1_var[104400]));
  void* sid_79_let = (&(global_workspace_1_var[22736]));
  void* sid_80_let = (&(global_workspace_1_var[90944]));
  void* sid_82_let = (&(global_workspace_1_var[90944]));
  void* sid_81_let = (&(global_workspace_1_var[136416]));
  void* sid_83_let = (&(global_workspace_1_var[0]));
  void* sid_84_let = (&(global_workspace_1_var[0]));
  void* sid_85_let = (&(global_workspace_1_var[0]));
  void* sid_86_let = (&(global_workspace_1_var[0]));
  void* sid_88_let = (&(global_workspace_1_var[90944]));
  void* sid_87_let = (&(global_workspace_1_var[136416]));
  void* sid_89_let = (&(global_workspace_1_var[0]));
  void* sid_91_let = (&(global_workspace_1_var[0]));
  void* sid_92_let = (&(global_workspace_1_var[0]));
  void* sid_94_let = (&(global_workspace_1_var[90944]));
  void* sid_93_let = (&(global_workspace_1_var[136416]));
  void* sid_95_let = (&(global_workspace_1_var[0]));
  void* sid_96_let = (&(global_workspace_1_var[0]));
  void* sid_97_let = (&(global_workspace_1_var[0]));
  void* sid_98_let = (&(global_workspace_1_var[0]));
  void* sid_100_let = (&(global_workspace_1_var[0]));
  void* sid_101_let = (&(global_workspace_1_var[0]));
  if (tvmgen_default_fused_divide_round_add_clip_cast_layout_transform_cast_subtract(input_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_max_pool2d_cast(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast(sid_3_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_1(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_1(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_concatenate_layout_transform_reshape_transpose_reshape_divide_round_clip_c_9209744e31b51ea9_(sid_5_let, sid_8_let, sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_cast(sid_9_let, sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_1(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_2(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_2(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae_(sid_9_let, sid_10_let, sid_14_let, sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_cast(sid_15_let, sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_2(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_3(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_3(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae_(sid_15_let, sid_16_let, sid_20_let, sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_cast(sid_21_let, sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_3(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_4(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_4(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__10f1814a0ed56b76_(sid_21_let, sid_22_let, sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_5(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_5(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_4(sid_27_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_6(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_6(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_concatenate_layout_transform_reshape_transpose_reshape_divide_round_clip_c_9209744e31b51ea9__1(sid_29_let, sid_32_let, sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_cast_1(sid_33_let, sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_5(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_7(sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_7(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__1(sid_33_let, sid_34_let, sid_38_let, sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_cast_1(sid_39_let, sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_6(sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_8(sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_8(sid_43_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__2(sid_39_let, sid_40_let, sid_44_let, sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_cast_1(sid_45_let, sid_46_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_7(sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_9(sid_48_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_9(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__3(sid_45_let, sid_46_let, sid_50_let, sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_cast_1(sid_51_let, sid_52_let, sid_53_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_8(sid_53_let, sid_54_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_10(sid_54_let, sid_55_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_10(sid_55_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__4(sid_51_let, sid_52_let, sid_56_let, sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_cast_1(sid_57_let, sid_58_let, sid_59_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_9(sid_59_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_11(sid_60_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_11(sid_61_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__5(sid_57_let, sid_58_let, sid_62_let, sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_cast_1(sid_63_let, sid_64_let, sid_65_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_10(sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_12(sid_66_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_12(sid_67_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__6(sid_63_let, sid_64_let, sid_68_let, sid_69_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_cast_1(sid_69_let, sid_70_let, sid_71_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_11(sid_71_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_13(sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_13(sid_73_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__10f1814a0ed56b76__1(sid_69_let, sid_70_let, sid_74_let, sid_75_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_14(sid_75_let, sid_76_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_14(sid_76_let, sid_77_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_12(sid_75_let, sid_78_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_15(sid_78_let, sid_79_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_15(sid_79_let, sid_80_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_concatenate_layout_transform_reshape_transpose_reshape_divide_round_clip_c_9209744e31b51ea9__2(sid_77_let, sid_80_let, sid_81_let, sid_82_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_cast_2(sid_81_let, sid_82_let, sid_83_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_13(sid_83_let, sid_84_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_16(sid_84_let, sid_85_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_16(sid_85_let, sid_86_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__7(sid_81_let, sid_82_let, sid_86_let, sid_87_let, sid_88_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_cast_2(sid_87_let, sid_88_let, sid_89_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_14(sid_89_let, sid_90_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_17(sid_90_let, sid_91_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_17(sid_91_let, sid_92_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__4e9255e00c11efae__8(sid_87_let, sid_88_let, sid_92_let, sid_93_let, sid_94_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_cast_2(sid_93_let, sid_94_let, sid_95_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_cast_15(sid_95_let, sid_96_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_cast_subtract_18(sid_96_let, sid_97_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_18(sid_97_let, sid_98_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_cast_multiply_layout_transform_concatenate_reshape_transpose_reshape__10f1814a0ed56b76__2(sid_93_let, sid_94_let, sid_98_let, sid_99_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_clip_cast_multiply_19(sid_99_let, sid_100_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_100_let, sid_101_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_clip_cast_cast(sid_101_let, sid_102_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_zeros_greater_equal_where_add_right_sh_96b9864142cb9bbc_(sid_102_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

