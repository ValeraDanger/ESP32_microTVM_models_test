#include <stdint.h>
#include <stdio.h>
#include <esp_kernel.h>

int32_t tvmgen_default_esp_main_5(int8_t* FunctionVar_3_0, int8_t* tvm_var_extract_const_10, int8_t* tvm_var_extract_const_11, int8_t* out_0) {
  int input_shape[] = {1,16,16,32};
  int kernel_shape[] = {32,3,3,32};
  int output_shape[] = {1,16,16,32};
  int padding[] = {1,1,1,1};
  int dilation[] = {1,1};
  int strides[] = {1,1};
  int kernel_exponent = -7;

  esp_dl_nn_conv2d_s8_wrapper(FunctionVar_3_0, tvm_var_extract_const_10, tvm_var_extract_const_11, input_shape, kernel_shape, output_shape, padding, dilation, strides, -3, kernel_exponent, -3, "", out_0);
  return 0;
}
