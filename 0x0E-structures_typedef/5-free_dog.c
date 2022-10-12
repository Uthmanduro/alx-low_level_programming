#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free dogs
 * @d: what to free
 */
void free_dog(dog_t *d)
{
	free(d);
}
