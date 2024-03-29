#include "main.h"

/**
 * _strncat - this function concatenate two strings
 * @src: value entered
 * @dest: value entered
 * @n: entered value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int y;
	int z;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
	dest[y] = src[z];
	y++;
	z++;
	}
	dest[y] = '\0';
	return (dest);
}
