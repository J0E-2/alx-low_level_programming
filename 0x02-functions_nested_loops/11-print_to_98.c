#include <stdio.h>
#include "main.h"
/**
 *
 *
 */
void print_to_98(int n)
{
while (n > 0 && n < 99)
{
if (n < 10 && n > 0)
  {
_putchar(n + '0');
_putchar(',');
_putchar(' ');
n++;
  }
 else
   {
   _putchar((n / 10) + '0');
 _putchar((n % 10) + '0');
 _putchar(',');
 _putchar(' ');
 n++;
   }
  }
}
