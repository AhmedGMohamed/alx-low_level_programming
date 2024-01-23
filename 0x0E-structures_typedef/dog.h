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
/**
 * dog_t - typdef for type struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *d);
#endif
