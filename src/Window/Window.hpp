#pragma once

#include <string>
#include <stdexcept>

#include <Core/GL.hpp>
#include <Core/AppInit.hpp>
#include <Window/WindowMode.hpp>

#include <EventSystem/Event.hpp>
#include <EventSystem/EventController.hpp>

namespace ng
{
	class Window
	{
	private:
		WindowMode windowMode;
		std::string title;

		GLFWwindow* window;
	public:
		Window(WindowMode& windowMode, const std::string& title);

		bool isOpen();

		bool pollEvent(Event& event);

		void display();
	};
}