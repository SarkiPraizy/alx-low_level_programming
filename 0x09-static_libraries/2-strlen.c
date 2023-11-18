#include "main.h"

/**
 * _strlen - this function returns thr length of a string
 * @s: the string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
