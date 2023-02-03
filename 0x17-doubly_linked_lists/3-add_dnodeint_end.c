#include "lists.h"
/**
 * add_dnodeint_end - function adds a new node at the
 * end of a dlistint_t list.
 * @head: head pointer
 * @n: integer
 *
 * Return: the address of the new element, or
 * NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		newnode->prev = NULL;
		newnode->next = NULL;
		*head = newnode;
		return (newnode);
	}


	while (temp->next != NULL)
		temp = temp->next;

	newnode->n = n;
	newnode->prev = temp;
	newnode->next = NULL;
	temp->next = newnode;

	return (newnode);
}
