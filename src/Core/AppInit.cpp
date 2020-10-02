#include "AppInit.hpp"

bool ng::AppInit::initedGLFW = false;
bool ng::AppInit::initedGLEW = false;

void ng::AppInit::initGLFW(int major, int minor)
{
    if (glfwInit() != GL_TRUE)
    {
        throw std::runtime_error("GLFW can not init");
    }

    initedGLFW = true;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, major);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, minor);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);
}

void ng::AppInit::initGLEW()
{
    glewExperimental = GL_TRUE;
    if (glewInit() != GLEW_OK)
    {
        throw std::runtime_error("GLEW can not init");
    }

    initedGLEW = true;
}
