cmake_minimum_required(VERSION 3.4)		# never set less 3.4 min version
project(TestBIT)

set(CMAKE_BUILD_TYPE Debug)

include_directories(include)


add_executable(TestBit src/main_test_Bit.cpp src/Bit.cpp)




