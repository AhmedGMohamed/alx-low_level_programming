#include <stdio.h>
/**
 * main - print all single digit numbers from 0 to 9 formatted
 *
 * Return: 0 if the code executes successfully
 */
int main(void)
{
	int n = 0x2F, nl = 0x0A;

	while (n++ < 0x39)
	{
		putchar(n);
		if (n != 0x39)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(nl);
	return (0);
}
