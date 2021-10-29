#pragma once

enum SquareType{Empty, Snake, Food};

class Map
{
public:
	int level[20][20];
	const int mapLength = 20;

	Map();

private:
	void PopulateMap();
};