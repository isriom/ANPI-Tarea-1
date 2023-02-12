cmake_minimum_required(VERSION 3.24)
project(ANPI_Tarea_1)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(multiprecision-Boost_1_81_0)

add_executable(ANPI_Tarea_1 main.cpp  funtras.h)
target_link_libraries(ANPI_Tarea_1 PUBLIC boost_multiprecision)

