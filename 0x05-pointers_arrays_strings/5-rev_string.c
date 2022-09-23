#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 */

void rev_string(char *s)
{
	int i;
	int j;
	char b[1000];

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	j = 0;
	while (*(s + j) != 0)
	{
		b[j] = *(s+j);
		j++;
	}
	j = 0;
	while (i >= 0)
	{
		s[j] = b[i - 1];
		i++;
		j--;
	}
	}
