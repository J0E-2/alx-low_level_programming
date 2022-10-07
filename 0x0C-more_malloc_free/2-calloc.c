#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function allocates memory for an array
 * @nmemb: number of elements
 * @size: size of the elements in bytes
 *
 * Return: pointer to allocated space in memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i, n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}
	n = nmemb * size;

	for (i = 0; i < n; i++)
		ptr[i] = 0;

	return (ptr);
}
