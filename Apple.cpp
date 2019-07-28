#include "Apple.h"
#include "Snake.h"


Apple::Apple()
{
	XY head = newCell();
	body.push_back(head);
}

Apple::~Apple()
{
	

}

char Apple::GetSymbol() { return 'o'; }

bool Apple::Collide(IObject *second)
{
	return true;
}

std::vector<XY>& Apple::GetShape()
{
	return body;
}

XY Apple::newCell()
{
	srand(time(NULL));
	return {rand() % MAP_SIZE, rand() % MAP_SIZE};	
}