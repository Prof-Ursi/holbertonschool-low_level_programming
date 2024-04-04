#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position in a double linked list,
 * it will be inserted just before h node.
 *
 * @h: pointer to the head of the list
 * @idx: position of the insertion in the list, starts at 0
 * @n: number to add to the new node
 *
 * Return: Pointer to the new_node node
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current = *h;
	unsigned int i;

	if (h == NULL || idx < 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; current != NULL && i < idx; i++)
		current = current->next;
	if (current == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	else if (current != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		current->prev->next = new;
		new->prev = current->prev;
		current->prev = new;
		new->next = current;
		return (new);
	}
	return (NULL);
}
