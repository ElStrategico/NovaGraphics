#include "ShaderProgram.hpp"

ng::ShaderProgram::ShaderProgram()
{
	shaderProgram = glCreateProgram();
}

void ng::ShaderProgram::use()
{
	glUseProgram(shaderProgram);
}

void ng::ShaderProgram::attach(Shader& shader)
{
	glAttachShader(shaderProgram, shader.getDescriptor());
}

void ng::ShaderProgram::link()
{
	glLinkProgram(shaderProgram);
}
