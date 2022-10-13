#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: pointer to a string
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
