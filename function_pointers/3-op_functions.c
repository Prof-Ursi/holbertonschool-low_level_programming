#include "3-calc.h"

/**
 * op_add - adds one number to another
 *
 * @a: number 1 to sum
 * @b: number 2 to sum
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - substracts one number from another
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: substraction of b from a
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiply two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: a times b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Divide one number by another
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: a divided by b
 * Error if b == 0
 */

int op_div(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
}
return (a / b);
}


/**
 * op_mod - calculate the remainder of an integer division
 * between two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: remainder of a / b
 * Error if b == 0
 */

int op_mod(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
}
return (a % b);
}
