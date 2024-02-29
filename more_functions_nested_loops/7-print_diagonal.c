#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: number of character '\' (92 in ASCII Table) in diagonal
 * @i: vertical position of the '\' character
 * @j: horizontal position of the '\' character
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0)
			{
				_putchar(92);
			}
			else
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
					if (j == i - 1)
					{
						_putchar(92);
					}
				}
			}
			_putchar('\n');
		}
	}
}
