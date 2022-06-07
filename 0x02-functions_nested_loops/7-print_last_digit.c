#include "main.h"

/**
 * print_last_digit - print the last digit
 * @pld: digits to calculate
 * Return: last digit;
 */
int print_last_digit(int pld)
{
	int ld;

	if (pld < 0)
		ld = (-1 * (pld % 10));
	else
		ld = (pld % 10);
	_putchar(ld + '0');
	return (ld);
}
