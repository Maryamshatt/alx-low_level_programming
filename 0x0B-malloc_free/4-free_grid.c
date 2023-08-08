#include "main.h"

/**
 * free_grid - frees 2 dim array
 * @grid: 2 dim grid
 * @height: height dimention of grid
 * Description: frees memory of grid
 * Return: nothing
 *
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
