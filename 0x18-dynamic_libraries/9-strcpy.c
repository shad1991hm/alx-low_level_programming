#include "main.h"

/**
 * _strcpy - Copies a string pointed
 * @dest: The destination string
 * @src: The source string to copy.
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
