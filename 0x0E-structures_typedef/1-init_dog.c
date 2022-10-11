#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - dog
 * @d: p
 * @name: n
 * @age: a
 * @owner: o
 * struct dog - a struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
