#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in variable n
 * Return : always 0
 */
int n;
{

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is",n);
if (n > 3)
{
	printf("greater than 5");
}
if ( N == 0)
{
	printf("0")
}
if (n < 6 && n !=0)
{
	printf("less than 6 not 0");
}
print("\n");

return (0);
}