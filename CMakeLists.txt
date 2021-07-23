cmake_minimum_required(VERSION 2.8)
add_compile_options(-Wall -lm)
project(L6HW4)
add_executable(l6hw4 src/l6hw4.c)
target_include_directories(l6hw4 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(l6hw4 PRIVATE m)

