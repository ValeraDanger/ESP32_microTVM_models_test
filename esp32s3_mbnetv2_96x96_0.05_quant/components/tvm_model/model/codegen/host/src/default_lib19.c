#include <stdint.h>
#include <stdio.h>
#include <esp_kernel.h>

int32_t tvmgen_default_esp_main_18(int8_t* FunctionVar_32_0, int8_t* tvm_var_extract_const_36, int8_t* tvm_var_extract_const_37, int8_t* out_0) {
  int input_shape[] = {1,13,13,48};
  int kernel_shape[] = {3,3,48,1};
  int output_shape[] = {1,6,6,48};
  int padding[] = {0,0,0,0};
  int dilation[] = {1,1};
  int strides[] = {2,2};
  int kernel_exponent = -10;

  esp_dl_nn_depthwise_conv2d_s8_wrapper(FunctionVar_32_0, tvm_var_extract_const_36, tvm_var_extract_const_37, input_shape, kernel_shape, output_shape, padding, dilation, strides, 0, kernel_exponent, 0, "", out_0);
  return 0;
}
