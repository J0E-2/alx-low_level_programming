#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - function creates an array of chars
 * and initializes with a specific character
 * @size: size of the array
 * @c: character to initialize
 *
 * Return: 0 or Null
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size);
	i = 0;
	if (a == NULL || size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
