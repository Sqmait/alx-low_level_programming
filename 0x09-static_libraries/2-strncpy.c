#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: prototype
 * @src: prototype
 * @n: number
 * Return: return 0 (suuccess)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[m] = src[m];

	for ( ; m < n; m++)
		dest[m] = '\0';

	return (dest);
}
