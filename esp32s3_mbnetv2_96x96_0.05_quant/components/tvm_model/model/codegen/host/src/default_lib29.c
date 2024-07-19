#include <stdint.h>
#include <stdio.h>
#include <esp_kernel.h>

int32_t tvmgen_default_esp_main_33(int8_t* FunctionVar_17_0, int8_t* tvm_var_extract_const_66, int8_t* tvm_var_extract_const_67, int8_t* out_0) {
  int input_shape[] = {1,6,6,48};
  int kernel_shape[] = {3,3,48,1};
  int output_shape[] = {1,6,6,48};
  int padding[] = {1,1,1,1};
  int dilation[] = {1,1};
  int strides[] = {1,1};
  int kernel_exponent = -10;

  esp_dl_nn_depthwise_conv2d_s8_wrapper(FunctionVar_17_0, tvm_var_extract_const_66, tvm_var_extract_const_67, input_shape, kernel_shape, output_shape, padding, dilation, strides, 0, kernel_exponent, 0, "", out_0);
  return 0;
}
