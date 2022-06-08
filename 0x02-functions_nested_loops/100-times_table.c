#include "main.h"

/**
 * print_times_table - print the n times table
 * @n: n times table
 */
void print_times_table(int n)
{
	int a, b, product;

	if (n < 15 || n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				product = a * b;
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (b == 0)
				{
					_putchar('0');
				}
				else if (product >= 15)
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if ((product < 15) && (b != 0))
				{
					_putchar(' ');
					_putchar((product % 10) + '0');
				}
			}
		_putchar('\n');
		}
	}
}
