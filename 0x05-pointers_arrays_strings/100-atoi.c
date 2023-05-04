#include "main.h"
/**
 * _atoi -  convert a string to an integer
 * @s: pointer
 * Return: a int
 */

int _atoi(char *s)
{
	int x = 0;
	unsigned int y = 0;
	int z = 1;
	int a = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			z *= -1;
		}

		while (s[x] >= 48 && s[x] <= 57)
		{
			a = 1;
			y = (y * 10) + (s[x] - '0');
			x++;
		}

		if (a == 1)
		{
			break;
		}

		x++;
	}
	y *= z;
	return (y);
}

