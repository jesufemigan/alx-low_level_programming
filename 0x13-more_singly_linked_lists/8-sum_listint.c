#include "lists.h"

/**
 * sum_listint - sums all the data(n) of a linked list
 * @head: pointer to linked list
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
