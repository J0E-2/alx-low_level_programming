#include <stdio.h>
#include "main.h"

/**
 * main - program prints all arguments it receives
 * @argc: argument count
 * @argv: an array of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
