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

char *str_concat(char *s1, char *s2)
{
	char *string_final;
	unsigned int i, j, k, s1_length = 0, s2_length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_length++;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		s2_length++;
	}

	s2_length += 1;

	string_final = malloc((s1_length + s2_length) * sizeof(char));

	if (string_final == NULL)
		return (NULL);

	for (k = 0; k < (s1_length + s2_length); k++)
	{
		if (k < s1_length)
			string_final[k] = s1[k];
		if (k >= s1_length)
			string_final[k] = s2[k - s1_length];
	}

	return (string_final);
}
