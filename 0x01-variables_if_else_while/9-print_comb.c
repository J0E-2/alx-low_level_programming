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
putchar(44);
putchar(32);
a++;
}
return (0);
}
