#include "main.h"

/**
  * _strspn - search the length of a prefix substring
  * @s: source string
  * @accept: string searched
  *
  * Return: number of bytes in the init segment
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length, i;

	length = 0;
	while (s[length] != '\0')
	{
		i = 0;
		while (accept[i] != '\0' && s[length] != accept[i])
			i++;
		if (accept[i] == '\0')
			return (length);
		length++;
	}
	return (length);
}
