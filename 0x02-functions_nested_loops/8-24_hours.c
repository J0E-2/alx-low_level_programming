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
a = 00;
while (a < 24)
{
b = 00;
while (b < 60)
_putchar(a + '0');
_putchar(':');
_putchar(b + '0');
b++;
a++;
}
}
