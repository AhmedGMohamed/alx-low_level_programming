#include "lists.h"
/**
 * bef_main - prints a text before main function executes
 */
void __attribute__ ((constructor)) bef_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
