#include <stdio.h>
/**
 * main - print all single digit numbers from 0 to F hexadecimal
 *
 * Return: 0 if the code executes successfully
 */
int main(void)
{
	char ch = '0', nl = 0x0A;
	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}

	ch = 'a';
	
	while (ch != 'g')
	{
		putchar(ch);
		ch++;
	}
	putchar(nl);
	return (0);
}
