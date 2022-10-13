#include <stdlib.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function executes a function given
 * as a parameter on each element of an array
 * @array: an array
 * @size: size of the array
 * @action: a function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
