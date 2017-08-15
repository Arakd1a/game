#include "window.h"
#include "star.h";
#include <iostream>;

void pollEvents(Window &window) // Rect &rect
{
	SDL_Event event;
	if (SDL_PollEvent(&event))
	{
		window.pollEvents(event);
	}
}

int main(int argc, char **argv)
{
	Window window("Game in C++", 800, 600);
	while (!window.isClosed())
	{	
		pollEvents(window); //rect
		window.clear();
	}
	return 0;
}