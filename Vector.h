//
// Created by yorlend on 15.06.2021.
//

#ifndef OPENGLVIEWER_VECTOR_H
#define OPENGLVIEWER_VECTOR_H

template <typename T>
class Vector
{
public:
    explicit Vector(T x = 0, T y = 0);
    Vector(const Vector& v);
private:
    T x;
    T y;
};

#include "VectorImp.hpp"

#endif //OPENGLVIEWER_VECTOR_H
