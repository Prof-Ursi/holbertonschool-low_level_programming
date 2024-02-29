#include "main.h"

/**
 * more_numbers - prints 10 times the number, from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int j;
	int d1;
	int d2;


	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			d1 = j / 10;
			d2 = j % 10;
			if (j > 9)
			{
				_putchar(d1 + 48);
			}
			_putchar(d2 + 48);
		}
		_putchar('\n');
	}
}
