#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: Prototype:
 * @src: Prototype:
 * @n: Prototype:
 * Return: return 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
