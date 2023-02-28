#include <stdio.h>
/**
 * main - Entry point
 * To print the first 50 Fibonacci numbers.
 * Return: 0 always success
 */
int main(void)
{
	int x;
	long y, z;

	x = 0;
	y = 1;
	z = 2;
	while (x < 50)
	{
	if (x == 0)
		printf("%ld", y);
	else if (x == 1)
		printf(", %ld", z);
	else
	{
		z += y;
		y = z - y;
		printf(", %ld", z);
	}
	++x;
	}
	printf("\n");
	return (0);
}
