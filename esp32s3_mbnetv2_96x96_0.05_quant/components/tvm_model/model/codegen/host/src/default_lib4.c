#include <stdint.h>
#include <stdio.h>
#include <esp_kernel.h>

int32_t tvmgen_default_esp_main_39(int8_t* FunctionVar_11_0, int8_t* tvm_var_extract_const_78, int8_t* tvm_var_extract_const_79, int8_t* out_0) {
  int input_shape[] = {1,7,7,48};
  int kernel_shape[] = {3,3,48,1};
  int output_shape[] = {1,3,3,48};
  int padding[] = {0,0,0,0};
  int dilation[] = {1,1};
  int strides[] = {2,2};
  int kernel_exponent = -10;

  esp_dl_nn_depthwise_conv2d_s8_wrapper(FunctionVar_11_0, tvm_var_extract_const_78, tvm_var_extract_const_79, input_shape, kernel_shape, output_shape, padding, dilation, strides, 0, kernel_exponent, 0, "", out_0);
  return 0;
}