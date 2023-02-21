#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'p' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
