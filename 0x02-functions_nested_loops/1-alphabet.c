#include "main.h"
/**
 * lower_alphabet - prints the lower alphabet
 * Result: (0)
 */
void print_alphabet(void)
{
int a;
a = 97;
while (a <= 122)
{
print_alphabet(a);
a++;
}
_putchar(10);
return;
}
