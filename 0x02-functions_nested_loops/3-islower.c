#include "main.h"
/**
 * _islower - function checks for lowercase characters
 * @c: the character to be checked
 * Return: on success 1 // 0
 */
int _islower(int c)
{
c = 0;
while (c <= 122)
{
if(c >= 97)
return (1);
else
return (0);
}
return (0 || 1);
}
