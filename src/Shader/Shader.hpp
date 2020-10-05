#pragma once

#include <string>

#include <Core/GL.hpp>

namespace ng
{
	class Shader
	{
	private:
		GLuint shader;
	public:
		Shader(GLenum type, const std::string& source);
		~Shader();

		GLuint getDescriptor();

		void setSource(const std::string& source);

		void compile();

		void deleteShader();
	};
}