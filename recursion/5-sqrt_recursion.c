#include "main.h"

/**
 * comparing_root - checks the input number from n to the base
 * @root: root is squared and compared against number
 * @number: number to check
 * Return:
 * - natural square root of number number
 * - -1 if number doesn't have a natural square root
 */

int comparing_root(int number, int root)
{
	if (root * root == number)
		return (number);
	if (root * root > number)
		return (-1);
	return (comparing_root(number, root + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */

int _sqrt_recursion(int n)
{
	return (comparing_root(n, 1));
}
