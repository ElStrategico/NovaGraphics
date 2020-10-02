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

	if (window == nullptr)
	{
		throw std::runtime_error("Window can not create");
	}

	glfwMakeContextCurrent(window);
	glfwSetKeyCallback(window, EventController::keyController);

	if (!AppInit::initedGLEW) AppInit::initGLEW();

	glViewport(0, 0, windowMode.getWidth(), windowMode.getHeight());
}

bool ng::Window::isOpen()
{
	return !glfwWindowShouldClose(window);
}

bool ng::Window::pollEvent(Event& event)
{
	glfwPollEvents();

	if (!PollEvent::exists(window)) return false;

	event = PollEvent::pop(window);

	return true;
}

void ng::Window::display()
{
	glfwSwapBuffers(window);
}