#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 *
 * Return: Pointer to struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cutie_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		cutie_dog = malloc(sizeof(dog_t));
		if (cutie_dog == NULL)
			return (NULL);
		cutie_dog->name = malloc(sizeof(char) * name_l);
		if (cutie_dog->name == NULL)
		{
			free(cutie_dog);
			return (NULL);
		}
		cutie_dog->owner = malloc(sizeof(char) * own_l);
		if (cutie_dog->owner == NULL)
		{
			free(cutie_dog->name);
			free(cutie_dog);
			return (NULL);
		}
		cutie_dog->name = _strcpy(cutie_dog->name, name);
		cutie_dog->owner = _strcpy(cutie_dog->owner, owner);
		cutie_dog->age = age;
	}
	return (cutie_dog);
}


/**
 * _strcpy - Copy a string
 * @dest: Pointer to the string array for copying
 * @src: Number of elements to extract
 *
 * Return: Nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
/**
 * _strlen - Determines the length of a string.
 * @s: Set of characters
 *
 * Return: Nothing
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
