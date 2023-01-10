#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s:Prototype
 * @b:Prototype
 * @n:Prototype
 * Return: return 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		*(s + m) = b;
		m++;
	}
	return (s);
}
