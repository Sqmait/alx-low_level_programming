#include "main.h"

/**
 * _strstr - unction finds the first occurrence of a substring
 * @haystack: string
 * @needle: substring
 * Return: return 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	char *strA, *strB;

	while (*haystack != '\0')
	{
		strA = haystack;
		strB = needle;

		while (*haystack != '\0' && *strA != '\0' && *haystack == *strB)
		{
			haystack++;
			strB++;
		}
		if (*strB == '\0')
			return (strA);
		haystack = strA + 1;
	}
	return (0);
}
