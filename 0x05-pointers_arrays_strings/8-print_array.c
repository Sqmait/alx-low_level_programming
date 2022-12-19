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
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
