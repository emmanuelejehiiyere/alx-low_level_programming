#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function frees 2 dimensional array
 * @grid: The grid parameter
 * @height: height parameter
 * Return: void (nothing)
 */
void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}
	free(grid);
}
