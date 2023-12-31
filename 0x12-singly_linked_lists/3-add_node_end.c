#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node at the end of a list
 *
 * @head: head of list
 * @str: string
 *
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *current_node = *head;

	if (str == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (current_node->next)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}

	return (new_node);
}
