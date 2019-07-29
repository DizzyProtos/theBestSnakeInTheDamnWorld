#pragma once

#include <string>

#include "Apple.h"
#include "IObject.h"
#include "Snake.h"

class Field
{
private:
	int size;

	Snake* s; // � ����, ��� ��� ����������

	std::vector<IObject*> objects;
	char** map;
public:
	Field(int SIZE);
	~Field();

	char** UpdateMap();


};

