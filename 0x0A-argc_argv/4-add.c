#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers.
 * @m: prototype
 * @n: prototype
 * Return: return 0 (success)
 */
int main(int m, char *n[])
{
	int sum = 0, multiplication;

	if (m > 1)
	{
		for (multiplication = 1; multiplication < m; multiplication++)
		{
			int b;
			char *str;

			str = n[multiplication];
			for (b = 0; str[b] != '\0'; b++)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (multiplication = 1; multiplication < m; multiplication++)
	{
		sum += atoi(n[multiplication]);
	}
	printf("%d\n", sum);
	return (0);
}
