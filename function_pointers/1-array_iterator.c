#include "function_pointers.h"

/**
 * array_iterator - Function that executes a functions
 * given as a parameter on each element of an array
 *
 * @array: array where action function will operate
 * @size: size of array
 * @action: pointer to the function to use
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0 || size == 0 || action == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
