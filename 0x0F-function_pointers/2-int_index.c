#include "function_pointers.h"
/**
 * int_index - find a number using supplied function pointer
 * @array: the array of ints to search
 * @size: the size of the array
 * @cmp: the checker's function pointer
 * Description: finds the first elements which if passed to the supplied
 * 	function does not return 0
 *
 * Return: -1 if no element matches or if size <= 0
 * 	   otherwise, ind - the index of the first element match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
