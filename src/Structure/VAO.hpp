#pragma once

#include <vector>

#include <Core/GL.hpp>
#include <Structure/VBO.hpp>

namespace ng
{
	class VAO
	{
	private:
		GLuint vao;
		std::vector<VBO> VBOs;
	public:
		VAO();
		~VAO();

		void addVBO(VBO& vbo);

		void bind();
		void unbind();
	};
}