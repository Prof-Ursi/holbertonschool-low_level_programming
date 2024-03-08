#include "main.h"

/**
  * _strstr - locates a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return:
  * - a pointer to the beginning
  * of the located substring
  * - NULL ('\0') if the substring is not found
  */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}

	return ('\0');
}
