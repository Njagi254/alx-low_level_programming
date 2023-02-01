#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list.
* @head: head of the list.
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
