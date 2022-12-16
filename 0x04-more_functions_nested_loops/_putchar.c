#include <unistd.h>

/**
 * _putchar - writes the character
 * @: Prints character
 * Return: return 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
