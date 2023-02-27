#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first value to swap
 * @b: the second value to swap
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
