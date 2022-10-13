#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: an array of integers
 * @size: the size of the array
 * @cmp: pointer to a function to be used to compare values
 *
 * Return: index of the first element for which the
 * cmp function does not return 0 or -1 if no element
 * matches or -1 if size is less than than or equal to 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				j = cmp(array[i]);

				if (j != 0)
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
