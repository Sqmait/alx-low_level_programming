#include "main.h"

/**
 * Print_numbers - prints the numbers, from 0 to 9
 * Return: return 0 (success)
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
	_putchar (n + '0');
	n++;
	}

	_putchar ('\n');
}
