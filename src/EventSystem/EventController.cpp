#include "EventController.hpp"

void ng::EventController::keyController(GLFWwindow* window, int key, int scancode, int action, int mode)
{
	Event event;
	PollEvent::push(window, event);
}