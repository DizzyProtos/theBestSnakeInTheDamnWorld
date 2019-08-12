#include "Field.h"

using namespace std;

Field::Field(int SIZE) : size(SIZE)
{
	Snake* severus = new Snake();
	s = severus; // да-да, костыли, жду предложений
	Apple* nyamnyam = new Apple(SIZE);
	objects.push_back(severus);
	objects.push_back(nyamnyam);
	map = new char*[size];
	for (int i = 0; i < size; i++)
	{
		map[i] = new char[size];
		for (int j = 0; j < size; j++)
		{
			map[i][j] = FIELD_SYM;
		}
		map[i][size] = '\0';
	}
}


Field::~Field()
{
	for (IObject* ob : objects)
		delete ob;


	for (int i = 0; i < size; i++)
		delete map[i];
	delete map;

}

char** Field::UpdateMap()
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			map[i][j] = FIELD_SYM;

	for (IObject* ob : objects)
	{
		std::vector<XY> shape = ob->GetShape();
		char sym = ob->GetSymbol();

		for (XY coords : shape)
			map[coords.x][coords.y] = sym;
	}
	return map;
}
