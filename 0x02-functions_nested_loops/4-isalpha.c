#include "main.h"
/**
 * main - Entry point
 * int _isalpha(int c) - function that checks for alphabetic character
 *
 * 0c: parameter to be checked
 * Return: 1 if it is a alphabet
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
