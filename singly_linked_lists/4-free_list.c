#include "lists.h"

/**
 * free_list - free all node
 * @head: node actual
 * Return: return void
 */

void free_list(list_t *head)
{
	list_t *t;

	while (head != NULL)
	{
		t = head->next;

		if (head->str != NULL)
		{
			free(head->str);
		}
		free(head);
		head = t;
	}
}
