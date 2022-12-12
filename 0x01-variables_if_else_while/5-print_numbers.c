#include <stdio.h>
/**
 * main - prints all single digit numbers of base ten from 0
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	putchar('\n');
	return (0);
}
