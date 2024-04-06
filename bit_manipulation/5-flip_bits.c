#include "main.h"

/**
 * flip_bits - return the number of bits to flip to get from n to m
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	/*
	* BIT WITCHCRAFT # 1:
	* Using bitwise OR we will get a sequence of bits where each 1
	* shows a difference between n and m. We will then count the
	* number of 1 in this sequence to get the number of bits to flip
	*/

	int diff_counter = 0;

	while (difference != 0)
	{
		diff_counter++;
		difference &= (difference - 1);
		/*
		* BIT WITCHCRAFT # 2:
		* As long as there is still bits with the value 1 in the sequence,
		* we will increment the counter and then remove the rightmost 1 bit
		* in the sequence by using bitwise AND between difference and
		* (difference - 1)
		*/

	}

	return (diff_counter);
}
