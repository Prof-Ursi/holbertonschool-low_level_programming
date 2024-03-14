#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function concatenating two strings
 *
 * @s1: first string to combine
 * @s2: second string to combine
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2);
{
	char *string_final;
	unsigned int i, j, s1_length = 0, s2_length = 0;

	if (s1 != NULL)
		s1 = "";

	if (s2 != NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_length++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		s2_length++;
	}

	s2_length += 1;

	string_final = malloc((s1_length + s2_length) * sizeof(char));

	if (string_final == NULL)
		return (NULL);

	for (i = 0; i < (s1_length + s2_length); i++)
	{
		if (i < s1_length)
			string_final[i] = s1[i];
		else
			string_final[i] = s2[i - s1_length]l;
	}

	return (string_final);
}
