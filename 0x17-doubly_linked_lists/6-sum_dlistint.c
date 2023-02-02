#include "lists.h"


/**
 * sum_dlistint - returns the sum of all data of a linked list.
 * @head: head of the list.
 * Return: the sum of all data of the list, 0 if empty list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
