#include "lists.h"

/**
 * free_list - free all node
 * @head: node actual
 * Return: return void
 */

void free_list(list_t *head)
{
	list_t *t;

	while (t != NULL)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
