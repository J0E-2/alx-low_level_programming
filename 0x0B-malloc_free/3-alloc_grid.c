#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - fuction returns a pointer to a
 * 2D array of integers
 * @width: columns
 * @height: rows
 *
 * Return: NULL or pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width == 0 || width < 0)
		return (NULL);
	if (height == 0 || height < 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
