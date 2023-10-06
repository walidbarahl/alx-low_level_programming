#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("size of a char: %u byte(s)\n", sizeof(int8_t));
	printf("size of an int: %u byte(s)\n", sizeof(int32_t));
	printf("size of a long int: %u byte(s)\n", sizeof(int64_t));
	printf("size of a long long int: %u byte(s)\n", sizeof(int64_t));
	printf("size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
