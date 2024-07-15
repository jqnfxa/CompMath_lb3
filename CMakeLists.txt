cmake_minimum_required(VERSION 3.27)

project(solver)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O3 -lm")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0 -lm")


add_executable(solver	src/methods/bisection.c
			src/methods/newton.c
			src/methods/secant.c
			src/util/functions.c
			src/main.c)
