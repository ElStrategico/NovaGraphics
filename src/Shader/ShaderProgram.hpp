#pragma once

#include <Core/GL.hpp>
#include <Shader/Shader.hpp>

namespace ng
{
	class ShaderProgram
	{
	private:
		GLuint shaderProgram;
	public:
		ShaderProgram();

		void use();

		void attach(Shader& shader);

		void link();
	};
}