#include "main.h"

/**
 * _isdigit - checks numbers 0 - 9
 * @c: number to check
 * Return: return 0 (success)
 */

int _isdigit(int c)
{
	int start = 48, end =57;

	if (c >= start && c <= end)
		return (1);
	return (0);
}
