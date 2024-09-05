cmake_minimum_required(VERSION 3.29)
project(gui_calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

set(SOURCE_FILES main.cpp)

add_executable(gui_calculator ${SOURCE_FILES})
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(gui_calculator sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
