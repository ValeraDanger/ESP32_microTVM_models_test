#include <stdint.h>
#include <stdio.h>
#include <esp_kernel.h>

int32_t tvmgen_default_esp_main_9(int8_t* FunctionVar_41_0, int8_t* tvm_var_extract_const_18, int8_t* tvm_var_extract_const_19, int8_t* out_0) {
  int input_shape[] = {1,25,25,48};
  int kernel_shape[] = {3,3,48,1};
  int output_shape[] = {1,12,12,48};
  int padding[] = {0,0,0,0};
  int dilation[] = {1,1};
  int strides[] = {2,2};
  int kernel_exponent = -10;

  esp_dl_nn_depthwise_conv2d_s8_wrapper(FunctionVar_41_0, tvm_var_extract_const_18, tvm_var_extract_const_19, input_shape, kernel_shape, output_shape, padding, dilation, strides, 0, kernel_exponent, 0, "", out_0);
  return 0;
}
