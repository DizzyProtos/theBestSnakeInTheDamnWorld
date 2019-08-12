#include "Snake.h"



Snake::Snake() : nowDir(right)
{
	XY head = { 5, 5 };
	body.push_back(head);
}

Snake::~Snake()
{
}

char Snake::GetSymbol()  { return SNAKE_SYM; }

bool Snake::Collide(IObject *second)
{
	return true;
}

std::vector<XY>& Snake::GetShape() { return body; }

bool Snake::HandleKey(short keyCode)
{
	switch (keyCode)
	{
	case 12:
		break;
	}
}

moving Snake::isDirection() { return nowDir; }
void Snake::setDirection(moving newDir) { nowDir = newDir; }


void Snake::_step(moving dir)
{
	std::vector<XY> tmp;
	XY head = body[0];
	
	switch (dir)
	{
	case up:
		head.x++;
		break;
	case down:
		head.x--;
		break;
	case right:
		head.y++;
		break;
	case left:
		head.y--;
		break; 
	}
	tmp.push_back(head);
	for (auto i = body.begin(); i < body.end() - 1; i++)
		tmp.push_back(*i);
	body.swap(tmp);
}

void Snake::step(moving dir) { return _step(dir); }
void Snake::step() { return _step(isDirection()); }


