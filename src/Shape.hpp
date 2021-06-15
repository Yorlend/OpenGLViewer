//
// Created by yorlend on 16.06.2021.
//

#ifndef OPENGLVIEWER_SHAPE_HPP
#define OPENGLVIEWER_SHAPE_HPP

#include <array>

class Renderer;

class Shape
{
public:
    explicit Shape(std::array<int, 4> color);
    std::array<int, 4> getColor() const;
    virtual void accept(Renderer& r) = 0;

private:
    std::array<int, 4> color;
};


#endif //OPENGLVIEWER_SHAPE_HPP
