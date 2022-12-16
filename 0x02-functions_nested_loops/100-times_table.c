#include <stdio.h>

/**
 * main - prints the n times table, starting from o.
 * Return: return 0 (success)
 */

void print_times_table(int n)

{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
