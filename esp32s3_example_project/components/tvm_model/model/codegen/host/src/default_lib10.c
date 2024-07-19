#include <stdint.h>
#include <stdio.h>
#include <esp_kernel.h>

int32_t tvmgen_default_esp_main_0(int8_t* FunctionVar_8_0, int8_t* tvm_var_extract_const_0, int8_t* tvm_var_extract_const_1, int8_t* out_0) {
  int input_shape[] = {1,32,32,3};
  int kernel_shape[] = {16,3,3,3};
  int output_shape[] = {1,32,32,16};
  int padding[] = {1,1,1,1};
  int dilation[] = {1,1};
  int strides[] = {1,1};
  int kernel_exponent = -12;

  esp_dl_nn_conv2d_s8_wrapper(FunctionVar_8_0, tvm_var_extract_const_0, tvm_var_extract_const_1, input_shape, kernel_shape, output_shape, padding, dilation, strides, 2, kernel_exponent, -3, "relu", out_0);
  return 0;
}
