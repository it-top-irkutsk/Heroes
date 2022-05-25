cmake_minimum_required(VERSION 3.22)
project(Heroes)

set(CMAKE_CXX_STANDARD 14)

add_executable(Heroes main.cpp Hero.h Mage.h Barbarian.h CLI.h IMagic.h Dragon.h)
