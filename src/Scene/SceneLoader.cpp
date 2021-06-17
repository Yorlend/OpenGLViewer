//
// Created by yorlend on 17.06.2021.
//

#include <fstream>
#include "SceneLoader.hpp"
#include "../Shapes/Circle.hpp"
#include "../Shapes/Rectangle.hpp"
#include "../Shapes/Polygon.hpp"

using json = nlohmann::json;

Scene SceneLoader::load(const std::string &filename)
{
    std::list<Shape*> shapes;

    json j;
    std::ifstream(filename) >> j;

    for (auto& item : j["shapes"])
        shapes.push_back(loadShape(item));

    return Scene(shapes);
}

Shape *SceneLoader::loadShape(const json &j) {
    std::array<int, 4> color = { 255, 255, 255, 255 };
    if (j.contains("color"))
        color = j["color"];

    if (j["type"] == "circle")
        return new Circle(Point(j["x"], j["y"]), j["radius"], color);
    else if (j["type"] == "polygon")
    {
        std::list<Point> points;
        for (auto it = j["points"].begin(); it != j["points"].end(); it++)
        {
            double x = *it;
            if (++it == j["points"].end())
                throw std::runtime_error("SceneLoader: bad points count");
            double y = *it;
            points.emplace_back(x, y);
        }

        return new Polygon(points, color);
    }
    else if (j["type"] == "rectangle")
    {
        Point topLeft = Point(j["topLeft"][0], j["topLeft"][1]);
        Point botRight = Point(j["botRight"][0], j["botRight"][1]);
        return new Rectangle(topLeft, botRight, color);
    }

    throw std::runtime_error("SceneLoader: unknown shape type");
}
