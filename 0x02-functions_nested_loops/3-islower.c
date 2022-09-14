#include "main.h"
/**
 * _islower - function checks for lowercase characters
 * Return: (0)
 */
int _islower(int c)
{
int c;
c = 0;
if (c >= 97)
return (1);
else if (c <= 122)
return (1);   
else
return (0);
}
