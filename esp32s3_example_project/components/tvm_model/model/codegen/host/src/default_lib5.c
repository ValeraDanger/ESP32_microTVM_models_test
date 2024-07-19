#include <stdint.h>
#include <stdio.h>
#include <esp_kernel.h>

int32_t tvmgen_default_esp_main_7(int8_t* FunctionVar_1_0, int8_t* tvm_var_extract_const_14, int8_t* tvm_var_extract_const_15, int8_t* out_0) {
  int input_shape[] = {1,16,16,32};
  int kernel_shape[] = {64,3,3,32};
  int output_shape[] = {1,8,8,64};
  int padding[] = {0,1,0,1};
  int dilation[] = {1,1};
  int strides[] = {2,2};
  int kernel_exponent = -9;

  esp_dl_nn_conv2d_s8_wrapper(FunctionVar_1_0, tvm_var_extract_const_14, tvm_var_extract_const_15, input_shape, kernel_shape, output_shape, padding, dilation, strides, -3, kernel_exponent, -3, "", out_0);
  return 0;
}
