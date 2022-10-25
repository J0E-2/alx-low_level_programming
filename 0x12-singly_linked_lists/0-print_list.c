#include <stdio.h>
#include "lists.h"
/**
 * print_list - function prints all the elements of a list_t list
 * @h: pointer to list
 *
 * Return:  number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *node = 0;
	int i = 0;

	node = h;
	while (node != NULL)
	{
		if (node->str != NULL)
		{
			printf("[%d] %s\n", node->len, node->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		node = node->next;
		i++;
	}
}
