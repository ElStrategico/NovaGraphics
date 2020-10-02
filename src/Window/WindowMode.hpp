#pragma once

#include <stdint.h>

namespace ng
{
	class WindowMode
	{
	private:
		uint32_t width;
		uint32_t height;
	public:
		WindowMode() {}
		WindowMode(uint32_t width, uint32_t height);

		uint32_t getWidth();
		uint32_t getHeight();
	};
}