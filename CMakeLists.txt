cmake_minimum_required(VERSION 3.19)
project(MathTaskTools)

set(CMAKE_CXX_STANDARD 14)
set(EXECUTE src/main.cpp src/utils/integral_util.cpp src/utils/root_util.cpp src/utils/allen_log.cpp src/HomeWork/home_work_shower.h src/HomeWork/home_work_showers.cpp src/HomeWork/home_work_showers.h src/Global.h src/HomeWork/shower_factory.cpp src/HomeWork/shower_factory.h)
#include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
#conan_basic_setup()

add_executable(MathTaskTools ${EXECUTE})
#target_link_libraries(MathTaskTools ${CONAN_LIBS})