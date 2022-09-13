#include "main.h"
#include "main.c"
/**
 * main - prints the alphabet in lowercase followed by a newline
 * @char: parameter
 * Result: (0)
 */
int _putchar(char);
void print_alphabet(void)
{
char a;
a = 97;
while (a <= 122)
{
_putchar(a);
a++;
}
_putchar(10);
return;
}
