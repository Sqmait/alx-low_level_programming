#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * Return: return 0 (success)
 */

void more_numbers(void)
{
	int i, z;

	for (i = 0; i < 10; i++)
	{
	for (z = 0; z <= 14; z++)

	{
	if (z > 9)
	{
	_putchar((z / 10) + '0');
	}
	_putchar((z % 10) + '0');
	}
	_putchar(10);
	}
}
