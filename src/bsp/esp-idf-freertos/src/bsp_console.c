#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#include "esp_idf_freertos_bsp_internal.h"
#include "bsp-impl.h"


void OS_BSP_ConsoleOutput_Impl(const char *Str, size_t DataLen){
    printf("%.*s", (int)DataLen, Str);
}

void OS_BSP_ConsoleSetMode_Impl(uint32 ModeBits){
    // no-op
}

void OS_BSP_Lock_Impl(void) {
    // xSemaphoreTake(xConsoleMutex, (TickType_t) 100);
    // no-op stdout is already locked see https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-guides/stdio.html
}

void OS_BSP_Unlock_Impl(void) {
    // xSemaphoreGive(xConsoleMutex);
    // no-op stdout is already locked see https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-guides/stdio.html
}
