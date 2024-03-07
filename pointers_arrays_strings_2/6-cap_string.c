#include "main.h"

/**
 * *cap_string - funcion that capitalizes all words of a string
 * @str: array to pointer
 * Return: str
 */

char *cap_string(char *str)
{
	int i;
	int str_size = 0;
	int j;
	int k;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.',
				'!', '?', '"', '(', ')', '{', '}'};

	while (*(str + str_size) != '\0')
	{
		str_size++;
	}
	for (i = 0; i < str_size; i++)
	{
		if (i == 0)
		{
			if ((str[i]) >= 97 && ((str[i]) <= 122))
				str[i] = str[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			k = separators[j] - str[i];

			if (k == 0)
			{
				if ((str[i + 1]) >= 97 && ((str[i + 1]) <= 122))
					str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
