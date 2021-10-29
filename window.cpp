//@Author: Teodor Tysklind // Teodor.Tysklind@FutureGames.nu
#include "window.h"

Window::Window()
{

}

Window::InitializeWindow()
{
	window = SDL_CreateWindow
	(
		"Snake", 
		SDL_WINDOWPOS_UNDEFINED, 
		SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH,
		SCREEN_HEIGHT,
		SDL_WINDOW_SHOWN
	)

	if(window == NULL)
	{
		printf( "SDL Error: %s\n", SDL_GetError() );
	}

	
}