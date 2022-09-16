#include <stdio.h>
#include "main.h"
/**
 *
 *
 */
void print_to_98(int n)
{
  while (n > 0)
{
if (n < 10 && n > 0)
  {
_putchar(n + '0');
_putchar(',');
_putchar(' ');
n++;
  }
 else if (n < 98)
   {
   _putchar((n / 10) + '0');
 _putchar((n % 10) + '0');
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
 n--;
   }
 _putchar(9);
 _putchar(8);
  }
}
