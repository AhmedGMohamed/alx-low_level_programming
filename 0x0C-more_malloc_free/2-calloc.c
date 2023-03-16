#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory using malloc
 * @nmemb: the number of elements to allocate memory for
 * @size: the size of the elements' type
 *
 * Return: p - pointer of type void to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i += size)
		p[i] = 0;
	return ((void *)p);
}
