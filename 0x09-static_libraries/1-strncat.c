#include "main.h"

/**
 * _strncat - function concatenates two strings.
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes to be used from src
 *  Return: resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + n] = '\0';
	return (dest);
}
