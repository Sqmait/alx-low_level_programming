#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @n: prototype
 * Return: return 0 (success)
 */
char *cap_string(char *n)
{
	int index = 0;

	while (n[++index])
	{
		while (!(n[index] >= 'a' && n[index] <= 'z'))
			index++;

		if (n[index - 1] == ' ' ||
				n[index - 1] == '\t' ||
				n[index - 1] == '\n' ||
				n[index - 1] == '.' ||
				n[index - 1] == ';' ||
				n[index - 1] == '.' ||
				n[index - 1] == '!' ||
				n[index - 1] == '?' ||
				n[index - 1] == '"' ||
				n[index - 1] == '(' ||
				n[index - 1] == ')' ||
				n[index - 1] == '{' ||
				n[index - 1] == '}')
			n[index] -= 32;
	}
	return (n);
}
