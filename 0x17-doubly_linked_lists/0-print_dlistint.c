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
	int count = 0;

	while (h)
	{
		count++;
		printf("%d", h->n);
		h = h->next;
	}
	return (count);
}
