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

	// ���������� ��������� ������ ���� �� 0 �� MAP_SIZE
	// �� �����������, ��� ������ �� ������ ������ ��������
	XY newCell();
};
