#include "main.h"

/**
 *main - prints the 9 times table, starting with 0
 *Return: always 0
 */
void times_table(void)

int main(void);
{
	int n, i;

	printf("Enter and integer: ");
	scanf("%d", &n);
	for (i = 1; i <= 10; ++i)
	{
		printf("%d * %d = %d \n", n, i, n * i);
	}
	return (0);
}
