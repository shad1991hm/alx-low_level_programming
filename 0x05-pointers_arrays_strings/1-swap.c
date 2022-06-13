#include "main.h"

/**
 * swap_int - swap two integers
 * @a: First integer
 * @b: Second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
