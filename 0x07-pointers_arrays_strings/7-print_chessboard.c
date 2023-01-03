#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: Prototype:
 * Return: return 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
