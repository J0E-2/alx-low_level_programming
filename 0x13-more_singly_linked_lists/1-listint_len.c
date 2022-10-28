#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *elements;
	size_t len = 0;

	elements = h;

	while (elements != 0)
	{
		len++;
		elements = elements->next;
	}

	return (len);
}
