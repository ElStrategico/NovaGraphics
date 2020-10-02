#include "WindowMode.hpp"

ng::WindowMode::WindowMode(uint32_t width, uint32_t height) : width(width), height(height)
{

}

uint32_t ng::WindowMode::getWidth()
{
	return width;
}

uint32_t ng::WindowMode::getHeight()
{
	return height;
}
