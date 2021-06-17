cmake_minimum_required(VERSION 3.19)
project(OpenGLViewer)

set(CMAKE_CXX_STANDARD 17)

add_executable(OpenGLViewer src/main.cpp src/Math/Point.cpp src/Math/Point.hpp src/Shapes/Shape.cpp src/Shapes/Shape.hpp src/Renderer.cpp src/Renderer.hpp lib/json.hpp src/Shapes/Rectangle.cpp src/Shapes/Rectangle.hpp src/Shapes/Circle.cpp src/Shapes/Circle.hpp src/Shapes/Polygon.cpp src/Shapes/Polygon.hpp src/Math/Vector.cpp src/Math/Vector.hpp src/Scene/Scene.cpp src/Scene/Scene.hpp src/Scene/SceneLoader.cpp src/Scene/SceneLoader.hpp)
target_link_libraries(OpenGLViewer glut GLU GL)
