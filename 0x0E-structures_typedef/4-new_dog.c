#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - find the string's length
 * @s: the string to check
 *
 * Return: len - the string's length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * _strcpy - copies a string pointed by source to the destination
 * @dest: pointer to the destination string start
 * @src: pointer to the source string
 *
 * Return: a pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (dest);
}
/**
 * new_dog - dynamically allocates a dog struct
 * @name: string containing the name of the dog
 * @age: the age of the dog
 * @owner: string containing the name of the owner
 *
 * Return: a pointer to dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len;
	char *new_name, *new_owner;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL || name == NULL || owner == NULL)
		return (NULL);
	len = _strlen(name);
	new_name = malloc(sizeof(char) * len);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	new_dog->age = age;
	len = _strlen(owner);
	new_owner = malloc(sizeof(char) * len);
	if (new_owner == NULL)
	{
		free(new_dog);
		free(new_name);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);
	return (new_dog);
}
