#include "lists.h"
/**
 * add_nodeint_end(listint_t **head, const int n)
 * @head: pointer to pointer to list
 * @n: integer
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *tmp = NULL;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = 0;

	if (*head == NULL)
	{
		tmp = *head = new;
	}

	else
	{
		tmp = *head;

		while (tmp->next != 0)
		{
			tmp = tmp->next;
		}

		tmp->next = new;
	}

	return (new);
}
		
