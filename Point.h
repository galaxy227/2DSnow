#ifndef POINT_H
#define POINT_H

#include <string>
using std::string;

class Point
{
public:
	Point(int x, int y);

	int GetX() { return x; }
	int GetY() { return y; }

	std::string GetCoordinate() const;
private:
	int x;
	int y;
};

#endif