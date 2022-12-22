#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @n: prototype
 * Return: return 0 (success)
 */
char *rot13(char *n)
{
	int m;
	int o;
	char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (m = 0; n[m] != '\0'; m++)
	{
		for (o = 0; o < 52; o++)
		{
			if (n[m] == data[o])
			{
				n[m] = datarot[o];
				break;
			}
		}
	}
	return (n);
}
