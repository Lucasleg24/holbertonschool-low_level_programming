#include "lists.h"

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
	unsigned int len;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	oth = *h;
	for (len = 0; oth != NULL && len < idx - 1; len++)
	{
		oth = oth->next;
	}
	if (oth == NULL)
	{
		free(new);
		return (NULL);
	}
	if (oth->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new->next = oth->next;
	oth->next->prev = new;
	oth->next = new;
	new->prev = oth;

	return (new);
}
