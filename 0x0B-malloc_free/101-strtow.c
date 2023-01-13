#include <stdlib.h>
#include <stdio.h>
/**
 * wordnos - Write a function that splits a string into words.
 * @s: prototype
 * Return: return 0 (success)
 */
int wordnos(char *s)
{
	int not, m, k;

	not = 0;
	k = 0;

	for (m = 0; s[m] != '\0'; c++)
	{
		if (s[m] == ' ')
			not = 0;
		else if (not == 0)
		{
			not = 1;
			k++;
		}
	}

	return (k);
}
/**
 * **strtow - file
 * @str: prototype
 * Return: return 0 (success)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, w = 0, len = 0, words, m = 0, start, end;

	while (*(str + len))
		len++;
	words = wordnos(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words +1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (m + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - m;
				k++;
				c = 0;
			}

		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
