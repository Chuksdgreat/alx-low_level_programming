#include <stdio.h>

/**
*main -> program that prints all the numbers of base 16 in lowercase,
*followed by a new line
*Return: always
*/

int main(void)
{
	/**
	 *
	 *hexadecimal
	 *0 1 2 3 4 5 6 7 8 9 a b c d e f
	 */
	char ch;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; c++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}

