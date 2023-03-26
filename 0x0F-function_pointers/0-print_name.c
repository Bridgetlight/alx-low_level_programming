#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: The name to be printed
 * @f: The function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);/* Calling the function ptr f with arg (name) */
}
