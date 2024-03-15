#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concatening two strings
 *
 * @s1: First string
 * @s2: Second string to concatenates
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to newly allocated memory
 * containing s1 + n bytes from s2 and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string_final;
	unsigned int i, j, k, l, n1, s1_length = 0, s2_length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1_length++;

	for (j = 0; s2[j] != '\0'; j++)
		s2_length++;

	if (n < s2_length)
	{
		string_final = malloc((s1_length + n + 1) * sizeof(char));
		n1 = n;
	}
	else
	{
		string_final = malloc((s1_length + s2_length + 1) * sizeof(char));
		n1 = s2_length;
	}

	if (string_final == NULL)
		return (NULL);

	for (k = 0; k < s1_length; k++)
		string_final[k] = s1[k];

	for (l = 0; l < n1; l++)
		string_final[s1_length + l] = s2[l];
	string_final[s1_length + l] = '\0';

	return (string_final);
}
