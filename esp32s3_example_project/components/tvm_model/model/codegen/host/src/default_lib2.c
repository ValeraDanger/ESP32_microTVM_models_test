#include <stdint.h>
#include <stdio.h>
#include <esp_kernel.h>

int32_t tvmgen_default_esp_main_8(int8_t* FunctionVar_0_0, int8_t* tvm_var_extract_const_16, int8_t* tvm_var_extract_const_17, int8_t* out_0) {
  int input_shape[] = {1,8,8,64};
  int kernel_shape[] = {64,3,3,64};
  int output_shape[] = {1,8,8,64};
  int padding[] = {1,1,1,1};
  int dilation[] = {1,1};
  int strides[] = {1,1};
  int kernel_exponent = -6;

  esp_dl_nn_conv2d_s8_wrapper(FunctionVar_0_0, tvm_var_extract_const_16, tvm_var_extract_const_17, input_shape, kernel_shape, output_shape, padding, dilation, strides, -4, kernel_exponent, -2, "", out_0);
  return 0;
}
