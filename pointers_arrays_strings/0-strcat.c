#include "main.h"

/**
 * *_strcat - funcion that concatenates two strings
 * by appending src to dest, so src keeps the null byte '\0'
 * @dest : destination variable to pointer
 * @src : source variable to pointer
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
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


	for (i = 0; i <= src_size ; i++)
	{
		*dest += *(src + i);
		dest++;
	}

	dest = dest - dest_size - src_size - 1;

	return (dest);
}
