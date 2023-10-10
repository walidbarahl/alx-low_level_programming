#include "main.h"

/**
 * _islower - funtion to check if 
 * 		chracter is lowercase
 *
 * @c: checks input of funtion
 *
 * Return: returns 1 if 'c' is lowercase
 * 		ortherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
