#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @x: char
 * Return: pointer to x
 */

char *rot13(char *x)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if  (x[i] == a[j])
			{
				x[i] = b[j];
				break;
			}
		}
	}
	return (x);
}
