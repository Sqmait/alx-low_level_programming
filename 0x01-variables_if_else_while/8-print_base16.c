#include <stdio.h>
/**
 * main - a programm that prints all the numbers and letters
 *
 * Return: return 0 (success0
 */
int main(void)
{
	char a;

	int n;

	a = 'p';
	n = 0;
	while
		(n < 10) {
			putchar(n + '0');
			n++;
		}
	while
		(a <= 'f') {
			putchar(a);
			a++;
		}
	putchar('\n');
	return (0);
}
