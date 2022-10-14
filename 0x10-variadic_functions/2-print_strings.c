#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - function prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 * @...: variable arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s;

	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		s = va_arg(ap, char*);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
