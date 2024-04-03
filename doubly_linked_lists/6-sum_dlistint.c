#include "lists.h"

/**
 * sum_dlistint - function that sum all the data (n) of a list
 *
 * @head: pointer to head node
 *
 * Return: sum of all data (n), or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
