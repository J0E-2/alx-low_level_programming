#include "main.h"

/**
 * _strchr - function locates character in a string
 * @s: memory to be checked
 * @c: character being located
 *
 * Return: pointer to the first occurrence of the
 * character c in s or null if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;
	char *a;

	i = 0;

	for (i = 0; s[i] != c; i++)
		;
	if (s[i] == c)
	{
		a = &s[i];
		return (a);
	}
	else
		return ('\0');
}
