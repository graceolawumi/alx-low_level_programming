#include "main.h"
/**
 * _puts - prints a string to the stdout, followed by a new line
 * @str: pointer
 * Return: string
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
