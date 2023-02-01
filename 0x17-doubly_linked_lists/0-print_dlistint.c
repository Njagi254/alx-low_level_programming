#include "lists.h"

/**
 * print_dlistint - print all elements of dlistint_t linked list
 * @h: list to print
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
