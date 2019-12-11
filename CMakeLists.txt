cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 17)
project(dl_test)
# set(CMAKE_SHARED_LIBRARY_LINK_C_FLAGS "")
set(CMAKE_SHARED_LIBRARY_LINK_CXX_FLAGS "")

# set(CMAKE_SYSTEM_NAME Generic)

add_library(test SHARED dl.cpp)
add_executable(a.out dlfcn_test.cpp)
