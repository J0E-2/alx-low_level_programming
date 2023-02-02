#include "lists.h"
/**
 * dlistint_len - function returns the number of elements
 * in a linked list
 * @h: head pointer
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i = 0;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
