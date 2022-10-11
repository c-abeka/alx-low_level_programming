#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Entry point
 * @d: the dog struct
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->age <= 0)
		printf("Age: (nil)\n");

	if (d->owner == NULL)
		d->name = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
