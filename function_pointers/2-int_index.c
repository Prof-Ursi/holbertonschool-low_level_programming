#include "function_pointers.h"

/**
 * int_index - function that searches for an integer in an array.
 *
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to the function comparing values
 *
 * Return: the index of the first element for
 * which the cmp function does not return 0,
 * and if no element matches, return -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == 0 || cmp == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
