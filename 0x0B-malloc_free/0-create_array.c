#include "main.h"
#include <stdlib.h>
/**
 * create_array - dynamically allocates an initialized array of charaters
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: ptr - a pointer to the array
 *	   NULL if size = 0 or malloc fails to allocate the memory
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(c) * size);
	if (ptr == NULL)
	{
		return (ptr);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
