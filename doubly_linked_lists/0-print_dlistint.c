#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a double list
 * @h: pointer to head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t list_size = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		list_size++;
	}

	return (list_size);
}
