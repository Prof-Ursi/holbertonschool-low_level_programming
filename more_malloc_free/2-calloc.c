#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocate memory for an array, like calloc does.
  *
  * @nmemb: number of elements allocated
  * @size: size of each element allocated
  *
  * Return: pointer to the allocated array, each element set to 0.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;

	return (array);
}
