#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: head of list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while (head)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
