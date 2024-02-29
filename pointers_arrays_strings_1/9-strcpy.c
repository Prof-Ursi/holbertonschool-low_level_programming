#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest : destination variable to pointer
 * @src : source variable to pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int total = 0;
	int i;

	while (*src != '\0')
	{
		total++;
		src++;
	}

	src = src - total;

	for (i = 0; i <= total; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
