
# how to run basic tests on your machine
After renaming Makefile.sample to Makefile

```
make distclean
make prep ENABLE_UNIT_TESTS=1
make

cd build
ctest -R coverage
```
^ if you just run ctest, it will fail on stuff that requires a specific board

We can use this syntax instead to specify the BSP type. 
```
make prep BSPTYPE=pc-linux ENABLE_UNIT_TESTS=1

make prep BSPTYPE=generic-linux ENABLE_UNIT_TESTS=1

make prep BSPTYPE=generic-freertos ENABLE_UNIT_TESTS=1

make prep BSPTYPE=generic-freertos OSAL_SYSTEM_OSTYPE=freertos ENABLE_UNIT_TESTS=1
```
TODO: Consult CMakeLists.txt on BSPTYPE is used and how it can be applied to the esp32. 

```
└─$ make prep BSPTYPE=generic-freertos OSAL_SYSTEM_OSTYPE=freertos ENABLE_UNIT_TESTS=1
mkdir -p "build"
(cd "build" && cmake -DOSAL_SYSTEM_BSPTYPE=generic-freertos -DINSTALL_TARGET_LIST=. -DCMAKE_INSTALL_PREFIX=/exe -DCMAKE_BUILD_TYPE=debug -DENABLE_UNIT_TESTS=1 -DOSAL_SYSTEM_OSTYPE=freertos "/home/peryton/osal")
-- BSP Selection: generic-freertos at /home/peryton/osal/src/bsp/generic-freertos
-- OSAL Selection: freertos at /home/peryton/osal/src/os/freertos
CMake Error at src/os/freertos/CMakeLists.txt:16 (message):
  You must set CUSTOM_FREERTOS_FILESYSTEM for your BSP in
  arch_build_custom.cmake and provide your own
  OS_FreeRTOS_FileSysAPI_Impl_Init implementation.


-- Configuring incomplete, errors occurred!
make: *** [Makefile:131: prep] Error 1
```