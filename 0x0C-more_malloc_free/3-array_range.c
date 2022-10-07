#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly created array or NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, j;

	if (min > max)
		return (NULL);

	while (i >= min && i <= max)
		i++;

	ptr = malloc(sizeof(int) * i);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < i && min <= max; j++, min++)
		ptr[j] = min;

	return (ptr);
}
