cmake_minimum_required(VERSION 3.27)
project(cpp_html)

set(CMAKE_CXX_STANDARD 98)

add_executable(htmlcpp_demo main.cpp
        html.h
        html.cpp
)
