#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 */

void rev_string(char *s)
{
	int i;
	char temp;
	int len;
	int mid;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	len = i;
	mid = i / 2;
	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
