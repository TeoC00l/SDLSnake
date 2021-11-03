//@Author: Teodor Tysklind // Teodor.Tysklind@FutureGames.nu

#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <stdio.h>
#include "map.h"
#include "window.h"



int main(int argc, char* args[])
{
	if(SDL_Init(SDL_INIT_VIDEO) < 0 )
	{
		printf( "SDL could not initialize! SDL_ERROR %s\n", SDL_GetError());

		return 0;
	}

	Map map;

	Window window;

	window.InitializeWindow();

    //Wait two seconds
    SDL_Delay( 2000 );

    //Quit SDL subsystems
    SDL_Quit();

    return 0;
}