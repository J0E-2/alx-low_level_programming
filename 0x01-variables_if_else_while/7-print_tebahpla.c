#include <stdio.h>
/**
 * main - program prints the lowercase alphabet in reverse
 * Return: (0)
 */
int main (void)
{
int z;
z = 122;
while (z >= 97)
{
putchar(z);
z--;
}
putchar(10);
return (0);
}
