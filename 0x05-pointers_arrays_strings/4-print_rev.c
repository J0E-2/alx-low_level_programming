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

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		_putchar(*s);
		i--;
		s--;
	}
	_putchar('\n');
}
