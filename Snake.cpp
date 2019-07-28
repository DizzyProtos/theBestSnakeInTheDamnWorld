#include "Snake.h"



Snake::Snake()
{
	XY head = { 5, 5 };
	body.push_back(head);
}

Snake::~Snake()
{
}

char Snake::GetSymbol()  { return 'z'; }

bool Snake::Collide(IObject *second)
{
	return true;
}

std::vector<XY>& Snake::GetShape()
{
	return body;
}