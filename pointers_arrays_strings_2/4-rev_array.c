#include "main.h"

/**
 * reverse_array - funcion that reverses the content
 * of an array of integers
 * @a : array to pointer
 * @n : is the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int k[1];

	for (i = 0; i < (n / 2); i++)
	{
		k[0] = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = k[0];
	}
}
