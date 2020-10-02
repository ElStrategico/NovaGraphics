#pragma once

#include <string>

#include <Core/GL.hpp>
#include <Core/AppInit.hpp>
#include <Window/WindowMode.hpp>

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
		Window(uint32_t widht, uint32_t height, const std::string title);

		bool isOpen();

		void display();
	};
}