#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number whose sign is printed
 *
 * Return: 1 || 0 || -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(00);
return (0);
}
else
{
_putchar('-');
return(-1);
}
}
