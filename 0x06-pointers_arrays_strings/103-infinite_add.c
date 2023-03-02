#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string with 0 based indexing
 * @s: the string to check
 *
 * Return: n, the length of the string (0 based indexing)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len - 1);
}
/**
 * init_arr - initialize a string with all zeros
 * @s: the string to initialize
 * @n: the length of the string
 *
 * Return: s, the initialized string
 */
char *init_arr(char *s, int n)
{
	int len = 0;

	while (len != n - 1)
	{
		s[len] = '0';
		len++;
	}
	s[len] = '\0';
	return (s);
}
/**
 * calc_carry - calculates the value of carry number resulting from addition
 * @sum: the sum of the addition
 * @r: the array to output the addition to
 * @n: the remaining positions in the array
 *
 * Return: the last digit of the @sum if the array doesnt overflow
 *	-1 if the array overflows
 */
char *calc_carry(int *sum, char *r, int n)
{
	while (*sum >= 10)
	{
		if (n - 1 < 0)
		{
			*sum = -1;
			return (r);
		}
		*sum -= 10;
		r[n - 1] += 1;
	}
	return (r);
}
/**
 * shift_arr - removes trailing zeros and appends null character to the string
 * @s: the string containing numbers to shift (MUST BE NULL TERMINATED)
 * @n: the length of the string
 *
 * Description: Removes any trailing zeros from the string, and shift the rest
 * of the string to the left as needed, as well as appending a
 * null character '\0' after the end of the number included inside the string
 * Return: s - the shifted string
 */
char *shift_arr(char *s, int n)
{
	int i, zeros = 0, cntr = 0;

	while (s[cntr] == '0')
	{
		zeros++, cntr++;
	}
	if (zeros == n - 1)
	{
		s[0] = '0';
		s[1] = '\0';
	}
	else
	{
		for (i = zeros; i < n - 1; i++)
		{
			s[i - zeros] = s[i];
		}
		s[i - zeros] = '\0';
	}
	return (s);
}
/**
 * infinite_add - adds two long numbers using manual digit addition
 * @n1: the first number to add (string type)
 * @n2: the second number to add (string type)
 * @r: the string to put the sum into (string type)
 * @n: the maximum length of the string r
 *
 * Description: Adds the number in string n1 to the number in
 * string n2 and stores it in r if the length of the result is smaller
 * than n
 * Example:
 *	infinite_add("1", "99", char *r[4], 3); --> Returns "100"
 *	infinite_add("1", "99", char *r[4], 2); --> Returns 0
 * Return: 0 if the sum overflows in the buffer r
 *	   r if the sum is calculated successfully
 */
char *infinite_add(char *n1, char *n2, char *r, int n)
{
	int len1, len2, sum, size = n;

	len1 = _strlen(n1), len2 = _strlen(n2), r = init_arr(r, n), n = n - 2;
	if (len1 >= n || len2 >= n)
	{
		return (0);
	}
	while (len1 >= 0 && len2 >= 0 && n >= 0)
	{
		sum = 0;
		sum = (n1[len1] - '0') + (n2[len2] - '0') + (r[n] - '0');
		r = calc_carry(&sum, r, n);
		if (sum == -1)
			return (0);
		r[n] = '0' + sum;
		len1--, len2--, n--;
	}
	while (len1 >= 0 && n >= 0)
	{
		sum = 0;
		sum = (n1[len1] - '0') + (r[n] - '0');
		r = calc_carry(&sum, r, n);
		if (sum == -1)
			return (0);
		r[n] = '0' + sum;
		len1--, n--;
	}
	while (len2 >= 0 && n >= 0)
	{
		sum = 0;
		sum = (n2[len2] - '0') + (r[n] - '0');
		r = calc_carry(&sum, r, n);
		if (sum == -1)
			return (0);
		r[n] = '0' + sum;
		len2--, n--;
	}
	r = shift_arr(r, size);
	return (r);
}
