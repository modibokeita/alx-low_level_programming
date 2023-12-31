#include "main.h"
#include <stdlib.h>
/**
  * free_grid - frees a 2 dimensional grid previously created
  * by alloc_grid function
  * @grid: array
  * @height: height of array
  * Return: 0
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
