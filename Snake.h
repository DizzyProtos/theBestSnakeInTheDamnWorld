#pragma once
#include "IObject.h"

class Snake : public  IObject
{
private:
	enum nextCell { up, down, right, left};
	
	int lenght;
	
	std::vector<XY> body;

	/*typedef struct Head
	{
		int x;
		int y;
	} head;*/
public:
	Snake();
	~Snake();
	
	void addCell();
	
	int getLenght();
	
	char GetSymbol() override;
	bool Collide(IObject *second) override;
	std::vector<XY>& GetShape() override;
};
