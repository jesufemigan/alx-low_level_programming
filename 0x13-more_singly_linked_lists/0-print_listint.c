#include "lists.h"
#include <stddef.h>

/**
 * print_num - prints an integer using putchar
 *
 * @n: number to print
 * Return: void
 */

void print_num(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_num(n / 10);
	}
	_putchar((n % 10) + '0');

	while (n != 0)
	{
		n /= 10;
	}
}

/**
 * print_listint - prints all the elements of a listint_t
 *
 * @h: listint
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		print_num(h->n);
		_putchar('\n');
		h = h->next;
		count++;
	}
	return (count);
}
