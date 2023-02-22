#include "main.h"
/**
* main - Entry point
* int _islower(int c) - function that checks for lower case character
*
* Return: always 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
