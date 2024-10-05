#include "beremiz.h"
#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

__DECLARE_ENUMERATED_TYPE(LOGLEVEL,
  LOGLEVEL__CRITICAL,
  LOGLEVEL__WARNING,
  LOGLEVEL__INFO,
  LOGLEVEL__DEBUG
)
// FUNCTION_BLOCK LOGGER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,MSG)
  __DECLARE_VAR(LOGLEVEL,LEVEL)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,TRIG0)

} LOGGER;

void LOGGER_init__(LOGGER *data__, BOOL retain);
// Code part
void LOGGER_body__(LOGGER *data__);
// PROGRAM SLUDGE
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,OVERFLOWSENSOR)
  __DECLARE_VAR(BOOL,PUMPSTATUS)
  __DECLARE_VAR(BOOL,GASHIGHVOLUMEALERT)
  __DECLARE_VAR(BOOL,SLUDGEOUTPUMP)
  __DECLARE_VAR(BOOL,THICKENINGPUMP)
  __DECLARE_VAR(BOOL,SOLIDWASTEALARM)
  __DECLARE_VAR(BOOL,THICKENINGPUMP0)
  __DECLARE_VAR(BOOL,DIGESTERPUMP)
  __DECLARE_VAR(BOOL,HOTWATERPUMPIN)
  __DECLARE_VAR(BOOL,HOTWATERPUMPOUT)
  __DECLARE_VAR(BOOL,GASPUMPTOTRANSPORT)
  __DECLARE_VAR(INT,DISSOLVEDO2)
  __DECLARE_VAR(INT,O2DEMAND)
  __DECLARE_VAR(BOOL,_TMP_GT8_OUT)
  __DECLARE_VAR(BOOL,_TMP_GT21_OUT)

} SLUDGE;

void SLUDGE_init__(SLUDGE *data__, BOOL retain);
// Code part
void SLUDGE_body__(SLUDGE *data__);
#endif //__POUS_H
