#include "main.h"
/**
 * more_numbers - program prints 0 to 14 10times
 * Return: void
 */
void more_numbers(void)
{
int i;
int j = 1;
while (j <= 10) 
{
i = 0;
while (i <= 14)
{
_putchar((i % 100) + '0');
i++;
}
_putchar('\n');
j++;
}
}
