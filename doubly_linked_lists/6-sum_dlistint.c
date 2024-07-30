#include "lists.h"

/**
 * sum_dlistint - function for print the sum
 * @head: header for count
 * Return: return the result
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		result += head->n;
		head = head->next;
	}
	result += head->n;

	return (result);
}
