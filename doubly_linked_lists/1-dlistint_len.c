#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a double linked list
 * @h: pointer to the head of the list
 * Return: number of element of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		n_elements++;
	}

	return (n_elements);
}
