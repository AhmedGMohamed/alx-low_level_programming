#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees allocated memory for struct dog
 * @d: pointer to struct dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
