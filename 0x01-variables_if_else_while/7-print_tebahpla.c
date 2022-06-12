#include <stdio.h>

/**
 * main -> assign a number to the variable n each time it is executed
 * and print the last digit ofthe number stored in the variable n
 * Return: Always 0 (success)
 */

int main(void)
{

char ch;

for (ch = 'z'; ch >= 'a'; ch--)

{

putchar(ch);
}

putchar(10); /* this is an ascii code for the new line*/

return (0);

}
