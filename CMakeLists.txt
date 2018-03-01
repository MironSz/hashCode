cmake_minimum_required(VERSION 3.5)
project(hashCode)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp io.cpp structs.cpp structs.h io.h Chooser.cpp Chooser.h state.h state.cpp MironSolution.cpp MironSolution.h counter.cpp counter.h)
add_executable(hashCode ${SOURCE_FILES})
