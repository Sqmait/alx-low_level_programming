#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees..
 * @grid:prototype
 * @height: prototype
 * Return: return 0 (success)
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
