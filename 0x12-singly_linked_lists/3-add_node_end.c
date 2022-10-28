#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - function adds a new node at
 * the end of a list
 * @head: pointer to pointer to first node
 * @str: string
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = NULL;
	list_t *tmp = NULL;
	size_t len;

	for (len = 0; str[len] != '\0'; len++)
		;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = 0;

	if (*head == 0)
	{
		tmp = *head = newnode;
	}

	else
	{
		tmp = *head;

		while (tmp->next != 0)
		{
			tmp = tmp->next;
		}

		tmp->next = newnode;
	}

	return (newnode);
}
