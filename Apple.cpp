#include "Apple.h"
#include "Snake.h"


Apple::Apple(int mapSize)
{
	XY head = newCell(mapSize);
	body.push_back(head);
}

Apple::~Apple()
{
	

}

char Apple::GetSymbol() { return APPLE_SYM; }

bool Apple::Collide(IObject *second)
{
	return true;
}

std::vector<XY>& Apple::GetShape()
{
	return body;
}

XY Apple::newCell(int mapSize)
{
	srand(time(NULL));
	return {rand() % mapSize, rand() % mapSize};
}