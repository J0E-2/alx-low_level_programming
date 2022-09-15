#include "main.h"
/**
 *
 *
 *
 */
void jack_bauer(void)
{
int a;
int b;
a = '0';
while (a < 24)
{
b = '0';
while (b < 60)
{
_putchar(a);
_putchar(':');
_putchar(b);
_putchar('\n');
b++;
}
a++;
}
}
