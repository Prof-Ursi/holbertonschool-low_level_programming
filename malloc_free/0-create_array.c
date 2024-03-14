#include "main.h"

/**
 * create_array - function that creates an array of chars
 *
 * @size: size of the array
 * @c: character used to fill the array
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; ++i)
	{
		array[i] = c;
	}

	array[i] = '\0';

	return (array);
}
