#include "main.h"
/**
 * jack_bauer - print every minute starting from 00:00
 * Return: void
 */
void jack_bauer(void)
{
int i;
int j;
int k;
i = 0;
while (i < 24)
{
j = 0;
while (j < 6)
{
k = 0;
while (k < 10)
{
_putchar((i/10) + '0');
_putchar((i%10) + '0');
_putchar(':');
_putchar(j + '0');
_putchar(k + '0');
_putchar('\n');
k++;
}
j++;
}
i++;
}
}
