//
// Created by yorlend on 17.06.2021.
//

#ifndef OPENGLVIEWER_POLYGON_HPP
#define OPENGLVIEWER_POLYGON_HPP

#include "Shape.hpp"
#include "../Math/Point.hpp"
#include <list>

class Polygon : public Shape
{
public:
    Polygon(std::list<Point> points, std::array<int, 4> color = { 255, 255, 255, 255 });
    std::list<Point> getPoints() const;
    void accept(Renderer& r) override;

private:
    std::list<Point> points;
};


#endif //OPENGLVIEWER_POLYGON_HPP
