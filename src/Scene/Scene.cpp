//
// Created by yorlend on 17.06.2021.
//

#include "Scene.hpp"

Scene::Scene(const std::list<Shape *> &s) : shapeList(s) { }

std::list<Shape *>::iterator Scene::begin()
{
    return shapeList.begin();
}

std::list<Shape *>::iterator Scene::end()
{
    return shapeList.end();
}

std::list<Shape *>::const_iterator Scene::begin() const
{
    return shapeList.begin();
}

std::list<Shape *>::const_iterator Scene::end() const
{
    return shapeList.end();
}
