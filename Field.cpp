#include "Field.h"

using namespace std;

Field::Field(int SIZE)
{
	size = SIZE;
	Snake* severus = new Snake();
	objects.push_back(severus);
	map = new char*[size];
	for (int i = 0; i < size; i++)
	{
		map[i] = new char[size];
		for (int j = 0; j < size; j++)
		{
			map[i][j] = '#';
		}
	}
}


Field::~Field()
{
	for (IObject* ob : objects)
	{
		delete ob;
	}
}

char** Field::UpdateMap()
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			map[i][j] = '#';
		}
	}
	for (IObject* ob : objects)
	{
		std::vector<XY> shape = ob->GetShape();
		char sym = ob->GetSymbol();

		for (XY coords : shape)
		{
			map[coords.x][coords.y] = sym;
		}
	}
	return map;
}