#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that multiplies two numbers.
 * @m: prototype
 * @n: prototype
 * Return: return 0 (success)
 */
int main(int m, char *n[])
{
	int index, multiplication;

	multiplication = 1;
	if (m < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < m; index++)
	{
		multiplication = multiplication * atoi(n[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}
