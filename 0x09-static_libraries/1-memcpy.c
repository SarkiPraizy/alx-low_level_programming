#include "main.h"

/**
 * _memcpy - this is a function that copies memory area
 * @src: where memory is copied
 * @dest: where the memory is stored
 * @n: the number of bytes
 * Return: the copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
