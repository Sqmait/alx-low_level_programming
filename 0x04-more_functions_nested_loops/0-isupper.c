#include "main.h"

/**
 * _iseupper - checks for uppercase character.
 * @c: Character to be checked
 *
 * Return: return 0 (success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
