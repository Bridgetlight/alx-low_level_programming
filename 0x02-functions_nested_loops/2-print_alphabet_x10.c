#include "main.h"

/**
 * print_alphabet_x10 - To print 10 times the alphabet.
 * Return: 0 Success
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char x10abc;

	while (i <= 9)
	{
	for (x10abc = 'a'; x10abc <= 'z'; x10abc++)
		{
	_putchar(x10abc);
		}
	_putchar('\n');
	i++;
	}
}
