//
// Created by yorlend on 17.06.2021.
//

#include "Polygon.hpp"
#include "../Renderer.hpp"
#include <stdexcept>
#include "../Math/Vector.hpp"

Polygon::Polygon(std::list<Point> points, std::array<int, 4> color) : Shape(color), points(points)
{
    if (points.empty())
        throw std::runtime_error("Polygon: points list is empty");

    std::list<Vector> sides;

    for (auto curr = points.begin(), next = ++points.begin(); next != points.end(); curr++, next++)
        sides.emplace_back(*curr, *next);
    sides.emplace_back(points.back(), points.front());

    bool sign = sides.back() * sides.front() >= 0;
    for (auto curr = sides.begin(), next = ++sides.begin(); next != sides.end(); curr++, next++)
        if ((*curr * *next >= 0) ^ sign)
            throw std::runtime_error("Polygon: polygon is not convex");
}

std::list<Point> Polygon::getPoints() const { return points; }

void Polygon::accept(Renderer &r)
{
    r.visit(*this);
}
