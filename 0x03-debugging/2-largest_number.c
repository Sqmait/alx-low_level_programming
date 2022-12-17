#include "main.h"

/**
 * largest_number - prints out the largest of three numbers, no matter the case.
 * @a: first interger
 * @b: second interger
 * @c: thhird interger
 * Return: return 0 (success)
 */
int larges_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
	largest = a;
}
else if (c > b)
{
	largest = b;
}
else if (c > b)
{
	largest = c;
}
else
{
	largest = b;
}

return (largest);
}
