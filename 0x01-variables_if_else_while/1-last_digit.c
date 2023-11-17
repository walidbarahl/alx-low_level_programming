#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: gives the last digit
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n, int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("The last digit of %d", n, "is %d", last_digit, "and is greater than 5\n");
	else if (last_digit == 0)
		printf("The last digit of %d", n, "is %d", last_digit, "and is 0\n");
	else if (last_digit < 6)
		printf("The last digit of %d", n, "is %d", last_digit, "and is less than 6 and not 0\n");

	return (0);
}
