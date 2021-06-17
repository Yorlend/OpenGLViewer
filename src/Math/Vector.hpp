//
// Created by yorlend on 17.06.2021.
//

#ifndef OPENGLVIEWER_VECTOR_HPP
#define OPENGLVIEWER_VECTOR_HPP

#include "Point.hpp"

class Vector
{
public:
    explicit Vector(double x = 0, double y = 0);
    Vector(Point p1, Point p2);
    double getX() const;
    double getY() const;
    double operator*(const Vector& v) const;

private:
    double x;
    double y;
};


#endif //OPENGLVIEWER_VECTOR_HPP
