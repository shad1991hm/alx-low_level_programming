#include "main.h"

/**
 * print_last_digit - print the last digit
 * @pld: digits to calculate
 * Return: last digit;
 */
int print_last_digit(int pld)
{
	pld = abs(pld);
	int ld = pld % 10;

	_putchar(ld + '0');
	return (ld);
}
