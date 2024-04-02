#include "lists.h"

/**
 * list_len - function that returns the number of elements in a list
 * @h: pointer to the head of the list
 * Return: number of element of the list
 */

size_t list_len(const list_t *h)
{
	size_t n_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		n_elements++;
	}
	return (n_elements);
}
