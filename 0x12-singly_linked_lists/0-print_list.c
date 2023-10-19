#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all element of a list_t
 *
 * @h: linked list
 *
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	while (h)
	{
		printf("[%u] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		count++;
		h = h->next;
	}
	return (count);
}
