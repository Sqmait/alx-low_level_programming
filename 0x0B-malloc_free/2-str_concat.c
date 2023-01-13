#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: prototype
 * @s2: prototype
 * Return: return 0 (success)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int m, n, o, p, q;
	char *i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = 0;
	while (s1[m] != '\0')
		m++;
	n = 0;
	while (s2[n] != '\0')
		n++;

	o = m + n;

	i = malloc((sizeof(char) * o)  + 1);

	if (i == NULL)
		return (NULL);

	p = 0;
	while (p < m)
	{
		i[p] = s1[p];
		p++;
	}
	q = 0;
	while (p <= o)
	{
		i[p] = s2[q];
		p++;
		q++;
	}
	return (i);
}
