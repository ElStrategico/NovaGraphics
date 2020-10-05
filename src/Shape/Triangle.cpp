#include "Triangle.hpp"

ng::Triangle::Triangle(const std::vector<float>& vertexs) : position(vertexs)
{
	vao.addVBO(position);

	Shader vertexsShader(GL_VERTEX_SHADER, TriangleShader::vertexsShader());
	Shader fragmentShader(GL_FRAGMENT_SHADER, TriangleShader::fragmentShader());

	shaderProgram.attach(vertexsShader);
	shaderProgram.attach(fragmentShader);
	shaderProgram.link();
}

void ng::Triangle::draw()
{
	shaderProgram.use();
	vao.bind();
	glDrawArrays(GL_TRIANGLES, 0, 3);
	vao.unbind();
}