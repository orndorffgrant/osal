#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include "common_types.h"
#include "os-freertos.h"
#include "os-shared-file.h"

int32 OS_FreeRTOS_StreamAPI_Impl_Init(void){
    return OS_SUCCESS;  // @FIXME
}

int32 OS_FileOpen_Impl(const OS_object_token_t *token, const char *local_path, int32 flags, int32 access_mode)
{
    return OS_ERR_NOT_IMPLEMENTED;
}

int32 OS_GenericClose_Impl(const OS_object_token_t *token)
{
    return OS_ERR_NOT_IMPLEMENTED;
}

int32 OS_GenericRead_Impl(const OS_object_token_t *token, void *buffer, size_t nbytes, OS_time_t abs_timeout)
{
    return OS_ERR_NOT_IMPLEMENTED;
}

int32 OS_GenericSeek_Impl(const OS_object_token_t *token, osal_offset_t offset, uint32 whence)
{
    return OS_ERR_NOT_IMPLEMENTED;
}

int32 OS_FileStat_Impl(const char *local_path, os_fstat_t *FileStats)
{
    return OS_ERR_NOT_IMPLEMENTED;
}
