#include<iostream>
#include<sstream>
#include<string>
#include "olcConsoleGameEngine.h"
#include "Field.h"

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

using namespace std;

SnakeApp::SnakeApp(int mapSize) : field(mapSize)
{
	this->mapSize = mapSize;
}

SnakeApp::~SnakeApp()
{
}

bool SnakeApp::OnUserCreate()
{
	char** map = field.UpdateMap();
	for (int x = 0; x < mapSize; x++)
	{
		for (int y = 0; y < mapSize; y++)
		{
			Draw(x, y, map[x][y]);
		}
	}
	return true;
}

bool SnakeApp::OnUserUpdate(float fElapsedTime)
{
	return true;
}

int main()
{
	const int mapSize = 20;
	/*
	SnakeApp game(mapSize);
	// Create a console with resolution 160x100 characters
	// Each character occupies 8x8 pixels
	game.ConstructConsole(mapSize, mapSize, 16, 16);
	game.Start();
	*/
	return 0;
}
