#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * @a: Prototype
 * @size: Prototype
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int m, size1;
	unsigned int sumDiag1, sumDiag2;

	size1 = 0;
	sumDiag1 = 0;
	sumDiag2 = 0;

	size1 = (size * size) - 1;

	for (m = 0; m <= size1; m = m + (size + 1))
	{
		sumDiag1 = sumDiag1 + a[m];
	}
	for (m = (size - 1); m < size1; m = m + (size - 1))
	{
		sumDiag2 = sumDiag2 + a[m];
	}
	printf("%d, %d\n", sumDiag1, sumDiag2);
}
