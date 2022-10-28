#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: pointer to list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *tmp;

	tmp = h;

	while (tmp != 0)
	{
		printf("%d\n", tmp->n);
		nodes++;
		tmp = tmp->next;
	}

	return (nodes);
}
