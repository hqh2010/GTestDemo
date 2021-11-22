# 说明

This is a cmake test for GTest.

演示GTest集成与使用。

# 使用方式

mkdir build

cd build

cmake ..

开Debug模式命令

cmake .. -DCMAKE_BUILD_TYPE="Debug" -DCMAKE_DEBUG_ASAN=ON

make -j16

# 运行

./bin/main

./bin/func_test

# 清理

make clean

# 参考文档

Cmake add_test

[https://blog.csdn.net/sun_ashe/article/details/104527591/]()

https://cmake.org/cmake/help/v3.12/command/file.html

https://blog.csdn.net/bytxl/article/details/48287499
