#include "main.h"

/**
 * _isdigit - checks numbers 0 - 9
 * @c: number to check
 * Return: return 0 (success)
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	return (1);
	else
	return (0);
}
