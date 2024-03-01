#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  * 0 if there is no difference
  */

int _strcmp(char *s1, char *s2)
{
	int size_s1 = 0, size_s2 = 0, comparaison_index = 0, response = 0, limit;

	while (s1[size_s1])
	{
		size_s1++;
	}

	while (s2[size_s2])
	{
		size_s2++;
	}

	if (size_s1 <= size_s2)
	{
		limit = size_s1;
	}
	else
	{
		limit = size_s2;
	}

	while (comparaison_index <= limit)
	{
		if (s1[comparaison_index] == s2[comparaison_index])
		{
			comparaison_index++;
			continue;
		}
		else
		{
			response = s1[comparaison_index] - s2[comparaison_index];
			break;
		}

		comparaison_index++;
	}

	return (response);
}
