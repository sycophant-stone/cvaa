PROJECT(OpenCV_Example)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
if(COMMAND cmake_policy)
    cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)
 
FIND_PACKAGE( OpenCV REQUIRED )

# Declare the target (an executable)
ADD_EXECUTABLE(OpenCV_Example  main.c)

TARGET_LINK_LIBRARIES(OpenCV_Example ${OpenCV_LIBS})
SET(CMAKE_C_COMPILER "/usr/bin/c++")    # 强制编译c的时候也用c++
SET(CMAKE_CXX_COMPILER "/usr/bin/c++")  # 使用具体的c++做编译器.
set(CMAKE_C_FLAGS "-std=c++11")         # 因opencv需要c++11支持.

#MESSAGE(STATUS "OpenCV_LIBS: ${OpenCV_LIBS}")

# make VERBOSE=1 可以显示更多的编译过程及细节.