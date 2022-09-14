#include "main.h"
/**
 * _islower - function checks for lowercase characters
 * @c: parameter
 * Return: (0)
 */
int _islower(int c)
{
int ch;
c = 97;
ch = ('a');
if (c <= 122)
return (1);
if (ch <= 'z')
return (1);
else
return (0);
}
