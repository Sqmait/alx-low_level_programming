#include "main.h"

/**
 * _isdigit - checks numbers 0 - 9
 * @c: number to check
 * Return: returns 1 if c is a digit and returns 0 otherwise
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')

		return (1);
	else
		return (0);
}
