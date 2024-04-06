#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 *
 * @n: the number to retrieve the bit from
 * @index: the index of the bit to retrieve inside n, starting from the right
 * at index = 0
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
	/*BIT WITCHCRAFT :
	First we right shift the number with index value,
	setting the rightmost bit of the number as the one we want to retrieve,
	then we compare this rightmost bit to 1 with bitwise AND
	to set every bit on the left as 0, thus returning only
	1 if the index value is 1 and 0 otherwise.*/

}
