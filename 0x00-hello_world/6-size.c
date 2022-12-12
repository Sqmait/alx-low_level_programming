#include <stdio.h>
/**
 * main - printing
 *
 * Return: return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Sizeof a long int: %lu byte(S)", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(S)", (unsigned long)sizeof(d));
	printf("Size of a float: %lu bytes(S)\n", (unsigned long)sizeof(f));
	return (0);
}
