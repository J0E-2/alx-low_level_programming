#include <stdio.h>
/**
 * main - program prints all possible combinations of single-digit numbers
 * Return: (0)
 */
int main(void)
{
int a;
a = 48;
while (a <= 57)
{
putchar(a);
putchar(32);
while (a <= 56)
putchar(44);
a++;
}
return (0);
}
