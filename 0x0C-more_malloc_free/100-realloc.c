#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a block of memory using malloc & free
 * @ptr: the pointer the the previously allocated memory to relocate
 * @old_size: the size of allocated space for @ptr in bytes
 * @new_size: the size of the new memory block in bytes
 *
 * Return: new - a void pointer to the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *old = ptr, *new;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		new[i] = old[i];
	free(ptr);
	return ((void *)new);
}
