#ifndef __c1_counter_h__
#define __c1_counter_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc1_counterInstanceStruct
#define typedef_SFc1_counterInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c1_sfEvent;
  uint8_T c1_tp_counter;
  boolean_T c1_isStable;
  uint8_T c1_is_active_c1_counter;
  uint8_T c1_is_c1_counter;
  real_T c1_lastSignal;
  real_T c1_internalCounter;
  uint8_T c1_doSetSimStateSideEffects;
  const mxArray *c1_setSimStateSideEffectsInfo;
} SFc1_counterInstanceStruct;

#endif                                 /*typedef_SFc1_counterInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_counter_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_counter_get_check_sum(mxArray *plhs[]);
extern void c1_counter_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
