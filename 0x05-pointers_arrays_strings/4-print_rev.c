#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int x, y,

	    x = 0;

	while (s[x] != '\0')
		x++;

	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
