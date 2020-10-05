#pragma once

#include <vector>

#include <Core/GL.hpp>

namespace ng
{
	class VBO
	{
	private:
		GLuint vbo;
		std::vector<float> vertexs;
	public:
		VBO(const std::vector<float>& vertexs, GLenum usage = GL_STATIC_DRAW);
		~VBO();

		void setVertexs(const std::vector<float>& vertexs, GLenum usage = GL_STATIC_DRAW);

		int getVertexsSize();

		void bind();
		void unbind();
	};
}