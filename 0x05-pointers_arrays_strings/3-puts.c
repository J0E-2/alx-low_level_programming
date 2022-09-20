#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: the variable pointer to the string being printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
