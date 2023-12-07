#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>

#include "Map.h"
#include "Snow.h"
using Snow::PlaySnow;

#include "windows.h"

int main()
{
	int seed = 0;
	int size = 0;

	cout << "Enter Seed: " << endl;
	cin >> seed;
	cout << "Enter Size: " << endl;
	cin >> size;

	Map* map = new Map(seed, size, '-');

	while (true)
	{
		PlaySnow(*map);
		map->DisplayMap();
		Sleep(500);
	}
}
