#include "PollEvent.hpp"

Poll* ng::PollEvent::poll = new std::map<GLFWwindow*, std::vector<ng::Event>>;

bool ng::PollEvent::exists(GLFWwindow* window)
{
    return poll->find(window) != poll->end() && !(*poll)[window].empty();
}

ng::Event ng::PollEvent::pop(GLFWwindow* window)
{
    Event event = (*poll)[window].front();
    (*poll)[window].erase((*poll)[window].begin());

    return event;
}

void ng::PollEvent::push(GLFWwindow* window, Event& event)
{
    if (poll->find(window) == poll->end())
    {
        (*poll)[window] = std::vector<Event>();
    }

    (*poll)[window].push_back(event);
}
