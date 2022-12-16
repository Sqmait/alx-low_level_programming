#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: Character
 * Return: return 0 (success)
 */
void print_diagonal(int n)
{
	int e;
	int d;

	if (n > 0)
	{
	for (e = 0; e < n; e++)
	{
	for (d = 0; d < e; d++)
	{
	_putchar (' ');
	}
	_putchar (92);
	_putchar ('\n');

	}

	}


	else
	{
	_putchar ('\n');
	}
}
