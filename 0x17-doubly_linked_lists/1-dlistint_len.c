#include "lists.h"

/**
 * dlistint_len - Returns the length of a linked list
 * @h: A pointer to the head of the list
 *
 * Return: number of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
