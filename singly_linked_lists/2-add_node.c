#include "lists.h"

/**
 * add_node - function add node in head
 * @head: head list
 * @str: old string
 * Return: return list value
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new;
	int lenght;

	if (str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (lenght = 0; str[lenght] != '\0'; lenght++)
	{
	}
	new->len = lenght;
	new->next = *head;
	*head = new;

	return (new);
}
