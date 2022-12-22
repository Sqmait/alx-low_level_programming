#include "main.h"

/**
 * _strncat - similar to the _strcat function,
 * @dest: return a pinter to the resulting string
 * @src: does not need to be null-terminated
 * @n: bytes
 * Return: return 0 (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
