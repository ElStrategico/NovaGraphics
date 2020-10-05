#include "Shader.hpp"

ng::Shader::Shader(GLenum type, const std::string& source)
{
	shader = glCreateShader(type);
	
	setSource(source);
}

ng::Shader::~Shader()
{
	deleteShader();
}

GLuint ng::Shader::getDescriptor()
{
	return shader;
}

void ng::Shader::setSource(const std::string& source)
{
	const char* cSource = source.c_str();
	glShaderSource(shader, 1, &cSource, NULL);
}

void ng::Shader::compile()
{
	glCompileShader(shader);
}

void ng::Shader::deleteShader()
{
	glDeleteShader(shader);
}
