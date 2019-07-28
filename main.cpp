#include<iostream>
#include<sstream>
#include<string>
#include "Field.h"

#define MAP_SIZE 20

using namespace std;

int main()
{
	ostringstream oss;

	Field field(MAP_SIZE);
	char** map = field.UpdateMap();
	for (int i = 0;i< MAP_SIZE;i++)
	{
		//string currStr = "";
		//currStr.append(map[i]);
		//cout << currStr << endl;
		oss << map[i] << endl;
	}
	cout << oss.str();
	cin.get();
}