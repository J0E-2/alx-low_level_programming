#include "main.h"
/**
 * _islower - function checks for lowercase characters
 * Return: (0)
 */
int _islower(int c)
{
char ch;
c = 97;
ch = ('a');
if (c <= 122)
return (1);
else if (ch <= 'z')
return (1);
else
return (0);
}
