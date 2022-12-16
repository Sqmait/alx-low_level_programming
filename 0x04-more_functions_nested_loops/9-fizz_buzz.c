#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * Return: return 0 (success)
 */
int main(void)
{
	int g = 100;
	int f;

	f = 1;
	while (f <= g)
	{
	if (f % 3 == 0 && f % 5 == 0)
	{
	printf("FizzBuzz");
	}

	else if (f % 3 == 0)
	{
	printf("Fizz");
	}

	else if (f % 5 == 0)
	{
	if (f < g)
	printf("Buzz");

	else
	printf("Buzz");
	}
	else
	{
	printf("%i", f);
	}

	f++;

	}
	printf("\n");
	return (0);
}
