#include "main.h"
/**
 * main - prints the alphabet in lowercase followed by a newline
 * @char: parameter
 * Result: (0)
 */
int _putchar(char);
void print_alphabet(void);
int print_alphabet_lowercase(void)
{
char a;
a = 97;
while (a <= 122)
{
_putchar(a);
a++;
}
_putchar(10);
return (0);
}
