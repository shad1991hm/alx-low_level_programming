#include "main.h"
/**
 * print_rev - reverse string
 * @s: String
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
