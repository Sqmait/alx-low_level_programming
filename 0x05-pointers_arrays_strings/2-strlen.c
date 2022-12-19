#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s: character string
 *
 * Return: return 0 (success)
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
