#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_c - prints a character
 * @c: the character to print
 */
void print_c(char c)
{
	printf("%c", c);
}
/**
 * print_i - prints an integer
 * @i: the integer to print
 */
void print_i(int i)
{
	printf("%d", i);
}
/**
 * print_f - prints a float
 * @f: the float to print
 */
void print_f(float f)
{
	printf("%f", f);
}
/**
 * print_s - prints a string
 * @s: the string to print
 */
void print_s(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - prints arguments depending on the format given
 * @format: the format of each argument
 * @...: the arguments to print
 */
void print_all(const char * const format, ...)
{
	int len = 0, i = 0, prnt = 0, prntd = 0, ent = 0;
	char c;
	va_list args;

	while (format != NULL && format[len] != '\0')
	{
		c = format[len], len++;
		if (c == 'c' || c == 'i' || c == 'f' || c == 's')
			prnt++;
	}
	va_start(args, format);
	while (i < len && prntd < prnt)
	{
		ent = 0;
		switch (format[i])
		{
		case 'c':
			print_c(va_arg(args, int));
			prntd++, ent++;
			break;
		case 'i':
			print_i(va_arg(args, int));
			prntd++, ent++;
			break;
		case 'f':
			print_f(va_arg(args, double));
			prntd++, ent++;
			break;
		case 's':
			print_s(va_arg(args, char *));
			prntd++, ent++;
			break;
		}
		if (ent && prntd != prnt)
			printf(", ");
		i++;
	}
	printf("\n");
}
