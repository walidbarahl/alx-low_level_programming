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
	printf("size of a char: %zu byte(s)\n", sizof(char));
	printf("size of an int: %zu byte(s)\n", sizof(int));
	printf("size of a long int: %zu byte(s)\n", sizof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizof(long long int));
	printf("size of a float: %zu byte(s)\n", sizof(float));
	return (0);
}
