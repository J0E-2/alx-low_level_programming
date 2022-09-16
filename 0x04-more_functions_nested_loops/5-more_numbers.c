#include "main.h"
/**
 * more_numbers - program prints 0 to 14 10times
 * Return: void
 */
void more_numbers(void)
{
int j = 1;
while (j <= 10)
{
int i = 0;
while (i <= 14)
{
if (i < 10)
_putchar(i + '0');
else
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
i++;
}
_putchar('\n');
j++;
}
_putchar('\n');
}
