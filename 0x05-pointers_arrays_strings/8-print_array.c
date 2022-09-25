#include "main.h"
#include <stdio.h>

/**
 * print_array - function prints n elements of an array
 * @n: number of elements to be printed
 * @a: pointer to string
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d,", a[i]);
			printf(" ");
		}
		else
			printf("%d", *(a + i));
	}
	printf("\n");
}
