#pragma once

#include <stdexcept>

#include <Core/GL.hpp>

namespace ng
{
	class AppInit
	{
	public:
		static bool initedGLFW;
		static bool initedGLEW;

		static void initGLFW(int major = 3, int minor = 3);
		static void initGLEW();
	};
}