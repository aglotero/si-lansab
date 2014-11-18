#ifndef _UA_H_
#  define _UA_H_ 

#include "OperationalScenario.h"

/**
** File ua.h
**
** Automatically generated by SCADE Suite UA Adaptor
** Version 6.4.2 (build i25)
**
** Date of generation: 2014-11-18T21:39:02
** Command line:  $ uaadaptor.exe -n 'C:\Program Files (x86)\Esterel Technologies\Esterel SCADE 6.4.2\SCADE Display\config\Workspace\environments\UAPageCreator\A661Norm\a661.xml' -o 'ua' -outdir '..\UserApplication\KCG\' -k '..\UserApplication\KCG\kcg_trace.xml -d '..\DefinitionFile\INTEGRATION_SatelliteControlCommunication_DFDF\SatelliteControlCommunication_DF.sgfx' ..\UserApplication\missionPhases.sdy
**/

/*The default context number if not mapped*/
#ifndef DEFAULT_CONTEXT_NUMBER
#define DEFAULT_CONTEXT_NUMBER 0xDEFA
#endif

/*The input buffer size (bytes) for data from the server*/
#ifndef MAX_SIZE_INPUT_BUFFER
#define MAX_SIZE_INPUT_BUFFER 1000000
#endif

/*The output buffer size (bytes) for data to send to the server*/
#ifndef MAX_SIZE_OUTPUT_BUFFER
#define MAX_SIZE_OUTPUT_BUFFER 1000000
#endif

#ifndef BUFFER_EL
#define BUFFER_EL
typedef unsigned char buffer_el;
#endif

#ifndef EXTERN_OUT_CTX_T
#define extern_out_ctx_t void *
#endif

#ifndef EXTERN_IN_CTX_T
#define extern_in_ctx_t void *
#endif



extern int ua_send(buffer_el msg[], outC_OperationalScenario* scade_ctx,
  extern_out_ctx_t * extern_out_ctx);
extern int ua_receive(buffer_el buffer[], int buffer_size,
  inC_OperationalScenario* scade_ctx, extern_in_ctx_t * extern_in_ctx);
extern void ua_receive_clear(inC_OperationalScenario* scade_ctx,
  extern_in_ctx_t * extern_in_ctx);


#endif /* _UA_H_ */
