#include <stdio.h>
/**
 * main - prints the alphabet in both lower and upper case
 * Return: (0)
 */
int main(void)
{
int ch;
int CH;
ch = 97;
CH = 65;
while (ch < 123)
{
putchar(ch);
ch++;
}
while (CH < 91)
{
putchar(CH);
CH++;
}
putchar(10);
return (0);
}
