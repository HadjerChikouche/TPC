cmake_minimum_required(VERSION 3.14)
project(TP)
set(CMAKE_C_STANDARD 11)

add_executable(TP main.c Film.h Personne.h Date.h Personne.c Film.c Util.h)

