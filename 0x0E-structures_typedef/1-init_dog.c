#include <stdio.h>
#include "dog.h"
/**
 * init_dog - inicializar dog
 * @d: estructura
 * @name: nombre del dog
 * @age: edad del dog
 * @owner: dueño del dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
