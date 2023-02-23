#include "main.h"

/**
 * print_alphabet -Entry point
 * A function that prints the alphabet, in lowercase.
 * Return: 0 Success
 */

void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}
