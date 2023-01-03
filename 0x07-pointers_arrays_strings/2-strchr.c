#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string
 * @c: Returns a pointer to the first occurrence of the character
 * Return: return 0 (success)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
