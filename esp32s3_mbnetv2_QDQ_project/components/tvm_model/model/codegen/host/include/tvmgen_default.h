#ifndef TVMGEN_DEFAULT_H_
#define TVMGEN_DEFAULT_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor sub_7 size (in bytes) for TVM module "default" 
 */
#define TVMGEN_DEFAULT_SUB_7_SIZE 3158028
/*!
 * \brief Output tensor output size (in bytes) for TVM module "default" 
 */
#define TVMGEN_DEFAULT_OUTPUT_SIZE 22106196
/*!
 * \brief Input tensor pointers for TVM module "default" 
 */
struct tvmgen_default_inputs {
  void* sub_7;
};

/*!
 * \brief Output tensor pointers for TVM module "default" 
 */
struct tvmgen_default_outputs {
  void* output;
};

/*!
 * \brief entrypoint function for TVM module "default"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_default_run(
  struct tvmgen_default_inputs* inputs,
  struct tvmgen_default_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "default" 
 */
#define TVMGEN_DEFAULT_WORKSPACE_SIZE 25560960

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_DEFAULT_H_
