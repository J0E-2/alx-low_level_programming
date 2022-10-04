#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: null pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*find the length of s1*/
	i = 0;
	while (s1[i] != '\0')
		i++;

	/*find the length of s2*/
	j = 0;
	while (s2[j] != '\0')
		j++;

	/*call to malloc*/
	cat = malloc((sizeof(char) * (i + j)) + 1);
	if (cat == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		cat[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		cat[i] = s2[j];
		j++;
		i++;
	}
	return (cat);
}
