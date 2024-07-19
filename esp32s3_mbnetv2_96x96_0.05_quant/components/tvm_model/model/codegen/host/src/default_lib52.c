#include <stdint.h>
#include <stdio.h>
#include <esp_kernel.h>

int32_t tvmgen_default_esp_main_50(int8_t* FunctionVar_0_0, int8_t* tvm_var_extract_const_100, int8_t* tvm_var_extract_const_101, int8_t* out_0) {
  int input_shape[] = {1,3,3,16};
  int kernel_shape[] = {1280,1,1,16};
  int output_shape[] = {1,3,3,1280};
  int padding[] = {0,0,0,0};
  int dilation[] = {1,1};
  int strides[] = {1,1};
  int kernel_exponent = -10;

  esp_dl_nn_conv2d_s8_wrapper(FunctionVar_0_0, tvm_var_extract_const_100, tvm_var_extract_const_101, input_shape, kernel_shape, output_shape, padding, dilation, strides, 0, kernel_exponent, 0, "", out_0);
  return 0;
}
