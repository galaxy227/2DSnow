#ifndef TILE_H
#define TILE_H

#include "Point.h"

class Tile
{
public:
	Point Coord;
	char Icon;

	Tile(Point coord = Point(0, 0), char c = '-');
private:

};

#endif