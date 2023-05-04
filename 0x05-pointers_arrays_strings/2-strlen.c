#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char pointer
 * Return: x
 */

int _strlen(char *s)
{
	int x = 0;

	for (; *s++;)
		x++;
	return (x);
}
