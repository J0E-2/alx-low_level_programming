#include "main.h"
/**
 * print_square - prints a square followed by new line
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
int i;
int j;
if (size <= 0)
_putchar('\n');
else
{
i = 0;
while (i < size)
{
j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
_putchar('\n');
}
}
