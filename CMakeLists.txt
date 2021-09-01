
cmake_minimum_required( VERSION 3.5)

project (chrono_timer LANGUAGES CXX)

set(CMAKE_BUILD_TYPE "Release")
 
add_executable (computing_sum computing_sum.cpp)
add_executable (structured_mem structured_mem.cpp)
add_executable (unstructured_mem unstructured_mem.cpp)
