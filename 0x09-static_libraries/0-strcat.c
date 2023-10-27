#include "main.h"

/**
 * _strcat - fuction that concatenates
 * two strings.
 *
 * @dest: pionter to destination input
 * @src: pointer to soutce input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/*itereate through each src array value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];
	return (dest);
}
