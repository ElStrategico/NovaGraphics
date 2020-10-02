#include "Window.hpp"

ng::Window::Window(WindowMode& windowMode, const std::string& title) : 
windowMode(windowMode), title(title)
{
	if (!AppInit::initedGLFW) AppInit::initGLFW();

	window = glfwCreateWindow(
		windowMode.getWidth(), 
		windowMode.getHeight(), 
		title.c_str(), 
		nullptr, 
		nullptr
	);
	glfwMakeContextCurrent(window);

	if (!AppInit::initedGLEW) AppInit::initGLEW();
}

ng::Window::Window(uint32_t widht, uint32_t height, const std::string title)
{
	WindowMode windowMode(widht, height);
	Window(windowMode, title);
}

bool ng::Window::isOpen()
{
	return !glfwWindowShouldClose(window);
}

void ng::Window::display()
{
	glfwSwapBuffers(window);
}