#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width
 * @height: height
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ei;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ei = malloc(sizeof(int *) * height);
	if (ei == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ei[i] = malloc(sizeof(int) * width);
		if (ei[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ei[i]);
			free(ei);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ei[i][j] = 0;
	}
	return (ei);
}
