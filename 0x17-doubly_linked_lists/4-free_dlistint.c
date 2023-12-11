#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: the linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	while (head)
	{
		current = head;
		head = head->next;
		free(current->n);
		free(current->next);
		free(current->prev);
		free(current);
	}
	free(head);
}
