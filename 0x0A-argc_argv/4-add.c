#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - program adds positive numbers
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argc < 2)
				printf("0\n");
			else if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
			sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
