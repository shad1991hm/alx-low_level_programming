#include "main.h"

/**
 * print_sign - check alphabet
 * @n: the number to be checked
 * Return: 1 or 0;
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar('+');
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
