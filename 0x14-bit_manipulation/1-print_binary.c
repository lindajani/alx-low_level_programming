#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: prints number in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int temp;

	for (i = 63; i >= 0; i--)
{
	temp = n >> i;

	if (temp & 1)
{
	putchar('1');
	temp++;
}
	else if (count)
	putchar('0');
}
	if (!count)
	putchar('0');
}
