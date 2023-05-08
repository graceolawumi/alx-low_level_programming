#include "main.h"
/**
 * leet - encodes a string into 1337
 * @x: char
 * Return: pointer to x
 */

char *leet(char *x)
{
	int i, j;
	char st1[] = "aAeEoOtTlL";
	char st2[] = "4433007711";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] == st1[j])
			{
				x[i] = st2[j];
			}
		}
	}
	return (x);
}

