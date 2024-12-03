#include "SDL.h"

int main(int argc, char* argv[])
{
	SDL_Init(SDL_INIT_EVERYTHING); // initialise sdl

	// create a window
	SDL_Window* window = SDL_CreateWindow("title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);

	// we need a renderer
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

	// set SDL rendered draw color, green
	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

	// in order to draw color, we need to clear the screen
	SDL_RenderClear(renderer);

	// present the renderer
	SDL_RenderPresent(renderer);

	// let's give a bit of a delay so we can see what is on the screen
	SDL_Delay(3000);

	return 0;
}