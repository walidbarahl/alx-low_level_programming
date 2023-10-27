#include "main.h"

/**
 * _strstr - locate a substring in a string.
 * @haystack: the main string to search within
 * @needle: the substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
		if (haystack[i + j] != needle[j])
		break;
	}
	if (needle[j] == '\0')
		return (haystack + i);
	}

	return (NULL);
}
