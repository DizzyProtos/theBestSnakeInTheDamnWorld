#include "SnakeApp.h"

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
