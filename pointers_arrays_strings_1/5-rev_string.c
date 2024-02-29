#include "main.h"

/**
 * rev_string - function that prints a string in reverse
 * @s : variable to pointer
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	int k;
	int t;

	while (*(s + i) != '\0')
	{
		i++;
	}

	j = i / 2;

	for (k = 0; k < j; k++)
	{
		t = s[k];
		s[k] = s[i - k - 1];
		s[i - k - 1] = t;
	}
}
