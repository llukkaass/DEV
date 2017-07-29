#include <stdlib.h>
#include <stdio.h>
#include <SDL2/SDL.h>

int	main(int argc, char const *argv[])
{
		SDL_Init(SDL_INIT_VIDEO);
	/*if (SDL_Init(SDL_INIT_VIDEO) == -1)
	{
		fprintf(stderr, "Erreur: %s \n",SDL_GetError());
		exit(EXIT_FAILURE);
	}*/
	SDL_SetVideoMode(1000,800,32,SDL_HWSURFACE | SDL_NOFRAME | SDL_DOUBLEBUF);
	delay(10000);
    SDL_Quit();

	return EXIT_SUCCESS;
}