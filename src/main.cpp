#include <iostream>
#include "Scene/SceneLoader.hpp"
#include "Renderer.hpp"

//void displayMe(void)
//{
//    glClear(GL_COLOR_BUFFER_BIT);
//    glBegin(GL_POLYGON);
//    glVertex3f(0.5, 0.0, 0.5);
//    glVertex3f(0.5, 0.0, 0.0);
//    glVertex3f(0.0, 0.5, 0.0);
//    glVertex3f(0.0, 0.0, 0.5);
//    glEnd();
//    glFlush();
//}

int main(int argc, char** argv)
{
    SceneLoader loader;
    Renderer renderer(argc, argv, "woof", 640, 480);
    Scene scene = loader.load("scene.json");

    renderer.setScene(scene);
    renderer.mainLoop();
    return 0;
}
