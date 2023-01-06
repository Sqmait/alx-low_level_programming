#include "main.h"

/**
 *  _pow_recursion - Write a function that returns the.....
 *  @x: prototype
 *  @y: prototype
 *  Return: return 0 (success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
