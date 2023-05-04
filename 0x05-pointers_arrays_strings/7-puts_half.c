#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer
 * Return: 0
 */

void puts_half(char *str)
{
	int x = 0, y;

	while (str[x] != '\0')
		x++;
	if (x + 1 % 2 != '0')
		y = (x - 1) / 2;
	else
		y = (x / 2);
	x++;

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
