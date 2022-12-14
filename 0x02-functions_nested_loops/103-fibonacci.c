#include <stdio.h>

/**
 * main -printing sum of even valued terms
 *
 * Return: 0 (suceess)
 */

int main(void)
{
	int n =0;
	long m + 1, k = 2, sum =k;

	while (k + m < 4000000)
	{
	k += m;
	if (k % 2== 0)
	sum += k;
	m = k - m;
	++n;
	}
	printf("%ld\n", sum);
	return (0);
}
