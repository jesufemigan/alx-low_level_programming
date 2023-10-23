#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 *
 * @head: linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
