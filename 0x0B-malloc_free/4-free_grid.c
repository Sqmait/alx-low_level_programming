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
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
