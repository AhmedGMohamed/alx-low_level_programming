#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2d array of integers initialized to 0
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: arr - a pointer to 2d array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr, *row;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		row = malloc(sizeof(int) * width);
		if (row == NULL)
		{
			for (j = i; j >=0; j--)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			row[j] = 0;
		arr[i] = row;
	}
	return (arr);
}
