#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - dog
 * @name: nombre
 * @age: edad
 * @owner: dueño
 *
 * Description: caracteristicas de perro
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
