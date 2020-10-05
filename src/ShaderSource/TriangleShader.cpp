#include "TriangleShader.hpp"

std::string ng::TriangleShader::vertexsShader()
{
    return "#version 330 core\n;"
           "layout (location = 0) in vec3 position;\n"
           "void main()\n"
           "{\n"
           "gl_Position = vec4(position.x, position.y, position.z, 1.0);\n"
           "}\n";
}

std::string ng::TriangleShader::fragmentShader()
{
    return "#version 330 core\n"
           "out vec4 color;\n"
           "void main()\n"
           "{\n",
           "color = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
           "}\n";
}
