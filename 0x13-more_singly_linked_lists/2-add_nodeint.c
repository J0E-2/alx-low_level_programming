#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of  a list
 * @head: pointer to pointer to head
 * @n: integer
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head  = new;

	return (new);
}
