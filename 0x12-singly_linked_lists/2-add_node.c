#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function adds a new node at the beginning
 * of a list
 * @head: pointer to list
 * @str: pointer to string
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{

	size_t i = 0;
	list_t *new = NULL;
	char *dup;

	while (str[i] != '\0')
	{
		i++;
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	dup = strdup(str);

	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = dup;
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
	
