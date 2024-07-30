#include "lists.h"

/**
 * get_dnodeint_at_index - function with a long long name
 * @head: header of list
 * @index: variable with the node at print
 * Return: return the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int idx)
{
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	while (count != idx)
	{
		if (h->next == NULL && count < idx)
			return (NULL);

		h = h->next;
		count++;
	}

	return (h);
}

/**
 * insert_dnodeint_at_index - function for ad node
 * @h: pointer on list
 * @idx: index for place node
 * @n: contain value of struct n part
 * Return: return value new
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *oth;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	oth = get_dnodeint_at_index(*h, idx);
	if ((*h)->prev == NULL)
	{
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
	}

	if ((*h)->next == NULL)
	{
		new->prev = *h;
		new->next = NULL;
		(*h)->next = new;
	}

	if ((*h)->next != NULL && (*h)->prev != NULL)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = (*h)->prev;
		new->prev = *h;
		(*h)->next = new;
	}
	return (new);
}
