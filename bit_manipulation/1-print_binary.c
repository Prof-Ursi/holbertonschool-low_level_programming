#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * - arrays not allowed
 * - malloc not allowed
 * - % and / not allowed
 * => recursion time
 *
 * @n: integer number to be transformed into binary
 */

void print_binary(unsigned long int n)
{

	if (n > 1)
		print_binary(n >> 1); /*Recursion case*/
		/*BIT WITCHCRAFT # 1:
		As long as n > 1, we go inside the recursion and shift the number n by
		1 place to the right until we reach the leftmost 1 in n,
		thus reaching the base case.*/
	_putchar('0' + (n & 1)); /*Base case*/
	/*BIT WITCHCRAFT # 2:
	First we fetch the rightmost bit of the current n 
	by comparing it to 1 with bitwise AND,
	thus setting every bit to its left to zero and fetching either 0 or 1,
	then we set '0' as our ASCII Code reference to feed to _putchar,
	and then add to that the rightmost bit of n to send either '0' or '1' to
	standard output*/
}
