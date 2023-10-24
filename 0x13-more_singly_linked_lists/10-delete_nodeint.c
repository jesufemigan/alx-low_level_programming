#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a lined list
 * @head: pointer to linked list
 * @index: index to delete
 * Return: 1 if successful or -1 if otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;

	unisgned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	while (current)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		i++;
		prev = current;
		current = current->next;
	}
	return (-1);
}
