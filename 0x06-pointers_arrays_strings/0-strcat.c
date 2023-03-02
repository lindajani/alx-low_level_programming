#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: oid
 */

char *_strcat(char *dest, char *src)
{
	int p;
	int q;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	q = 0;
	while (src[q] != '\0')
	{
		dest[p] = src[q];
		p++;
		q++;
	}

	dest[p] = '\0';
	return (dest);
}
