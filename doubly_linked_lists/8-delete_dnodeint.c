#include "lists.h"

/**
 * delete_dnodeint_at_index - free all nodes
 * @head: node value
 * @index: position of index at free
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (head == NULL)
		return (-1);
	if (index == 0 && temp != NULL)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
	}

	for (i = 0; temp != NULL && i < index; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}
	free(temp);
	return (1);
}
