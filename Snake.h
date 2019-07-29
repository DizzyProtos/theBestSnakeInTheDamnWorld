#pragma once
#include "IObject.h"

enum moving {up, down, right, left};

class Snake : public  IObject
{
private:
	
	std::vector<XY> body;

	moving nowDir;
	/*typedef struct Head
	{
		int x;
		int y;
	} head;*/

	void _step(moving dir);
public:
	Snake();
	~Snake();
	
	void addCell();

	char GetSymbol() override;
	bool Collide(IObject *second) override;
	std::vector<XY>& GetShape() override;

	moving isDirection();
	void setDirection(moving newDir);

	void step(moving dir);
	void step();
};
