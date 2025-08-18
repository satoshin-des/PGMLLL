cmake_minimum_required(VERSION 3.12)
project(PGMLLL)

# set compiler to g++
if(NOT CMAKE_CXX_COMPILER)
    set(CMAKE_CXX_COMPILER g++)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add compile options
# add_compile_options(-O2 -march=native -funroll-loops)
add_compile_options(-O3 -funroll-loops -mtune=native -march=native -mfpmath=both)

# include directory
include_directories(include)

# collect library source files
file(GLOB_RECURSE LIB_SOURCES "src/*.cpp")

# make shared library
add_library(PGMLLL SHARED ${LIB_SOURCES})

# NTL
find_library(NTL_LIBRARY NAMES ntl)
if(NOT NTL_LIBRARY)
    message(FATAL_ERROR "NTL library not found")
endif()

target_link_libraries(PGMLLL PRIVATE ${NTL_LIBRARY})

set_target_properties(
    PGMLLL PROPERTIES OUTPUT_NAME "PGMLLL"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)

add_executable(main_exec Main.cpp)

target_link_libraries(main_exec PRIVATE PGMLLL ${NTL_LIBRARY})

set_target_properties(
    main_exec PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)
