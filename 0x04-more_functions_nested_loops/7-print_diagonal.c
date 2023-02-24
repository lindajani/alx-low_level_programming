#include "main.h"
#include <stdio.h>

/**
 * print_diagonal -prints diagonal lines n times
 * @n: The number of times to print diagonal
 *
 * Return: empty
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
	putchar(',');
	}
	putchar(92);
	if (x < (n-1))
	putchar('\n');
	}
	putchar('\n');
	}
}
	

