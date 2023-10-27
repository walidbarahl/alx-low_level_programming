#include "main.h"

/**
 * _strcpy - copies the the string pointed to by src
 * @desst: char type string
 * @src: char type string
 * Description: copy the string poited to by poiter 'src' to
 * the buffer pointed to by 'dest'
 * Return: Pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
