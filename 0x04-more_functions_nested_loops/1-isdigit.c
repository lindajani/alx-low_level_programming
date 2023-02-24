#include "main.h"
#include <stdio.h>

/**
 * __isdigit - checks if parameter is a number between 0 to 9.
 * @c: input number
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		printf("%c: %d\n", c, _isdigit(c)) c = 'a';
		return (1);
	else
		return (0);

}
