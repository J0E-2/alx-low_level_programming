#include "lists.h"
/**
 * free_dlistint -  function frees a dlistint_t list.
 * @head: head pointer
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
