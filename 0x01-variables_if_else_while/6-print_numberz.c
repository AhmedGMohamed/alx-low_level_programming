#include <stdio.h>
/**
 * main - print all single digit numbers from 0 to 10 using putchar
 *
 * Return: 0 if the code executes successfully
 */
int main(void)
{
	int n = 0x2F, nl = 0x0A;

	while (n++ < 0x39)
	{
		putchar(n);
	}
	putchar(nl);
	return (0);
}
