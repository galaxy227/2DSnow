#include "Snow.h"

void Snow::AddSnow(Map& map, int count)
{
	for (int i = 0; i < count; i++)
	{
		int x = rand() % map.GetSize();
		int y = 0;

		map.TileArray[x][y].Icon = SnowIcon;
	}
}
void Snow::PlaySnow(Map& map)
{
	// Add snow
	int snowCount = 2;
	AddSnow(map, snowCount);

	// Animate snow
	for (int y = map.GetSize() - 1; y >= 0; y--)
	{
		for (int x = map.GetSize() - 1; x >= 0 ; x--)
		{
			if (map.TileArray[x][y].Icon == SnowIcon) // If snow
			{
				map.TileArray[x][y].Icon = map.GetDefaultIcon();

				int val = rand() % 3; // 0, 1, 2

				if (val == 0 && map.IsValidBound(x, y + 1)) // Move straight down
				{
					map.TileArray[x][y + 1].Icon = SnowIcon;
				}
				else if (val == 1 && map.IsValidBound(x - 1, y + 1)) // Move left down
				{
					map.TileArray[x - 1][y + 1].Icon = SnowIcon;
				}
				else if (val == 2 && map.IsValidBound(x + 1, y + 1)) // Move right down
				{
					map.TileArray[x + 1][y + 1].Icon = SnowIcon;
				}
			}
		}
	}
}