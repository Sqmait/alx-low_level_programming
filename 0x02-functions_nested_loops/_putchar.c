#include <unistd.h>

/**
 * main - prints _putchar
 *
 * Returns: returns 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
