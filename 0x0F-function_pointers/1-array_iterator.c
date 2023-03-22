#include "function_pointers.h"
/**
 * array_iterator - applies a function on each element of a given array
 * @array: the array to operator on
 * @size: the size of the array
 * @action: the function to apply
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (action != NULL && array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
