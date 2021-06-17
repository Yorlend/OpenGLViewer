//
// Created by yorlend on 16.06.2021.
//

#ifndef OPENGLVIEWER_POINT_HPP
#define OPENGLVIEWER_POINT_HPP


class Point
{
public:
    explicit Point(double x = 0, double y = 0);
    double getX() const;
    double getY() const;

private:
    double x;
    double y;
};


#endif //OPENGLVIEWER_POINT_HPP
