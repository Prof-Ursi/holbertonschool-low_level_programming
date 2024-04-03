#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a double linked list
 * @head: pointer to Head of the list
 * @n: number to add of node
 *
 * Return: adress of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (new->next != NULL)
		new->next->prev = new;
	*head = new;
	return (*head);
}
