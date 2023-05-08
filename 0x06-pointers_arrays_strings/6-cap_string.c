#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: char
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int l = 0;

	while (s[l])
	{
		while (!(s[l] >= 'a' && s[l] <= 'z'))
			l++;

		if (s[l - 1] == '' ||
				s[l - 1] == '\t' ||
				s[l - 1] == '\n' ||
				s[l - 1] == ',' ||
				s[l - 1] == ';' ||
				s[l - 1] == '.' ||
				s[l - 1] == '!' ||
				s[l - 1] == '?' ||
				s[l - 1] == '"' ||
				s[l - 1] == '(' ||
				s[l - 1] == ')' ||
				s[l - 1] == '{' ||
				s[l - 1] == '}' ||
				l == 0)
			s[l] -= 32;

		l++;
	}

	return (s);
}


