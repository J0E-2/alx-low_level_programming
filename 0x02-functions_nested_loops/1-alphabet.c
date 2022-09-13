#include "main.h"
#include "main.c"
/**
 * main - prints the alphabet in lowercase followed by a newline
 * @char: parameter
 * Result: (0)
 */
int _putchar(char);
void print_alphabet(void);
void lowecase_alphabets(void)
{
char a;
a = 97;
while (a <= 122)
{
_putchar(a);
a++;
}
print_alphabet(void);
_putchar(10);
return;
}
