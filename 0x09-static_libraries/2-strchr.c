#include "main.h"

/**
 * _strchr - entry point of the program
 * @c: inputed value
 * @s: input value
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int f = 0;

	for (; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
			return (&s[f]);
	}
	return (0);
}
