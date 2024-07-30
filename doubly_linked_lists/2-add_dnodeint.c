#include "lists.h"

/**
 * add_dnodeint - add node at the beginning
 * @head: prev of the struc
 * @n: variable with the value
 * Return: return the list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (n == '\0')
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (new->n == '\0')
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;

	return (new);
}
