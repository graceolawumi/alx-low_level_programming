#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer
 * _putchar - print each character
 * Return: 0
 */

void rev_string(char *s)
{
	int x = 0, y, z;
	char a;

	while (s[x] != '\0')
	{
		x++;
	}
	z = x - 1;
	for (y = 0; z >= 0 && y < z; z--, y++)
	{
		a = s[y];
		s[y] = s[z];
		s[z] = a;
	}
}
