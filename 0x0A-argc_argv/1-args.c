#include <stdio.h>
#include "main.h"

/**
 * main - program prints the number of arguments passed to it
 * @argc: argument count
 * @argv: an array of strings/ arguments
 *
 * Return: 0
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	int i;

	i = argc - 1;
	printf("%d\n", i);
	return (0);
}
