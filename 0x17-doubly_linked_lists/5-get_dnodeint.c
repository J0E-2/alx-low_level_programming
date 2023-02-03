#include "lists.h"
/**
 * get_dnodeint_at_index - function returns the nth node
 * of a dlistint_t linked list.
 * @head: head pointer
 * @index: index of the node starting from 0
 *
 * Return: the nth node, or NULL if the node doesn't
 * exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = head;

	while (ptr != NULL)
	{
		if (i == index)
			break;
		ptr = ptr->next;
		i++;
	}

	return (ptr);
}
