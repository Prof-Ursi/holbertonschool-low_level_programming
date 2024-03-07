#include "main.h"

/**
 * *leet - funcion that encodes a string
 * into 1337
 * @str: array to pointer
 *
 * Return: str
 */

char *leet(char *str)
{
	int i;
	int j;
	char numbers[5] = {'4', '3', '0', '7', '1'};
	char letters[5] = {'a', 'e', 'o', 't', 'l'};


	for (i = 0; (*(str + i) != '\0') ; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (str);
}
