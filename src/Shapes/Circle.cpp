//
// Created by yorlend on 17.06.2021.
//

#include "Circle.hpp"
#include "../Renderer.hpp"
#include <stdexcept>

Circle::Circle(Point c, double r, std::array<int, 4> color) : Shape(color), center(c), radius(r)
{
    if (radius <= 0)
        throw std::runtime_error("Circle: invalid circle");
}

Point Circle::getCenter() const { return center; }
double Circle::getRadius() const { return radius; }

void Circle::accept(Renderer& r)
{
    r.visit(*this);
}
