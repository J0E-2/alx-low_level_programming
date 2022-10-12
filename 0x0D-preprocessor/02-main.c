#include <stdlib.h>
#include <stdio.h>

/**
 * main - program prints the name of the file it was compiled from followed by new line
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
