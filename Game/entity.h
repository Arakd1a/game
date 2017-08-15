#pragma once
#include "window.h"

class Entity : public Window
{

public:
	Entity(Window &window);
	virtual void draw() const;
	virtual void pollEvents(SDL_Event &event);
	
protected:
	SDL_Window *_window = nullptr;

};
