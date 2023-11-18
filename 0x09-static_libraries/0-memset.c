#include "main.h"

/**
 * _memset -this program fills a block of memory with a specific value
 * @s: the starting address of the memory to be filled
 * @b: the value desired
 * @n: the number of bytes to be changed
 *
 * Return: change the array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
