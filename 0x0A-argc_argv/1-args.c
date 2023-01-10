#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @m: prototype
 * @n: prototype
 * Return: return 0 (success)
 */
int main(int m, char *n[])
{
	printf("%d\n", m - 1);
	(void)n;
	return (0);
}
