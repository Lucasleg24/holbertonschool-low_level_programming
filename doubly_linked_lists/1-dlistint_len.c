#include "lists.h"

/**
 * dlistint_len - list of number
 * @h: pointer on structure
 * Return: return the number of count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
