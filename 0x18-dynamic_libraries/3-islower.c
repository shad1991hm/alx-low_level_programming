#include "main.h"

/**
 * _islower - check lower
 * @c: The case to be checked
 * Return: 1 or 0;
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
