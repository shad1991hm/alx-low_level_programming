#include "main.h"

/**
 * _strlen - string length
 * @s: string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
