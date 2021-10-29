//@Author: Teodor Tysklind // Teodor.Tysklind@FutureGames.nu

#include "map.h"

Map::Map()
{
	PopulateMap();
}

void Map::PopulateMap()
{
	for(int i = 0 ; i++ ; i < mapLength)
	{
		for(int j = 0 ; j++ ; j < mapLength)
		{
			level[i][j] = SquareType::Empty;
		}
	}
}