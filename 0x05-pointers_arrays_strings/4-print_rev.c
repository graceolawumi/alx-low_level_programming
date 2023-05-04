#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer
 */

void print_rev(char *s)
{
	int x, y;

	    y = 0;

	while (s[y] != '\0')
		y++;

	for (x = y - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
