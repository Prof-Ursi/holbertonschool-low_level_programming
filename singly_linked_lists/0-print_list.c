#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to the head of the list
 * Return: size of the list
 */

size_t print_list(const list_t *h)
{
	size_t list_size = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		list_size++;
	}
	return (list_size);
}
