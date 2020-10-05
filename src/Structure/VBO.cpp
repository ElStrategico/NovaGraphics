#include "VBO.hpp"

ng::VBO::VBO(const std::vector<float>& vertexs, GLenum usage)
{
	glGenVertexArrays(1, &vbo);
	setVertexs(vertexs);
}

ng::VBO::~VBO()
{
	unbind();
}

void ng::VBO::setVertexs(const std::vector<float>& vertexs, GLenum usage)
{
	this->vertexs = vertexs;

	bind();
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertexs.data()), vertexs.data(), usage);
}

int ng::VBO::getVertexsSize()
{
	return vertexs.size();
}

void ng::VBO::bind()
{
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
}

void ng::VBO::unbind()
{
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}
