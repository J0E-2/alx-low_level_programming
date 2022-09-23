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

	while (s[i] != 0)
	{
		i++;
	}
	if (i == 1)
		_putchar(s[1]);
	else
		{
			while (i >= 0)
		{
			_putchar(s[i]);
		       	--i;
		}
		}
	_putchar('\n');
}
