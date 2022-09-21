#include "main.h"

/**
 *
 *
 */

int _stringlen(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 *
 *
 *
 */

void rev_string(char *s)	
{
	int i;

	i = _stringlen(s);
	while (i >= 0)
	{
		_putchar(s[i]);
		--i;
	}
	_putchar('\n');
}
