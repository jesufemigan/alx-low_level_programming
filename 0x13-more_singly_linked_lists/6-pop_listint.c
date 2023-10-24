#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to linked list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (!head || !*head)
		return (0);

	current = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = current;
	return (n);
}
