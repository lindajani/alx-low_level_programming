#include "main.h"
#include <stdio.h>

/**
 * print_numbers -  checks for checks for a digit (0 through 9)
 * Return: always 0
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
	putchar(c);
	}
	putchar('\n');
}
