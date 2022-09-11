#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 * Return: (0)
 */
int main(void)
{
int ch;
ch = 97;
while (ch < 123)
{
putchar(ch);
ch++;
if ((ch == 101) | (ch == 113))
putchar(0);
}
return (0);
}
