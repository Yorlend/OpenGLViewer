//
// Created by yorlend on 17.06.2021.
//

#include "Rectangle.hpp"
#include "../Renderer.hpp"
#include <stdexcept>

Rectangle::Rectangle(Point t, Point b, std::array<int, 4> color) : Shape(color), topLeft(t), botRight(b)
{
    if (t.getX() > b.getX() || t.getY() > b.getY())
        throw std::runtime_error("Rectangle: invalid rectangle");
}

Point Rectangle::getTopLeft() const { return topLeft; }

Point Rectangle::getBotRight() const { return botRight; }

double Rectangle::width() const { return botRight.getX() - topLeft.getX(); }

double Rectangle::height() const { return botRight.getY() - topLeft.getY(); }

void Rectangle::accept(Renderer &r)
{
    r.visit(*this);
}
