#pragma once

#include <string>

#include "Apple.h"
#include "IObject.h"
#include "Snake.h"

class Field
{
private:
	int size;

	Snake* s; // я знаю, что это варварство

	std::vector<IObject*> objects;
	char** map;
public:
	Field(int SIZE);
	~Field();

	char** UpdateMap();


};