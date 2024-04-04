#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at
 * a given position in a double linked list.
 *
 * @head: pointer to the head of the list
 * @index: position of the deletion in the list, starts at 0
 *
 * Return: 1 if success, -1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0) /*first node => head case*/
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	while (i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL) /*error case*/
		return (-1);
	if (current->prev != NULL)
		current->prev->next = current->next;
	else /*(current->prev ==NULL && index !=0) => error case*/
		return (-1);
	if (current->next != NULL)
		current->next->prev = current->prev;
	else /*(current->next == NULL) => tail case*/
		current->prev->next = NULL;
	free(current);
	return (1);
}
