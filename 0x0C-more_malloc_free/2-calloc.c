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
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
