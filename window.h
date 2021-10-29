//@Author: Teodor Tysklind // Teodor.Tysklind@FutureGames.nu
#pragma once

#include <SDL.h>
#include "map.h"

class Window
{
public:
	Window();

	void InitializeWindow();
	void DrawMap();

private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	SDL_Texture* texture = NULL;
}