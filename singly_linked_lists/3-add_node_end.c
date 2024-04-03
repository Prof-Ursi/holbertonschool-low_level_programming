#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list
 *
 * @head: pointer to the head of the list
 * @str: string to add to the new node
 *
 * Return: pointer to the new tail of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = *head;
	list_t *new;
	size_t str_length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL || head == NULL)
		free(new);
	while (*(str + str_length) != '\0')
		str_length++;
	new->len = str_length;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
