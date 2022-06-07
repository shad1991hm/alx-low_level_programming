#include "main.h"

/**
 * print_last_digit - print the last digit
 * @pld: digits to calculate
 * Return: last digit;
 */
int print_last_digit(int pld)
{
	int ld;

	pld = abs(pld);
	ld = pld % 10;
	_putchar(ld + '0');
	return (ld);
}
