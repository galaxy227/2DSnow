#include "Point.h"

#include <iostream>
using std::to_string;

Point::Point(int x, int y) : x(x), y(y) { }

std::string Point::GetCoordinate() const
{
	return "(" + to_string(x) + ", " + to_string(y) + ")"; 
}