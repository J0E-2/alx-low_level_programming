#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 * Return: (0)
 */
int main(void)
{
int a;
int b;
int c;
a = 97;
b = 102;
c = 114;
while (a < 101)
putchar(a);
a++;
while (b < 113)
putchar(b);
b++;
while (c < 124)
putchar(c);
c++;
return (0);
}