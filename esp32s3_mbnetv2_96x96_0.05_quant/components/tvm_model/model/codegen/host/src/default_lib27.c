#include <stdint.h>
#include <stdio.h>
#include <esp_kernel.h>

int32_t tvmgen_default_esp_main_2(int8_t* FunctionVar_48_0, int8_t* tvm_var_extract_const_4, int8_t* tvm_var_extract_const_5, int8_t* out_0) {
  int input_shape[] = {1,48,48,8};
  int kernel_shape[] = {48,1,1,8};
  int output_shape[] = {1,48,48,48};
  int padding[] = {0,0,0,0};
  int dilation[] = {1,1};
  int strides[] = {1,1};
  int kernel_exponent = -8;

  esp_dl_nn_conv2d_s8_wrapper(FunctionVar_48_0, tvm_var_extract_const_4, tvm_var_extract_const_5, input_shape, kernel_shape, output_shape, padding, dilation, strides, 0, kernel_exponent, 0, "", out_0);
  return 0;
}