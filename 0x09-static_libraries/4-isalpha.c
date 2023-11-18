#include "main.h"

/**
 * _isalpha - this program checks for alphabetic character
 * @c: this is the character to be checked
 *
 * Return: 1 if c is a letter, else return 0 if it is not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
