#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a double linked list
 *
 * @head: pointer to the head of the list
 * @n: number to add to the new node
 *
 * Return: pointer to the new tail of the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = tail;
		return (new);
	}

	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = new;
	new->prev = tail;

	return (new);
}
