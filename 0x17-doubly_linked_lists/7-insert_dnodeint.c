#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Head of the double linked list
 * @idx: Index of the list where the new node should be added
 * @n: Value of the new node
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head = *h, *aux = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (; idx > 0 && aux != NULL; idx--)
	{
		head = aux;
		aux = aux->next;
	}
	if (aux == NULL)
		return (NULL);
	new->prev = head;
	new->next = aux;
	head->next = new;
	aux->prev = new;
	return (new);
}
