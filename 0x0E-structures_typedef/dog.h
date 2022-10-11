#ifndef DOG_H
#define DOG_H
#include "dog.h"
/**
 * struct dog - a strct
 * @name: name of dog
 * @age: the age
 * @owner: the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
