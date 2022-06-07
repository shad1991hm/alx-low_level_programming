#include "main.h"

/**
 * print_last_digit - print the last digit
 * @pld: digits to calculate
 * Return: last digit;
 */
int print_last_digit(int pld)
{
	pld = abs(pld);
	_putchar((pld % 10)) + '0');
	return (pld % 10);
}
