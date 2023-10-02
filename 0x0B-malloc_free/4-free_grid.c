#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2n array
 * @grid: 2n grid
 * @height: height dimension of grid
 * Description: frees memry of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}

