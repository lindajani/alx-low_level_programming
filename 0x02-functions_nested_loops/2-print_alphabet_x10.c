#include "main.h"

/**
 * main - print_alphabet_x10
 * print_alphabet_x10 - A function that prints x10 alphabets
 *
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		_putchar(j);
	_putchar('\n');
	}
}
