#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all arguments it receives.
 * @m: prototype
 * @n: prototype
 * Return: return 0 (success)
 */
int main(int m, char *n[])
{
	int o;

	for (o = 0; o < m; o++)
	{
		printf("%s\n", n[o]);
	}
	return (0);
}
