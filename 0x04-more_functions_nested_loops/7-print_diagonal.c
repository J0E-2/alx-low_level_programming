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
if (n <= 0)
_putchar('\n');
else
{
i = 0;
while (i < n)
{
j = 0;
while (j <= i)
{
_putchar(' ');
j++;
}
_putchar(92);
_putchar('\n');
i++;
}
}
_putchar('\n');
}
