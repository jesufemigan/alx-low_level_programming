#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: linked list
 * @n: number to add
 *
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	(*head)->prev = new;
	new->n = n;
	new->next = (*head);
	new->prev = NULL;

	*head = new;
	return (new);
}
