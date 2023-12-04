cmake_minimum_required(VERSION 3.27)
project(c_stu C)

set(CMAKE_C_STANDARD 99)

add_executable(c_stu demo_23_11_28.c
        demo_23_11_28-2.c
        demo_23_11_28_global.c
        demo_23_11_28-3.c
        demo_23_11_29.c
        demo_23_11_30.c
        demo_23_12_01.c
        demo_23_12_02.c
        demo_23_12_02-2.c
        demo_23_12_02-3.c
        demo_23_12_02-4.c
        demo_23_12_02-5.c
        demo_23_12_03.c
        demo_23_12_03-2.c
        demo_23_12_03-3.c
        demo_23_12_03-4.c
        demo_23_12_03-5.c
        demo_23_12_03-6.c
        demo_23_12_04.c
)

add_definitions(-DFILE_23_12_04_MAIN)  # 定义 FILE_23_11_29_MAIN，所以 FILE_23_11_29_MAIN.c 中的 main 将被编译
