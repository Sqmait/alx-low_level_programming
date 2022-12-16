#include "main.h"

/**
 * _isdigit - checks numbers 0 - 9
 * @c: number to check
 * Return: returns 1 if c is a digit and returns 0 otherwise
 */

int _isdigit(int c)

{
	if ((c >= 48) && (c <= 57))

		return (1);

		return (0);
}
