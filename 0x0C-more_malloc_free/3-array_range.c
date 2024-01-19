#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array containing a range of numbers
 * @min: the starting number
 * @max: the ending (last) number
 *
 * Return: arr - the array of numbers
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (max < min)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;
	return (arr);
}
