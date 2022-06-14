#include "main.h"
#include <string.h>

/**
 * puts -> puts function
 * @str: str parameter
 */

void puts(char *str)
{
	int len, i;

	len = strlean(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
