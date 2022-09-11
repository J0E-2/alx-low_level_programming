#include <stdio.h>
/**
 * main - program prints all the numbers of base 16 in lowercase
 * Return: (0)
 */
int main(void)
{
int c;
int d;
c = 97;
d = 48;
while (d <= 57)
{
putchar(d);
d++;
}
while (c <= 102)
{
putchar(c);
c++;
}
putchar(10);
return (0);
}
