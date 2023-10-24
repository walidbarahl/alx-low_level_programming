#include "main.h"

/**
 * *_memset - is a file memroy and have constant byte.
 * @s: pointer for putting constant
 * @b: constant
 * @n: the maximum byte
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int it;

	for (it = 0; n > 0; it++, n--)
	{
		s[it] = b;
	}

	return (s);
}
