#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2 dimensional grid previously created by your alloc_grid function
  * @grid: It takes grid
  * @height: It takes height
  *
  * Return: Noting
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

