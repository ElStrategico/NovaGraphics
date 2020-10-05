#pragma once

#include <vector>

#include <Shape/Shape.hpp>
#include <Structure/VBO.hpp>
#include <Structure/VAO.hpp>
#include <Shader/Shader.hpp>
#include <Core/IDrawable.hpp>
#include <Shader/ShaderProgram.hpp>
#include <ShaderSource/TriangleShader.hpp>

namespace ng
{
	class Triangle : public Shape, public IDrawable
	{
	private:
		VAO vao;
		VBO position;
		ShaderProgram shaderProgram;
	public:
		Triangle(const std::vector<float>& vertexs);

		void draw() override;
	};
}