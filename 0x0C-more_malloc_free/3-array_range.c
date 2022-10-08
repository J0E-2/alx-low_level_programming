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
	int j = 0, p = min;

	if (min > max)
		return (0);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (!ptr)
		return (NULL);

	for (j = 0; j <= (max - min); j++, p++)
		ptr[j] = p;

	return (ptr);
}
