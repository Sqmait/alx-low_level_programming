#include "main.h"

/**
 * main i- prints the alphabet, in lowercase, followed by a new line.
 * Return: return 0 (success)
 */

void print_alphabet(void)

{
	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
