#include "main.h"
#define NULL 0
/**
 * _strpbrk - function searches a string for any of a set of bytes
 * @s: string being searched
 * @accept: string whose bytes occurrence in are being searched
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
