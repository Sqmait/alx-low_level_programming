#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: character
 * Return: return 0 (success)
 */
void print_square(int size)
{
	int e;
	int m;

	if (size > 0)
	{
	for (e = 0; e < size; e++)
	{

	for (m = 0; m < size; m++)
	{
	_putchar (35);
	}
	_putchar ('\n');

	}

	}

	else
	{
	_putchar ('\n');
	}

}
