#include "main.h"

/**
 * _memset - fills memory with a constant variable
 * @s: memory to be filled
 * @b: constant byte
 * @n: bytes of memory to be filled
 *
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
