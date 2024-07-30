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

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	new->next = *head;
	*head = new;

	return (new);
}
