#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{

	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
}

/**
 * main - debugging example
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 0;
	b = 0;
	c = 0;

	largest = largest_number(a, b, c);
	printf("%d is the largest number\n", n)
	return (0);
}
