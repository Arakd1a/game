#include "window.h"


int main(int argc, char **argv)
{
	Window window("Game in C++", 800, 600);
	SDL_ShowCursor(SDL_DISABLE);
	while (!window.isClosed())
	{
		window.pollEvents();
		window.clear();
	}
	return 0;
}