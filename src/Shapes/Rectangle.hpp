//
// Created by yorlend on 17.06.2021.
//

#ifndef OPENGLVIEWER_RECTANGLE_HPP
#define OPENGLVIEWER_RECTANGLE_HPP

#include "../Math/Point.hpp"
#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle(Point t, Point b, std::array<int, 4> color = { 255, 255, 255, 255});
    Point getTopLeft() const;
    Point getBotRight() const;
    double height() const;
    double width() const;
    void accept(Renderer& r) override;

private:
    Point topLeft;
    Point botRight;
};


#endif //OPENGLVIEWER_RECTANGLE_HPP
