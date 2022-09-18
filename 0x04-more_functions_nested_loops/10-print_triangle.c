#include "main.h"
/**
 * print_triangle - prints a triangle followed by new line
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int i;
int j;
i = 1;
while (i <= size)
{
if (size > 0)
{
j = 1;
while (j <= (size - i))
{
_putchar(' ');
j++;
}
i = 0;
while (i <= (size - j))
{
_putchar('#');
i++;
}
_putchar('\n');
i++;
}
}
if (size <= 0)
_putchar('\n');
}
