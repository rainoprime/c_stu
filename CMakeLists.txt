cmake_minimum_required(VERSION 3.27)
project(c_stu C)

set(CMAKE_C_STANDARD 99)

add_executable(c_stu demo_23_11_28.c
        demo_23_11_28-2.c
        demo_23_11_28_global.c
        demo_23_11_28-3.c
        demo_23_11_29.c)

add_definitions(-DFILE_23_11_29_MAIN)  # 定义 FILE_23_11_29_MAIN，所以 FILE_23_11_29_MAIN.c 中的 main 将被编译
