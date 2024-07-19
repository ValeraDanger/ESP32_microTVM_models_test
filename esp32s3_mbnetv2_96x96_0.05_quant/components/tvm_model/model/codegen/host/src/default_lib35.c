#include <stdint.h>
#include <stdio.h>
#include <esp_kernel.h>

int32_t tvmgen_default_esp_main_37(int8_t* FunctionVar_13_0, int8_t* tvm_var_extract_const_74, int8_t* tvm_var_extract_const_75, int8_t* out_0) {
  int input_shape[] = {1,6,6,48};
  int kernel_shape[] = {8,1,1,48};
  int output_shape[] = {1,6,6,8};
  int padding[] = {0,0,0,0};
  int dilation[] = {1,1};
  int strides[] = {1,1};
  int kernel_exponent = -8;

  esp_dl_nn_conv2d_s8_wrapper(FunctionVar_13_0, tvm_var_extract_const_74, tvm_var_extract_const_75, input_shape, kernel_shape, output_shape, padding, dilation, strides, 0, kernel_exponent, 0, "", out_0);
  return 0;
}
