#include "main.h"

/**
 * _isalpha - check alphabet
 * @c: the alphabet to be checked
 * Return: 1 or 0;
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
