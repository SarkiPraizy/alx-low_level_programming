#include "main.h"

/**
 * _atoi - function to convert a string into an integer
 * @s: the string to be used in the program
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int sig = 1, g = 0;
	unsigned int unsig = 0;

	while (!(s[g] <= '9' && s[g] >= '0') && s[g] != '\0')
	{
		if (s[g] == '-')
			sig *= -1;
		g++;
	}
	while (s[g] <= '9' && (s[g] >= '0' && s[g] != '\0'))
	{
		unsig = (unsig * 10) + (s[g] - '0');
		g++;
	}
	unsig *= sig;
	return (unsig);
}
