#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to linked list
 * @idx: index of the list where new node should be added
 * @n: data to add
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *current;
	unsigned int index;

	temp = malloc(sizeof(listint_t));

	for (current = *head, index = 0; current && index < idx - 1;
			current = current->next, ++index)
		;

	if (current == NULL)
		return (NULL);

	if (!head || !temp)
		return (NULL);

	temp->n = n;
	temp->next = current->next;
	current->next = temp;
	return (temp);
}
