//@Author: Teodor Tysklind // Teodor.Tysklind@FutureGames.nu
#pragma once

#include <SDL.h>
#include "map.h"

//Screen dimension constants
const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;

class Window
{
public:
	Window();
	~Window();

	void InitializeWindow();
	void DrawMap();

private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	SDL_Texture* texture = NULL;
	SDL_Surface* screenSurface = NULL;

};