cmake_minimum_required(VERSION 3.19)
project(OpenGLViewer)

set(CMAKE_CXX_STANDARD 17)

add_executable(OpenGLViewer main.cpp Figure.h Vector.h Triangle.cpp Triangle.h VectorImp.hpp)
target_link_libraries(OpenGLViewer glut GLU GL)
