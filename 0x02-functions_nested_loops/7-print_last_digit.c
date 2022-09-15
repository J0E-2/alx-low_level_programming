#include "main.h"
/**
 * print_last_digit - prints the last of a number
 * @j: number whose last digit is to be printed
 *
 * Return: last digit of number
 */
int _putchar(char);
int print_last_digit(int j)
{
int i;
i = (j % 10);
if (i > 0 || i == 0)
{
_putchar(i + '0');
return (i);
}
else
{
_putchar(-i + '0');
return (-i);
}
}
