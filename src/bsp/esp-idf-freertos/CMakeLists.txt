add_library(osal_esp-idf-freertos_impl OBJECT
    src/bsp_start.c
    src/bsp_console.c
)

target_include_directories(osal_esp-idf-freertos_impl PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)

# Pull in ESP-IDF FreeRTOS headers via the idf::freertos interface target,
# which is created by idf_build_process() earlier in the build.
target_link_libraries(osal_esp-idf-freertos_impl PRIVATE idf::freertos)

set_property(TARGET osal_esp-idf-freertos_impl PROPERTY OSAL_EXPECTED_OSTYPE "freertos")
