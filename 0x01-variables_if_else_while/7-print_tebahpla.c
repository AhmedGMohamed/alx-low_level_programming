#include <stdio.h>
/**
 * main - prints all lowercase alphabet letters in reverse order
 *
 * Return: 0 if the code executes successfully
 */
int main(void)
{
	char ch = 0x7B, newline = 0x0A;

	while (ch++ != 0x61)
	{
		putchar(ch);
	}
	putchar(newline);
	return (0);
}
