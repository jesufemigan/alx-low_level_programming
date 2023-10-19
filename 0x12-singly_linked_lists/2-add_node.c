#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: head of linked list
 * @str: str to add
 *
 * Return: linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = (list_t *)malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	new_head->str = strdup(str);
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
