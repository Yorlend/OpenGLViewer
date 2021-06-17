//
// Created by yorlend on 17.06.2021.
//

#ifndef OPENGLVIEWER_SCENE_HPP
#define OPENGLVIEWER_SCENE_HPP

#include <list>
#include "../Shapes/Shape.hpp"

class Scene
{
public:
    explicit Scene(const std::list<Shape*> &s);
    std::list<Shape*>::iterator begin();
    std::list<Shape*>::iterator end();
    std::list<Shape *>::const_iterator begin() const;
    std::list<Shape *>::const_iterator end() const;

private:
    std::list<Shape*> shapeList;
};


#endif //OPENGLVIEWER_SCENE_HPP
