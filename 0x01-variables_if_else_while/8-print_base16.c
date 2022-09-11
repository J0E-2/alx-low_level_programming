#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
int c;
int d;
c = 97;
d = 0;
while (d <= 9)
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
