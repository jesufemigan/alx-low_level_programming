#include "lists.h"
#include <stddef.h>

/**
 * listint_len - number of elements in a lined list
 *
 * @h: lined list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	int length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
