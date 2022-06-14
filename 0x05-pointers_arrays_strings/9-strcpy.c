#include "main.h"

/**
 * _strcpy - Copies a string pointed
 * @dest: The destination string
 * @src: The source string to copy.
 * Return: A pointer to the destination string @dest.
 */
char * _strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
