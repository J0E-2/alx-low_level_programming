#include "main.h"
/**
 *
 *
 *
 */
void jack_bauer(void)
{
int i;
int j;
i = 0;
while (i < 24)
{
j = 0;
while (j < 60)
{
_putchar(i + '0');
_putchar(':');
_putchar(j + '0');
_putchar('\n');
j++;
}
i++;
}
}
