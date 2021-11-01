#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - crear nuevo dog
 * @name: nombre
 * @age: edad
 * @owner: dueño
 *
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int x;
	dog_t *new_dog;

	new_dog = malloc(sizeof(*new_dog));

	if (new_dog == NULL || name == NULL || owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(strlen(name) + 1);
	(*new_dog).owner = malloc(strlen(owner) + 1);

	if ((new_dog->name) == NULL || (new_dog->owner) == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	/* new_dog->name = name; */
	for (x = 0; *(name + x); x++)
		new_dog->name[x] = name[x];
	new_dog->name[x] = '\0';

	new_dog->age = age;

	/* new_dog->owner = owner; */
	for (x = 0; *(owner + x); x++)
		new_dog->owner[x] = *(owner + x);
	new_dog->owner[x] = '\0';

	return (new_dog);
}
