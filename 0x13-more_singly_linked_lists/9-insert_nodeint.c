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
	listint_t *current, *temp = malloc(sizeof(listint_t));
	unsigned int index = 0;

	if (!head || !temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (!idx)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	current = *head;
	while (current)
	{
		if (index == idx - 1)
		{
			temp->next = current->next;
			current->next = temp;
			return (temp);
		}
		index++;
		current = current->next;
	}
	free(temp);
	return (NULL);
}
