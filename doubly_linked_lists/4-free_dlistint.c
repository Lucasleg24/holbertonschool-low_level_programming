#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: pointer in list
 * Return: return void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head != NULL)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
