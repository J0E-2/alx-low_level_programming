#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2
 *
 * Return: pointer to newly allocated space in memory or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*finding string length*/
	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	len2 = j;

	/*allocate memory using malloc*/
	ptr = malloc(sizeof(char) * (i + j) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	if (n >= len2)
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
			ptr[i] = s2[j];
	}

	else
		for (j = 0; j < n; j++, i++)
			ptr[i] = s2[j];
	return (ptr);
}
