#pragma once

#include <string>

#include "IObject.h"
#include "Snake.h"

class Field
{
private:
	int size;
	std::vector<IObject*> objects;
	char** map;
public:
	Field(int SIZE);
	~Field();

	char** UpdateMap();
};

