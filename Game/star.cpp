#include "star.h"

Star::Star(Window &window) : Entity(window)
{

};

int Star:: getX()
{
	return _x;
};

int Star::getY()
{
	return _y;
};

void Star::setX(int x)
{
	_x = x;
};

void Star::setY(int y)
{
	_y = y;
};

