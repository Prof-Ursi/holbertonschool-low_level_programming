#include "main.h"

/**
 * more_numbers - prints 10 times the number, from 0 to 14
 * @i: number of iteration from 0 to 9
 * @j: numbers from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int j;
	
	for (i = 0; i < 10; i++)
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
