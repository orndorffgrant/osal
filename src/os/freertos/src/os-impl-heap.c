#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include "common_types.h"
#include "os-shared-globaldefs.h"
#include "os-freertos.h"

int32 OS_HeapGetInfo_Impl(OS_heap_prop_t *heap_prop){
	memset(heap_prop, 0, sizeof(*heap_prop));

	heap_prop->free_bytes = xPortGetFreeHeapSize();
	heap_prop->free_blocks = 0;
	heap_prop->largest_free_block = 0;

	return OS_SUCCESS;
}
