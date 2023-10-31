#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created.
 * @grid: The 2D grid to be freed.
 * @height: The height of the grid.
 *
 * Return: No return value.
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
