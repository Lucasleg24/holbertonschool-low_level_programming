#include "lists.h"

/**
 * list_len - return number of element in h
 * @h: list value
 * Return: return value of number h
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
