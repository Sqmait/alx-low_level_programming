#include "main.h"

/**
 * Print_numbers - prints the numbers, from 0 to 9
 * Return: return 0 (success)
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
