//
// Created by yorlend on 15.06.2021.
//

#ifndef OPENGLVIEWER_VECTORIMP_HPP
#define OPENGLVIEWER_VECTORIMP_HPP

template<typename T>
Vector<T>::Vector(T x, T y) : x(x), y(y) { }

template<typename T>
Vector<T>::Vector(const Vector &v) : x(v.x), y(v.y) { }

#endif //OPENGLVIEWER_VECTORIMP_HPP
