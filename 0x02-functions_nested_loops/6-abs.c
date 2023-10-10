#include "main.h"

/**
 * _abs.c - function that conputes the absolute
 * value of an integer
 *
 * @n: takes integer tupe input for function
 *
 * Retrun: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
