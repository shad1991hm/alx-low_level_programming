#include "main.h"

/**
 * cap_string - function
 * @str: Pointer
 * Return: poniter return to function.
 */
char *cap_string(char *str)
{
	int a = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			i++;
		}
		a++;
	}
	return (s);
}
