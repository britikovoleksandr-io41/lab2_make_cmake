cmake_minimum_required(VERSION 3.10)

project(calculator C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_library(calc STATIC
	src/calc.c
)

target_include_directories(calc
	PUBLIC
		${CMAKE_SOURCE_DIR}/include
)

add_executable(calc_app
	src/main.c
)

target_link_libraries(calc_app
	PRIVATE
		calc
)
