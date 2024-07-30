#include "lists.h"

/**
 * get_dnodeint_at_index - function with a long long name
 * @head: header of list
 * @index: variable with the node at print
 * Return: return the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (count != index)
	{
		head = head->next;
		count++;
	}

	return (head);
}
