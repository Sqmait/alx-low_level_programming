#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @n: first character
 * @m: second character
 *
 */
void swap_int(int *a, int *b);
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
