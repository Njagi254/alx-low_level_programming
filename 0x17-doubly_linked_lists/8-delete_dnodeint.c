#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	i = 0;
	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (i < index && temp != NULL)
		temp = temp->next, i++;
	if (temp == NULL)
		return (-1);
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
