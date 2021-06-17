//
// Created by yorlend on 17.06.2021.
//

#ifndef OPENGLVIEWER_RENDERER_HPP
#define OPENGLVIEWER_RENDERER_HPP

#include "Shapes/Rectangle.hpp"
#include "Shapes/Circle.hpp"
#include "Shapes/Polygon.hpp"
#include "Scene/Scene.hpp"
#include <string>

class Renderer
{
public:
    Renderer(int argc, char** argv, const std::string& title, int w, int h);

    void visit(Rectangle& rect);
    void visit(Circle& circle);
    void visit(Polygon& polygon);

    void setScene(const Scene& scene);
    void renderScene();

    void mainLoop();

private:
    const Scene* scene;
    int width;
    int height;
};


#endif //OPENGLVIEWER_RENDERER_HPP
