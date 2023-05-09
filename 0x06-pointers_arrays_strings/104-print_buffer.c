#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int x, y, z;

	x = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		y = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (i = 0; i < 10; i++)
		{
			if (x < y)
				printf("%02x", *(b + x + z));
			else
				printf(" ");
			if (z % 2)
			{
				printf(" ");
			}
		}
		for (z = 0; z < y; z++)
		{
			int i = *(b + x + z);

			if (i < 32 || i > 132)
			{
				i = '.';
			}
			printf("%i", i);
		}
		printf("\n");
		x += 10;
	}
}
