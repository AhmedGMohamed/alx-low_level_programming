#include "main.h"
/**
 * _abs - computes the absolute value of a number
 * @n: the number to compute
 *
 * Return: n, the absolute value
 */

int _abs(int n)

{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
