#include "main.h"
/**
 * print_diagonal - function draws a diagonal line on the terminal
 * @n: number of times \ is printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
int i;
int j;
i = 0;
while (i < n)
{
if (n > 0)
{
j = 1;
while (j <= i)
{
_putchar(' ');
j++;
}
_putchar(92);
_putchar('\n');
i++;
}
else
_putchar ('\n');
}
_putchar('\n');
}
