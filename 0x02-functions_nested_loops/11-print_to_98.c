#include "main.h"

/**
 * print_to_98 - print the 9 times table
 * @n: integer value
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	}
	printf("98\n");
}
