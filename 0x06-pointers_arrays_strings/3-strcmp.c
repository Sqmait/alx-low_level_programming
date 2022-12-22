#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: prototype
 * @s2: prototype
 * Return: return 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int m = 0, diff = 0;

	while (1)
	{
		if (s1[m] == '\0' && s2[m] == '\0')
			break;
		else if (s1[m] == '\0')
		{
			diff = s2[m];
			break;
		}
		else if (s2[m] == '\0')
		{
			diff = s1[m];
			break;
		}
		else if (s1[m] != s2[m])
		{
			diff = s1[m] - s2[m];
			break;
		}
		else
			m++;
	}
	return (diff);
}
