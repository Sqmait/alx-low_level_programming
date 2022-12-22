#include "main.h"
/**
 * leet - encodiing a string
 *@n: prototype
 *Return: return 0 (success)
 */

char *leet(char *n)
{
	int m, o;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; n[m] != '\0'; m++)
	{
		for (o = 0; o < 10; o++)
		{
			if (n[m] == s1[o])
			{
				n[m] = s2[o];
			}
		}
	}
	return (n);
}
