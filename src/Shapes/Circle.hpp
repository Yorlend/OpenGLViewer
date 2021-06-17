//
// Created by yorlend on 17.06.2021.
//

#ifndef OPENGLVIEWER_CIRCLE_HPP
#define OPENGLVIEWER_CIRCLE_HPP

#include "../Math/Point.hpp"
#include "Shape.hpp"

class Circle : public Shape
{
public:
    Circle(Point c, double r, std::array<int, 4> color = { 255, 255, 255, 255 });
    Point getCenter() const;
    double getRadius() const;
    void accept(Renderer& r) override;

private:
    Point center;
    double radius;
};


#endif //OPENGLVIEWER_CIRCLE_HPP
