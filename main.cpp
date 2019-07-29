#include<iostream>
#include<sstream>
#include<string>
#include "Field.h"

int MAP_SIZE = 20;

using namespace std;


void paint(Field& field)
{
	ostringstream oss;
	char** map = field.UpdateMap();

	for (int i = 0; i < MAP_SIZE; i++)
		oss << map[i] << endl;
	cout << oss.str();
	cout << endl;
}

int main()
{
	Field field(MAP_SIZE);

	paint(field);
	cin.get();
	paint(field);
	cin.get();	
	paint(field);
	cin.get();
}