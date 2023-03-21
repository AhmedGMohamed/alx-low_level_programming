#include "dog.h"
/**
 * init_dog - initializes a variable dog of type struct
 *
 * @d: pointer to the struct to initiate
 * @name: string containing the name of the dog
 * @age: float number of the age of the dog
 * @owner: string containing the name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
