#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number of times thecharacter ' _' should be printed
 *
 * Return: void
 */
void print_line(int n)
{
int i;
i = 1;
while (i <= n)
{
if (n <= 0)
_putchar('\n');
else
_putchar('_');
i++;
}
_putchar('\n');
}
