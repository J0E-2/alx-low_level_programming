#include "main.h"
/**
 * print_numbers - print from 0 to 9 followed by newline
 * Return: void
 */
void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
