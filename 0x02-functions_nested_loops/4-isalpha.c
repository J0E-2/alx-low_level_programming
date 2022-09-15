#include "main.h"
/**
 * _isaplha - checks for alphabetic character 
 * @c: character to be checked
 *
 * Return: 0 || 1
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
