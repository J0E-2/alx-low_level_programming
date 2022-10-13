#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function prints a struct dog
 * @d: pointer to structure
 *
 *  Return: void
 */

void print_dog(struct dog *d)
{

	if (d->name == NULL)
	{
		printf("Name: (nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

	else if (d->age == 0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: (nil)");
		printf("Owner: %s\n", d->owner);
	}

	else if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)");
	}
	else if (d == NULL)
		return;

	else
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
