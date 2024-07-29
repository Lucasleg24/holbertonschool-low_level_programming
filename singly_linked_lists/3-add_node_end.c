#include "lists.h"

/**
 * add_node_end - add in the end
 * @head: pointer on pointer on the list because is fun
 * @str: string contain char
 * Return: value of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new;
	list_t *end;
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
	new->next = 0;

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (lenght = 0; str[lenght] != '\0'; lenght++)
	{
	}
	new->len = lenght;
	if (*head == NULL)
	{
		*head = new;
	}
	else 
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
	}
	return (new);
}
