#include "main.h"
/**
 * _islower - function checks for lowercase characters
 * @c: parameter
 * Return: (0)
 */
int isslower(int c);
int _islower(int c)
{
c = 97;
if (c <= 122)
return (1);
else if (c < 97)
return (0);
else
return (0);
}
