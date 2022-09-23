#include "main.h"

/**
 * print_rev - prints a string in reverse followed by new line
 * @s: pointer variable to string
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;
	int middle;
	int len;
	char temp;

	i = 0;

	while (s[i] != 0)
		i++;
	len = i;
	middle = len / 2;
	for (i = 0; i <= middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
