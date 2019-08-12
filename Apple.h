#pragma once

#include<cstdlib>
#include<ctime>

#include "IObject.h"

class Apple : public  IObject
{
private:
	std::vector<XY> body;
	
public:
	Apple(int mapSize);
	~Apple();

	char GetSymbol() override;
	bool Collide(IObject *second) override;
	std::vector<XY>& GetShape() override;

	// возвращает рандомную клетку поля от 0 до mapSize
	// не гарантирует, что клетка не занята другим объектом
	XY newCell(int mapSize);
};
