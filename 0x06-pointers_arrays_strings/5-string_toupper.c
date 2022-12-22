#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters.
 * @s: prototype
 * Return: return 0 (success)
 */
char *string_toupper(char *m)
{
	int n = 0;

	while (*(m + n) != '\0')
	{
		if ((*(m + n) >= 97) && (*(m + n) <= 122))
			*(m + n) = *(m + n) - 32;
		n++;
	}
	return (m);
}
