#include "main.h"

/**
 * print_last_digit - print the last digit
 * @pld: digits to calculate
 * Return: last digit;
 */
int print_last_digit(int pld)
{
	pld = abs(pld);
	return (pld % 10);
}
