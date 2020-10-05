#include "VAO.hpp"

ng::VAO::VAO()
{
	glGenVertexArrays(1, &vao);
	bind();
}

ng::VAO::~VAO()
{
	unbind();
}

void ng::VAO::addVBO(VBO& vbo)
{
	vbo.bind();

	glVertexAttribPointer(
		VBOs.size(), 
		vbo.getVertexsSize(), 
		GL_FLOAT, 
		GL_FALSE, 
		vbo.getVertexsSize() * sizeof(GLfloat),
		nullptr
	);

	vbo.unbind();

	VBOs.push_back(vbo);
}

void ng::VAO::bind()
{
	glBindVertexArray(vao);
}

void ng::VAO::unbind()
{
	glBindVertexArray(0);
}