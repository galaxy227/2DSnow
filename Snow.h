#ifndef SNOW_H
#define SNOW_H

#include "Map.h"

namespace Snow
{
	char const SnowIcon = '*';

	void PlaySnow(Map& map);
	void AddSnow(Map& map, int count);
}

#endif