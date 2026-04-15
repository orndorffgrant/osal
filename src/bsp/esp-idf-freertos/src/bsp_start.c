#include <stdlib.h>
#include <string.h>

#include "esp_idf_freertos_bsp_internal.h"

SemaphoreHandle_t xConsoleMutex;

void OS_BSP_Shutdown_Impl(void){
    abort();  // @FIXME not implemented
}

// Real main is app_main in the top-level esp-idf project
// esp-idf already starts freertos before app_main is called
// here we just need to start the cfe task
int cfs_bsp_main(void){
    memset(&OS_BSP_Global, 0, sizeof(OS_BSP_Global));
    
    xConsoleMutex = xSemaphoreCreateMutex();
    
    OS_Application_Startup();
    OS_Application_Run();
    return OS_BSP_Global.AppStatus;
}
