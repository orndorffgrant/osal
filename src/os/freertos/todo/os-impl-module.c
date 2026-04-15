#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include "common_types.h"
#include "os-shared-globaldefs.h"
#include "os-shared-module.h"
#include "os-freertos.h"

// sorry this struct doesn't exist anywhere that I can find it so commenting out so the build works
// OS_impl_module_internal_record_t OS_impl_module_table[OS_MAX_MODULES];
// OS_module_internal_record_t OS_module_table[OS_MAX_MODULES];

int32 OS_FreeRTOS_ModuleAPI_Impl_Init(void){
    // memset(OS_impl_module_table, 0, sizeof(OS_impl_module_table));
	return OS_SUCCESS;
}

// int32 OS_ModuleAPI_Init(void){
//     memset(OS_module_table, 0, sizeof(OS_module_table));
//     return OS_SUCCESS;
// }

// int32 OS_ModuleLoad(osal_id_t *module_id, const char *module_name, const char *filename, uint32 flags){
//     return OS_ERROR;  // @FIXME
// }

// int32 OS_ModuleUnload(osal_id_t module_id){
//     return OS_ERROR;  // @FIXME
// }

// int32 OS_ModuleGetInfo(void){
//     return OS_ERROR;  // @FIXME
// }

// int32 OS_ModuleInfo(osal_id_t module_id, OS_module_prop_t *module_info){
//     return OS_ERROR;  // @FIXME
// }

// int32 OS_SymbolLookup(cpuaddr *symbol_address, const char *symbol_name){
//     return -1;
// }
