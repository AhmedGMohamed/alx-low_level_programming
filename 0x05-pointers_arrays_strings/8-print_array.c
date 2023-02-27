#include "main.h"
#include <stdio.h>
/**
 * print_array - Outputs a number of elements from array to stdout
 * @a: the array of integers to output
 * @n: the number of array elements to output
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
