#include "lists.h"
/*
 * print_dlistint - prints all elements of a dlistint_t
 * list
 * @h: head pointer
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int i = 0;

	temp = h;
	/*loop through the list*/
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}

	return i;
}
