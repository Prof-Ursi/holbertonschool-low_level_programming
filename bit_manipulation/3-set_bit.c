#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index
 *
 * @n: A pointer to the number whose bit will be set to 1
 * @index: The index of the bit to be set to 1, starting from the right
 * at index = 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = ((1 << index) | *n);
	/**
	* BIT WITCHCRAFT :
	* First we create a number with only a 1 set at index position
	* and 0 set everywhere else, then we use bitwise OR with n
	* to set every other bit the same as n, except at index
	* where it will always be 0.
	*/
	return (1);
}
