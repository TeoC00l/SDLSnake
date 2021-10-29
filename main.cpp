//@Author: Teodor Tysklind // Teodor.Tysklind@FutureGames.nu

#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <stdio.h>
#include "map.h"

//Screen dimension constants
const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;


int main(int argc, char* args[])
{
	Map map;

	SDL_Window* window = NULL;

	SDL_Surface* screenSurface = NULL;

	if(SDL_Init(SDL_INIT_VIDEO) < 0 )
	{
		printf( "SDL could not initialize! SDL_ERROR %s\n", SDL_GetError());
	}
	else
	{
		window = SDL_CreateWindow
			( 
				"Teo = Cool", 
				SDL_WINDOWPOS_UNDEFINED, 
				SDL_WINDOWPOS_UNDEFINED,
				SCREEN_WIDTH,
				SCREEN_HEIGHT,
				SDL_WINDOW_SHOWN
			);

		if( window == NULL )
        {
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
        }
        else
        {
            //Get window surface
            screenSurface = SDL_GetWindowSurface( window );

            //Fill the surface white
            SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
            
            //Update the surface
            SDL_UpdateWindowSurface( window );

            //Wait two seconds
            SDL_Delay( 2000 );
        }    
    }



	//Destroy window
    SDL_DestroyWindow( window );

    //Quit SDL subsystems
    SDL_Quit();

    return 0;
}