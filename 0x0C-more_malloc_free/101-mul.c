#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Find the length of a string
 * @s: the string to check
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * print_str - prints a given string (optimized for numbers)
 * @s: the string to print
 * @neg: (in case of number string) indicates the sign of a number
 */
void print_str(char *s, int neg)
{
	if (neg)
		_putchar('-');
	if (*s != '\0')
	{
		_putchar(*s);
		print_str(++s, 0);
	}
}
/**
 * is_valid - checks if the string is a valid number string
 * @s: the string to check
 *
 * Return: 1 if the string is a valid number, 0 otherwise
 */
int is_valid(char *s)
{
	if (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
			is_valid(++s);
		else
			return (0);
	}
	return (1);
}
/**
 * init_arr - Initializes a string with zeros
 * @arr: the string to initialize
 * @len: the length of the string
 */
void init_arr(char *arr, int len)
{
	int i;

	for (i = 0; i < len; i++)
		arr[i] = 0;
	arr[i] = '\0';
}
/**
 * normalize - Adds carry numbers to the corresponding digites
 * @arr: the string containing the number
 * @len: the length of the string
 */
void normalize(char *arr, int len)
{
	int i;

	for (i = len - 1; i > 0; i--)
	{
		arr[i - 1] += arr[i] / 10;
		arr[i] %= 10;
	}
}
/**
 * rem_trailing - Removes trailing zeros from a string number
 * @arr: the string number to operate on
 * @len: the length of the string
 *
 * Return: a newly allocated string containing the modified number
 */
char *rem_trailing(char *arr, int len)
{
	int st = 0, i = 0;
	char *final;

	while (arr[st] == '0' && arr[st + 1] != '\0')
		st++;
	if (arr[st] != '0')
	{
		final = malloc(sizeof(char) * (len - st + 1));
		while (arr[st + i] != '\0')
		{
			final[i] = arr[st + i];
			i++;
		}
		final[i] = '\0';
	}
	else
	{
		final = malloc(sizeof(char) * 2);
		final[0] = '0';
		final[1] = '\0';
	}
	free(arr);
	return (final);
}
/**
 * stringify - modifies the string into viewable ascii letters
 * @arr: the string to operate on
 * @len: the length of the string
 */
void stringify(char *arr, int len)
{
	int i;

	for (i = len - 1; i >= 0; i--)
		arr[i] += '0';
}
/**
 * mul - multiplies two numbers
 * @s1: the first string number to multiply
 * @s2: the second string number to multiply
 * @len1: the length of the first string number
 * @len2: the length of the second string number
 *
 * Return: a newly allocated string containing the product (non-negative)
 */
char *mul(char *s1, char *s2, int len1, int len2)
{
	int i, j, max = len1 + len2;
	char *res = malloc(max + 1);

	init_arr(res, max);
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
			res[i + j + 1] += (s1[i] - '0') * (s2[j] - '0');
		normalize(res, max);
	}
	normalize(res, max);
	stringify(res, max);
	res = rem_trailing(res, max);
	return (res);
}
/**
 * main - Perform checks and execute code
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the passed arguments
 *
 * Return: 0 if the program executes successfully
 *	   98 if something goes wrong in the execution
 */
int main(int argc, char *argv[])
{
	int len1, len2, neg = 0;
	char *res;

	if (argc != 3)
	{
		print_str("Error\n", 0);
		exit(98);
	}
	if (argv[1][0] == '-')
	{
		neg = !neg;
		argv[1]++;
	}
	if (argv[2][0] == '-')
	{
		neg = !neg;
		argv[2]++;
	}
	len1 = _strlen(argv[1]), len2 = _strlen(argv[2]);
	if ((argv[1][0] == '0' && len1 == 1)
		|| (argv[2][0] == '0' && len2 == 1))
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	if (!(is_valid(argv[1]) && is_valid(argv[2]))
		&& len1 > 0 && len2 > 0)
	{
		print_str("Error\n", 0);
		exit(98);
	}
	if (len1 >= len2)
		res = mul(argv[1], argv[2], len1, len2);
	else
		res = mul(argv[2], argv[1], len2, len1);
	print_str(res, neg);
	_putchar('\n');
	return (0);
}
