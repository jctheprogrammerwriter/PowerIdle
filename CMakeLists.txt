cmake_minimum_required(VERSION 4.0)
project(PowerIdle)

set(CMAKE_CXX_STANDARD 26)

add_executable(PowerIdle main.cpp
        User.ixx)

target_sources(${PROJECT_NAME}
        PUBLIC
        FILE_SET CXX_MODULES FILES
        User.ixx
        Limits.ixx
)
