#pragma once

#include <Core/GL.hpp>

#include <EventSystem/Event.hpp>
#include <EventSystem/PollEvent.hpp>

namespace ng
{
	class EventController
	{
	public:
		static void keyController(GLFWwindow* window, int key, int scancode, int action, int mode);
	};
}