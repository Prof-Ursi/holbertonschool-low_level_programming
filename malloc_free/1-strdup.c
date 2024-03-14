#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function pointing a newly allocated
 * space in memory, which contains a copy of the string given
 * as a parameter
 *
 * @str: input string to copy
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *string_copy;
	unsigned int i;
	unsigned int str_length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		str_length++;
	}

	str_length += 1;

	string_copy = malloc(str_length * sizeof(char));


	if (string_copy == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < str_length; i++)
		{
			string_copy[i] = str[i];
		}
	}

	return (string_copy);
}




