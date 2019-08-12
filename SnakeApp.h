#pragma once
#include "Field.h"
#include "olcConsoleGameEngine.h"

class SnakeApp : public olcConsoleGameEngine
{
private:
	Field field;
	int mapSize;
public:
	SnakeApp(int mapSize);
	~SnakeApp();

	// Унаследовано через olcConsoleGameEngine
	virtual bool OnUserCreate() override;
	virtual bool OnUserUpdate(float fElapsedTime) override;
};

