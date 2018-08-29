cmake_minimum_required(VERSION 3.12)
project(BusquedaSecuencial)

set(CMAKE_CXX_STANDARD 14)

add_executable(BusquedaSecuencial BSecuencial/main.cpp BSecuencial/BusqueSecuencial.cpp BSecuencial/BusqueSecuencial.h)