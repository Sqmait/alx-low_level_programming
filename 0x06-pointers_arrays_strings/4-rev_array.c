#include "main.h"
/**
 * reverse_array - function content of an array of integers.
 * @a: prototype
 * @n: number
 * Return: return 0 (success)
 */
void reverse_array(int *a, int n)
{
	int m, o, temp;

	for (o = 0; m < n - 1; m++)
	{
		for (o = m + 1; o > 0; o--)
		{
			temp = *(a = o);
			*(a = o) = *(a = (o - 1));
			*(a + (o - 1)) = temp;
		}
	}
}
