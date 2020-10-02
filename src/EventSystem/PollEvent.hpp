#pragma once

#include <map>
#include <vector>

#include <Core/GL.hpp>
#include <EventSystem/Event.hpp>

using Poll = std::map<GLFWwindow*, std::vector<ng::Event>>;

namespace ng
{
	class PollEvent
	{
	private:
		static Poll* poll;
	public:
		static bool exists(GLFWwindow* window);

		static Event pop(GLFWwindow* window);
		static void push(GLFWwindow* window, Event& event);
	};
}