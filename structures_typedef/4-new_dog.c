#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s : variable to pointer
 *
 * Return: i is length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}


/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest : destination variable to pointer
 * @src : source variable to pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int total = 0;
	int i;

	while (*src != '\0')
	{
		total++;
		src++;
	}

	src = src - total;

	for (i = 0; i <= total; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}


/**
 * new_dog - Function that creates a new dog
 *
 * @name: name of dog
 * @age:  age of dog
 * @owner: owner of dog
 *
 * Return: struct pointer to newest dog instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newest_dog;

	newest_dog = malloc(sizeof(struct dog));
	if (newest_dog == NULL)
	{
		return (NULL);
	}

	(*newest_dog).age = age;

	(*newest_dog).name = malloc(_strlen(name) + 1);
	if ((*newest_dog).name == NULL)
	{
		free(newest_dog);
		return (NULL);
	}

	(*newest_dog).owner = malloc(_strlen(owner) + 1);
	if ((*newest_dog).owner == NULL)
	{
		free(newest_dog);
		free((*newest_dog).name);
		return (NULL);
	}

	_strcpy((*newest_dog).name, name);
	_strcpy((*newest_dog).owner, owner);
	return (newest_dog);
}

