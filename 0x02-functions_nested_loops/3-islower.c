#include "main.h"

/**
 * _islower - function that checks for lowecasec character
 * @c: character to be checked
 * Return: 1 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
