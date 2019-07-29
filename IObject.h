#pragma once

#include <vector>

#define SNAKE_SYM 'z'
#define APPLE_SYM 'o'
#define FIELD_SYM '*'

struct XY
{
	int x;
	int y;
};

class IObject
{
public:
	virtual bool Collide(IObject *second) = 0;
	virtual char GetSymbol() = 0;
	virtual std::vector<XY>& GetShape() = 0;
	//virtual ~IObject() = 0;
};

