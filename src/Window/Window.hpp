#pragma once

#include <string>
#include <vector>
#include <stdexcept>

#include <Core/GL.hpp>
#include <Core/AppInit.hpp>
#include <Core/IDrawable.hpp>
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

		std::vector<IDrawable*> drawQueue;
	public:
		Window(WindowMode& windowMode, const std::string& title);

		bool isOpen();

		bool pollEvent(Event& event);

		void draw(IDrawable* drawable);

		void display();
	};
}