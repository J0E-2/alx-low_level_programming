#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program multiplies two numbers
 * @argc: argument count
 * @argv: an array off strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	for (i = 1; i < 3; i++)
	{
		if (argc < 2)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			mul = mul * atoi(argv[i]);
		}
	}
	printf("%d\n", mul);
	return (0);
}
