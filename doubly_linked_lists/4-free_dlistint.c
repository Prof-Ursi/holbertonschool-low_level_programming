#include "lists.h"

/**
 * free_dlistint - function that frees a double linked list
 *
 * @head: pointer to the head of the double linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *buffer;

	while (head != NULL)
	{
		buffer = head->next;
		free(head);
		head = buffer;
	}
}
