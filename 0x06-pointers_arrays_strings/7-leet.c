#include "main.h"

/**
 * char_leet  - encode into 1337 speak
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	int i, j;

	char s1[] = "aAeEoOTTIL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[1] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
return (n);
}
