#include "main.h"
/**
 * print_last_digit
 *
 *
 */
int _putchar(char);
int print_last_digit(int j)
{
int i;
i = (j % 10);
 if (i > 0 || i == 0)
_putchar(i + '0');
else
_putchar(-i + '0');
return (i);
}
