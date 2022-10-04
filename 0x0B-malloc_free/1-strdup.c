#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a newly
 * allocated string which contains a copy of the
 * string given as parameter
 * @str: pointer to string being copied
 *
 * Return: NULL or null pointer
 */

char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	dup = malloc((sizeof(char) * i) + 1);
	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	if (dup == NULL)
		return (NULL);
	return (dup);
}
