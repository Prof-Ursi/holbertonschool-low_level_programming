#include "main.h"

/**
 * *_strncpy - function that copies dest_size string
 * @dest : variable to pointer
 * @src : variable to pointer
 * @n : number of characters copied from src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dest_size = 0
	int src_size = 0;

	while (src[src_size])
	{
		src_size++;
	}

	while (dest_size < n && src[dest_size])
	{
		dest[dest_size] = src[dest_size];
		dest_size++;
	}

	while (dest_size < n)
	{
		dest[dest_size] = '\0';
		dest_size++;
	}

	return (dest);
}
