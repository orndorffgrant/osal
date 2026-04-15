#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include "common_types.h"
#include "os-shared-globaldefs.h"
#include "os-freertos.h"

HeapStats_t heapStats;

int32 OS_HeapGetInfo_Impl(OS_heap_prop_t *heap_prop){
	memset(&heapStats, 0, sizeof(heapStats));
	vPortGetHeapStats(&heapStats);

	heap_prop->free_bytes = OSAL_SIZE_C(heapStats.xAvailableHeapSpaceInBytes);
	// sorry commenting out because it doesn't compile
	// heap_prop->free_blocks = OSAL_BLOCKCOUNT_C(heapStats.xNumberofFreeBlocks);
	// heap_prop->largest_free_block = OSAL_SIZE_C(heapStats.xSizeOflargestFreeBlockInBytes);

	return OS_SUCCESS;
}
