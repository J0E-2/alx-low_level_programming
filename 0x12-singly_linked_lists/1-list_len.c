#include <stdio.h>
#include "lists.h"
/**
 * list_len - function returns the number of elements
 * in a linked list
 *@h: pointer to list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *node;
	int i = 0;

	node = h;

	while (node != NULL)
	{
		node = node->next;
		i++;
	}

	return (i);
}
