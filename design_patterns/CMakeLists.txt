cmake_minimum_required(VERSION 3.0.0)
project(design_patterns VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(singleton observer)
add_executable(
    design_patterns 
    singleton/Singleton.cpp 
    main.cpp )
