cmake_minimum_required(VERSION 4.3)
project(Piedra_Papel_o_tijera C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Piedra_Papel_o_tijera
        piedra_papel_tijeras.c)
