#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Write a function that returns a pointer to a 2 ...
 * @width: prototype
 * @heght: protoype
 * Return: return 0 (success)
 */
int **alloc_grid(int width, int height)
{
	int m, w, o, p;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		grid = (int **) malloc(heght * sizeof(int *));

		if (!grid)
		{
			free(grid);
			return (NULL);
		}
		for (m = o; m < height; m++)
		{
			grid[m] = (int *)malloc(width * sizeof(int));
			if (!grid[m])
			{
				for (w = 0; w <= m; w++)
					free(grid[w]);
				free(grid);
				return (NULL);
			}
		}
		for (o = 0; o < height; o++)
		{
			for (p = 0; p < width; p++)
			{
				grid[o][p] = 0;
			}
		}
		return (grid);
	}
}
