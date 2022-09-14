#include "main.h"
/**
 * print_alphabet_x10 - prints 10times the lower alphabet
 * Result: (0)
 */
void print_alphabet_x10(void)
{
int b;
char a;
a  = ('a');
b = 0;
while (b <= 10)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
b++;
}
_putchar('\n');
return;
}
