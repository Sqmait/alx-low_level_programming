#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of intergers
 * @a: array
 * @n: array
 * Return: return 0 (success)
 */
void print_array(int *a, int n)
{
	int i:

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
