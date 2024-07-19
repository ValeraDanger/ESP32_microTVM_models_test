#include <stdint.h>
#include <stdio.h>
#include <esp_kernel.h>

int32_t tvmgen_default_esp_main_0(int8_t* FunctionVar_0_0, int8_t* tvm_var_extract_const_0, int8_t* tvm_var_extract_const_1, int8_t* out_0) {
  int input_shape[] = {1,26,26,64};
  int kernel_shape[] = {32,3,3,64};
  int output_shape[] = {1,24,24,32};
  int padding[] = {0,0,0,0};
  int dilation[] = {1,1};
  int strides[] = {1,1};
  int kernel_exponent = -9;

  esp_dl_nn_conv2d_s8_wrapper(FunctionVar_0_0, tvm_var_extract_const_0, tvm_var_extract_const_1, input_shape, kernel_shape, output_shape, padding, dilation, strides, 0, kernel_exponent, 0, "", out_0);
  return 0;
}
