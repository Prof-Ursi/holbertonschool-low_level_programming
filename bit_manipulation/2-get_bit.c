#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 *
 * @n: the number to retrieve the bit from
 * @index: the index of the bit to retrieve inside n
 *
 * Return: the value of the bit at the given index or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (!n || index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
