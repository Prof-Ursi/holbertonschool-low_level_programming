#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * overwriting the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * It will use at most n bytes from src
 * and src does not need to be null-terminated
 * if it contains n or more bytes
 * @dest : variable to pointer
 * @src : variable to pointer
 * @n : use n bytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_size = 0;
	int src_size = 0;

	while (*dest != '\0')
	{
		dest++;
		dest_size++;
	}

	while (*(src + src_size) != '\0')
	{
		src_size++;
	}

	for (i = 0; i < n; i++)
	{
		if (i <= src_size)
		{
			*dest += *(src + i);
			dest++;
		}
		else
		{
			break;
		}
	}
	if (n < src_size)
	{
		dest = dest - dest_size - n;
	}
	else
	{
		dest  = dest - dest_size - src_size - 1;
	}

	return (dest);
}
