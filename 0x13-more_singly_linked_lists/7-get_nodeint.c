#include "lists.h"

/**
 * get_nodeint_at_index - gets node at index
 * @head: pointer to linked list
 * @index: index to obtain
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		head = head->next;
		n++;
		if (n == index)
			return (head);
	}
	return (NULL);
}
