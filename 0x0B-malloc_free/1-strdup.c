#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Write a function that returns a pointer to a newly allocated...
 * @str: prototype
 * Return: return 0 (success)
 */
char *_strdup(char *str)
{
	char *i;
	unsigned int m, n;

	if (str == NULL)
	{
		return (NULL);
	}

	m = 0;
	while (str[m] != '\0')
	{
		m++;
	}

	i = malloc(sizeof(char) * (m + 1));

	if (i == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < m; n++)
	{
		i[n] = str[n];
	}
	i[m] = '\0';
	return (i);
}
