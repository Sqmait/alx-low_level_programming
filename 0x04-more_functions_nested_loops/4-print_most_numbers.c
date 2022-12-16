#include "main.h"
/**
 * print_most_numbers - Do not print 2 and 4
 *
 * Return: returns 0 (success)
 */
void print_most_numbers(void)
{
int n;
for (n = 48; n < 58; n++)
{
if ((n == 50) || (n == 52))
{
continue;
}
_putchar(n);
}
_putchar(10);
}


