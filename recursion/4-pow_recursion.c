#include "main.h"

/**
  * _pow_recursion - Returns the value of x raised to the power of y
  * @x: the value to multiply
  * @y: the times to multiply the value x
  *
  * Return:
  * - the value x multiplied y times
  * - -1 if y is lower than 0
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
