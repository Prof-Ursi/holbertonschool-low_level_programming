#include "main.h"

/**
 * *string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 * @str: array to pointer
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int i;
	int str_size = 0;

	while (*(str + str_size) != '\0')
	{
		str_size++;
	}

	for (i = 0; i < str_size; i++)
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] -= 32;
		}
	}
	return (str);
}
