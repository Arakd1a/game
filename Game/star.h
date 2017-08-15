#pragma once
#include "entity.h"

class Star : public Entity
{
	

public:
	Star(Window &window, int x, int y);
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);

private:
	int _x, _y;

};


