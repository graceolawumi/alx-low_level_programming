#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 */

int main(void)
{
	char x;
	char Y;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	for (Y = 'A'; Y <= 'Z'; Y++)
	       putchar(Y);

	putchar('\n');

	return (0);
}
