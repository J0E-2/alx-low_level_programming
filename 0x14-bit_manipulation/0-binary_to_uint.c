#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to
 * unsigned int
 * @b: pointer to string of 0s and 1s
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != 0 || b[i] != 1)
			return (0);
		i++;
	}

	while (*b != '\0')
	{
		if (*b == 1)
		{
			sum += 2^i;
		}
		b++;
		i--;
	}

	return (sum);
}
