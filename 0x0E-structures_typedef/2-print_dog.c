#include <stdio.h>
#include "dog.h"
/**
 * print_dog - imprimir dog
 * @d: estructura
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((d->name))
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", "(nil)");
		printf("Age: %f\n", d->age);
		if ((d->owner))
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %s\n", "(nil)");
	}
}
