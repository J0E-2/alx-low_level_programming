#include "main.h"
/**
 * _islower - function checks for lowercase characters
 * @c: the character to be checked
 * Return: on success 1 // 0
 */
int _islower(int c)
{
int a;
a = 0;
if((a >= 97) && (a <= 122))
return (1);
else
return (0);
}
