#include <stdarg.h>

/**
 * sum_them_all - function returns the sum of all its parameters
 * @n: fixed integer argument
 * @...: variable arguments
 *
 * Return: sum of all parameters or 0 if n equals 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;

	va_list(ap);

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	while (i < n)
	{
		sum = va_arg(ap, int) + sum;
		i++;
	}

	va_end(ap);
	return (sum);
}
