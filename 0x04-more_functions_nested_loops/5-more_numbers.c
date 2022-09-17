#include "main.h"
/**
 * more_numbers - program prints 0 to 14 10times
 * Return: void
 */
void more_numbers(void)
{
int i;
 int j;
 for (j = 1; j <= 10; j++)
   {
 for (i = 0; i <= 14; i++)
   {
   _putchar(i + '0');
   }
   _putchar('\n');
   }
 _putchar('\n');
}
