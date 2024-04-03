#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 *
 * @head: pointer to the head of the list
 * @str: string to add to the new node
 *
 * Return: pointer to the new head of the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t str_length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (*(str + str_length) != '\0')
		str_length++;
	new->len = str_length;
	new->next = *head;
	*head = new;
	return (*head);
}
