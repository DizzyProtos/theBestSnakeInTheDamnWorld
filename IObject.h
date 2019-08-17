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
private:
	float elapsedTime;

public:
	virtual bool Collide(IObject *second) = 0;
	virtual char GetSymbol() = 0;
	virtual std::vector<XY>& GetShape() = 0;
	virtual bool HandleKey(short keyCode)
	{
		return false;
	}
	//virtual ~IObject() = 0;

	virtual void SetTime(float elTime)
	{
		elapsedTime = elTime;
	}
};

