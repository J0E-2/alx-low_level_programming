#include "lists.h"
/**
 * insert_dnodeint_at_index - function inserts a new node
 * at a given position.
 * @h: head pointer
 * @idx:  index of the list where the new node should be
 * added. Index starts at 0
 * @n: integer
 *
 * Return: the address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (*h == NULL || newnode == NULL)
		return (NULL);

	tmp = *h;

	while (tmp != NULL)
	{

		if (i == idx)
		{
			break;
		}
		tmp = tmp->next;
		i++;
	}
	newnode->n = n;
	newnode->next = tmp;
	newnode->prev = tmp->prev;
	tmp->prev = newnode;

	tmp = *h;
	i = 0;
	while (tmp != NULL)
	{
		if (i == idx - 1)
			tmp->next = newnode;
		tmp = tmp->next;
		i++;
	}

	return (newnode);
}
