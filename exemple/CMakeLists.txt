cmake_minimum_required(VERSION 3.0.0)
project(XSave-Lib VERSION 1.1.0)

file(GLOB CPP_FILES "./src/*.cpp")

add_executable(main ${CPP_FILES})
target_compile_options(main PRIVATE
  -Wall
  -Werror
  -Wextra
  -pedantic
  -Wno-maybe-uninitialized
)