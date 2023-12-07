#ifndef MAP_H
#define MAP_H

#include "Tile.h"

class Map
{
public:
	Tile** TileArray;

	Map(int seed, int size, char defaultIcon);

	int GetSeed() { return seed; }
	int GetSize() { return size; }
	char GetDefaultIcon() { return defaultIcon; }

	void DisplayMap();
	void ResetMap();
	bool IsValidBound(int x, int y);
private:
	int seed;
	int size;
	char defaultIcon;

	void GenerateMap();
};

#endif