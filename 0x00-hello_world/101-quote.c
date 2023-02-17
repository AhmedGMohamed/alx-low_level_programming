#include <stdio.h>
/**
 * main - Outputs the required text to stderr without fprintf or fputs
 *
 * Return: 1 if the code runs successfully
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19",
		strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19"),
		1, stderr);
	return (1);
}
