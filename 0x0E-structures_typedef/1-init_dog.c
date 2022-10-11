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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
