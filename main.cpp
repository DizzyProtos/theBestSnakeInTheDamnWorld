#include<iostream>
#include<sstream>
#include<string>
#include "SnakeApp.h"

int main()
{
	const int mapSize = 20;
	SnakeApp game(mapSize);
	// Create a console with resolution 160x100 characters
	// Each character occupies 8x8 pixels
	game.ConstructConsole(mapSize, mapSize, 16, 16);
	game.Start();
	return 0;
}
