#include "main.h"

/**
 * char *_strcpy - this program copies the string pointed to by src
 * @src: copy from
 * @dest: copy to
 *
 * Return: value of the string
 */

char *_strcpy(char *dest, char *src)
{
	int q = 0;
	int r = 0;

	while (*(src + q) != '\0')
	{
		q++;
	}
	for (; r < q ; r++)
	{
		dest[r] = src[r];
	}
	dest[q] = '\0';
	return (dest);
}
