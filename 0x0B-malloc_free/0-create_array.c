#include "main.h"
#include <stdlib.h>

/**
 * create_array -  a function that creates an array of chars, and in...
 * @size: prototype
 * @c: prototype
 * Return: return 0 (success)
 */

char *create_array(unsigned int size, char c)
{
	char *create_array;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}

	create_array = malloc(sizeof(char) * size);

	if (create_array == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		create_array[n] = c;
	}

	return (create_array);
}
