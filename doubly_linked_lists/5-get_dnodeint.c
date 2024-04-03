#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a double linked list
 *
 * @head: pointer to head node
 * @index: index to find
 *
 * Return: pointer to the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}

	return (head);
}
