//@Author: Teodor Tysklind // Teodor.Tysklind@FutureGames.nu
#include <SDL.h>
#include <stdio.h>
#include "window.h"



Window::Window()
{

}

Window::~Window()
{
	if( window != nullptr)
	{
		SDL_DestroyWindow(window);
	}
}


void Window::InitializeWindow()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) == -1)
	{
		return;
	}


	window = SDL_CreateWindow
	(
		"Snake", 
		SDL_WINDOWPOS_UNDEFINED, 
		SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH,
		SCREEN_HEIGHT,
		SDL_WINDOW_SHOWN
	);


	SDL_Surface* screenSurface = NULL;
    screenSurface = SDL_GetWindowSurface( window );

    //Fill the surface white
    SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
         
    //Update the surface
    SDL_UpdateWindowSurface( window );   
}