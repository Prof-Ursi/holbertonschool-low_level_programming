#include "main.h"

/**
 * set_bit - Set the value of a bit to 0 at a given index
 *
 * @n: A pointer to the number whose bit will be set to 0
 * @index: The index of the bit to be set to 0, starting from the right
 * at index = 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!*n || index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = (~(1 << index) & *n);
	/*
	* BIT WITCHCRAFT :
	* First we create a number with only a 1 set at index position
	* and 0 everywhere else just like in 3-set_bit, but then we invert
	* every bit of this number with bitwise NOT, then use bitwise AND with n
	* to set bit values of n everywhere on the negative number except at index
	* where it will remains set as 0.
	*/
	return (1);
}
