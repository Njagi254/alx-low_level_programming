#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: node at given index or NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *node;
unsigned int i;

node = head;
for (i = 0; node != NULL; i++)
{
if (i == index)
return (node);
node = node->next;
}
return (NULL);
}
