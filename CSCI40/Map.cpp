#include "Map.h"

#include <iostream>
using std::cout;
using std::endl;

Map::Map(int seed, int size, char defaultIcon) : seed(seed), size(size), defaultIcon(defaultIcon)
{
	srand(seed);
	GenerateMap();
}
void Map::DisplayMap()
{
	system("cls");

	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < size; x++)
		{
			cout << TileArray[x][y].Icon << " ";

			if (x == size - 1)
			{
				cout << endl;
			}
		}
	}
}
void Map::ResetMap()
{
	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < size; x++)
		{
			TileArray[x][y].Icon = defaultIcon;
		}
	}
}
bool Map::IsValidBound(int x, int y)
{
	if (x >= 0 && x < size && y >= 0 && y < size)
	{
		return true;
	}

	return false;
}
void Map::GenerateMap()
{
	TileArray = new Tile* [size]; // X array

	for (int i = 0; i < size; i++)
	{
		TileArray[i] = new Tile[size]; // Y array
	}

	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < size; x++)
		{
			TileArray[x][y] = Tile(Point(x, y), defaultIcon);
		}
	}
}