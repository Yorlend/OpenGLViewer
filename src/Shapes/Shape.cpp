//
// Created by yorlend on 16.06.2021.
//

#include "Shape.hpp"

Shape::Shape(std::array<int, 4> color) : color(color) { }

std::array<int, 4> Shape::getColor() const { return color; }
