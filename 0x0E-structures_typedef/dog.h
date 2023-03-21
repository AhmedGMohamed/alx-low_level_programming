#ifndef DOG
#define DOG
/**
 * struct dog - contains the name, age and owner of a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
#endif
