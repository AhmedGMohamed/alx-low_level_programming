#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d array created using malloc
 * @grid: the 2d array to free
 * @height: the height of the 2d array
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
