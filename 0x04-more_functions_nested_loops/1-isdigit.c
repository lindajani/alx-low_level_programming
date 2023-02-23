#include "main.h"
#include <stdio.h>

/**
 * int _isdigit - function that checks a digit (0 through 9)
 * @c: char to be checked
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
