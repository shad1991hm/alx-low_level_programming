#include "main.h"

/**
 * _puts - print strings
 * @str: the string
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
