#include "main.h"

/**
 * print_rev - prints a string in reverse followed by new line
 * @s: pointer variable to string
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
       
}
