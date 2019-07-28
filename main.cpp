#include<iostream>
#include<string>
#include "Field.h"

#define MAP_SIZE 6

using namespace std;

int main()
{
	Field field(MAP_SIZE);
	char** map = field.UpdateMap();
	for (int i = 0;i< MAP_SIZE;i++)
	{
		string currStr = "";
		currStr.append(map[i]);
		cout << currStr << endl;
	}
	cin.get();
}