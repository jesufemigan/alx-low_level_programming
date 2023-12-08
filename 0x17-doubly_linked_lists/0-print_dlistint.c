#include "lists.h"

/**
 * print_dlistint - prints all elements in a linked list
 *
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count = 0;

	while (current)
	{
		count++;
		printf("%d", current->n);
		current = current->next;
	}
	return (count);
}
