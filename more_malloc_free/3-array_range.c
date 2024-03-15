#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers, containing all values
  * from min to max.
  *
  * @min: minimum value included into the array
  * @max: maximum value included into the array
  *
  * Return: integer value
  */

int *array_range(int min, int max)
{
	int *array;
	unsigned int i;

	if (min > max)
		return (NULL);

	array = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
