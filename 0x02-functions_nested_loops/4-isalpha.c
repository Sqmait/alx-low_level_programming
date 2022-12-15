#include "main.h"
/**
 * _isalpha - alphabetical charcter scanning
 * @c: the character to be checked
 * Returns: 1 for alphabetical character or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
