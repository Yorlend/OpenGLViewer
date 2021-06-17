//
// Created by yorlend on 17.06.2021.
//

#include "Vector.hpp"

Vector::Vector(double x, double y) : x(x), y(y) { }

Vector::Vector(Point p1, Point p2) : x(p2.getX() - p1.getX()), y(p2.getY() - p1.getY()) { }

double Vector::getX() const { return x; }

double Vector::getY() const { return y; }

double Vector::operator*(const Vector &v) const { return x * v.y - v.x * y; }


