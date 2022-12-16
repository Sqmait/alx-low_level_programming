#include "main.h"

/**
 * main  - prints the alphabet, in lowercase, followed by a new line.
 * Return: return 0 (success)
 */

void print_alphabet(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
