#include "main.h"
int _strlen(char *s)
{
	int i = 0;
	
	if (s == NULL)
	{
		return 0;
	}

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return i;

}
