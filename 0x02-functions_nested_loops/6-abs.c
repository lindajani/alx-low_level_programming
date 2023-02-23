#include "main.h"

/**
 * mmain - Entry point
 * _abs - checks for absolute value
 * @n: parameter to be checked
 *
 * Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
