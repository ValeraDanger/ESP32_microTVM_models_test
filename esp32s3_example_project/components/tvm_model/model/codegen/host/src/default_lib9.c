#include <stdint.h>
#include <stdio.h>
#include <esp_kernel.h>

int32_t tvmgen_default_esp_main_4(int8_t* FunctionVar_4_0, int8_t* tvm_var_extract_const_8, int8_t* tvm_var_extract_const_9, int8_t* out_0) {
  int input_shape[] = {1,32,32,16};
  int kernel_shape[] = {32,3,3,16};
  int output_shape[] = {1,16,16,32};
  int padding[] = {0,1,0,1};
  int dilation[] = {1,1};
  int strides[] = {2,2};
  int kernel_exponent = -8;

  esp_dl_nn_conv2d_s8_wrapper(FunctionVar_4_0, tvm_var_extract_const_8, tvm_var_extract_const_9, input_shape, kernel_shape, output_shape, padding, dilation, strides, -3, kernel_exponent, -3, "relu", out_0);
  return 0;
}
