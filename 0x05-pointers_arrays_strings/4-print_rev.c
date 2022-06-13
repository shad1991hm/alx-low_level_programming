#include "main.h"
/**
 * print_rev - reverse string
 * @s: String
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (*s++)
		len++;
	for (i = len-1; i <= 0; i--)
		_putchar(s[len]);
	_putchar('\n');
}
