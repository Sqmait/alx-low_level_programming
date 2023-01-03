#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: segment
 * @accept: consist only of bytes
 * Return: return 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, o;

	for (o = 0; *(s + o); o++)
	{
		for (m = 0; *(accept + m); m++)
		{
			if (*(s + o) == *(accept + m))
				break;
		}
	if (*(accept + m) == '\0')
		break;
	}
	return (o);
}
