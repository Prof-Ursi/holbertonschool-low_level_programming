#include "lists.h"

/**
 * free_list - function that frees a list
 *
 * @head: pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *buffer;

	while (head->next != NULL)
	{
		buffer = head->next;
		free(head->str);
		free(head);
		head = buffer;
	}
	free(head->str);
	free(head);
}
