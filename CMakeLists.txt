cmake_minimum_required(VERSION 3.19)
project(OpenGLViewer)

set(CMAKE_CXX_STANDARD 17)

add_executable(OpenGLViewer src/main.cpp src/Point.cpp src/Point.hpp src/Shape.cpp src/Shape.hpp)
target_link_libraries(OpenGLViewer glut GLU GL)
