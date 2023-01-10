#include <unistd.h>

/**
 * _putchar - a function
 * @c: prototype
 * Return: return 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
