#include "lists.h"

/**
 * dlistint_len - returns number of element in a linked link
 * @h: the linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
