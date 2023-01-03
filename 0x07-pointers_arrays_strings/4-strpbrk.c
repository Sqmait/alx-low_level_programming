#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  a function that searches a string
 * @s: the byte
 * @accept: string
 * Return: return 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int m, o;

	for (m = 0; *(s + m); m++)
	{
		for (o = 0; *(accept + o); o++)
		{
			if (*(s + m) == *(accept + o))
			{
				break;
			}
		}
		if (*(accept + o) != '\0')
		{
			return (s + m);
		}
	}
	return (0);
}
