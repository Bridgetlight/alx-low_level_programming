#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - To perform simple operations
 * @argc: argument count
 * @argv: array of arguments vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, j, result;
	char *op_func;

	/* Check for the correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* Takes values to operate on */
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	/* Get function for operator */
	op_func = argv[2];

	/* Check if operator is invalid */
	if (get_op_func(op_func) == NULL || op_func[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && j == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Call function with num1 and num2 */
	result = get_op_func(op_func)(i, j);

	printf("%d\n", result);
	return (0);
}
