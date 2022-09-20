#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer variable 1
 * @b: pointer variable 2
 *
 * Result: Always 0.
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
