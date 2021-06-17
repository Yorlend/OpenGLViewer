//
// Created by yorlend on 17.06.2021.
//

#include "Renderer.hpp"
#include <GL/glut.h>
#include <cmath>

constexpr auto pi = 3.1415926535;

static Renderer* rendererInstance = nullptr;
static void display()
{
    if (rendererInstance)
        rendererInstance->renderScene();
}

void Renderer::visit(Rectangle &rect)
{
    glBegin(GL_POLYGON);

    auto color = rect.getColor();
    std::array<Point, 4> points = { rect.getTopLeft(), Point(rect.getBotRight().getX(), rect.getTopLeft().getY()),
                                    rect.getBotRight(), Point(rect.getTopLeft().getX(), rect.getBotRight().getY())};
    for (const auto& point : points)
    {
        glColor3f(color[0] / 255.0, color[1] / 255.0, color[2] / 255.0);
        glVertex3f(point.getX() * 2 / width - 1, point.getY() * 2 / height - 1, 0.5);
    }
    glVertex3f(points.front().getX() * 2 / width - 1, points.front().getY() * 2 / height - 1, 0.0);

    glEnd();
}

void Renderer::visit(Circle& circle)
{
    glBegin(GL_POLYGON);

    auto color = circle.getColor();
    auto cx = circle.getCenter().getX();
    auto cy = circle.getCenter().getY();
    auto radius = circle.getRadius();

    const int n = 60;
    for (int i = 0; i <= n; i++)
    {
        double angle = 2 * pi / n * i;
        double x = cx + radius * std::cos(angle);
        double y = cy + radius * std::sin(angle);
        glColor3f(color[0] / 255.0, color[1] / 255.0, color[2] / 255.0);
        glVertex3f(x * 2 / width - 1, y * 2 / height - 1, 0.5);
    }

    glEnd();
}

void Renderer::visit(Polygon& polygon)
{
    glBegin(GL_POLYGON);

    auto color = polygon.getColor();

    auto points = polygon.getPoints();
    for (const auto& point : points)
    {
        glColor3f(color[0] / 255.0, color[1] / 255.0, color[2] / 255.0);
        glVertex3f(point.getX() * 2 / width - 1, point.getY() * 2 / height - 1, 0.5);
    }
    glVertex3f(points.front().getX() * 2 / width - 1, points.front().getY() * 2 / height - 1, 0.0);

    glEnd();
}

Renderer::Renderer(int argc, char** argv, const std::string &title, int w, int h)
    : width(w), height(h)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(w, h);
    glutCreateWindow(title.c_str());
    glutDisplayFunc(display);

    rendererInstance = this;
}

void Renderer::setScene(const Scene &scene)
{
    this->scene = &scene;
}

void Renderer::renderScene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    if (scene)
        for (auto& shape : *scene)
            shape->accept(*this);

    glFlush();
}

void Renderer::mainLoop()
{
    glutMainLoop();
}
