#include <stdio.h>

#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * Using a comparison function
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: -1 if no element matches If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (!array || !cmp || size <= 0)
	{
		return (-1);

	}

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
		{
			return (i);
		}
	}
	return (-1);
}
