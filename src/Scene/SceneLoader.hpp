//
// Created by yorlend on 17.06.2021.
//

#ifndef OPENGLVIEWER_SCENELOADER_HPP
#define OPENGLVIEWER_SCENELOADER_HPP

#include "Scene.hpp"
#include "../../lib/json.hpp"
#include <string>

class SceneLoader
{
public:
    Scene load(const std::string &filename);
    Shape* loadShape(const nlohmann::json &j);
};


#endif //OPENGLVIEWER_SCENELOADER_HPP
