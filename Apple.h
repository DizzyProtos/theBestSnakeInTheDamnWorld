#pragma once

#include<cstdlib>
#include<ctime>

#include "IObject.h"

extern int MAP_SIZE;

class Apple : public  IObject
{
private:
	
	std::vector<XY> body;

public:
	Apple();
	~Apple();

	char GetSymbol() override;
	bool Collide(IObject *second) override;
	std::vector<XY>& GetShape() override;

	// возвращает рандомную клетку поля от 0 до MAP_SIZE
	// не гарантирует, что клетка не занята другим объектом
	XY newCell();
};
