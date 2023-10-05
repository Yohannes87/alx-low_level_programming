#include <stdio.h>
#include <stdlib.h>

/**
*free_grid - adds positive numbers
*@grid: number of arguments
*@height: array of arguments
*Return: 0 on success, 1 on failure
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
