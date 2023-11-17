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
	int n, dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, dgt);
	else if (last_digit == 0)
		printf("The last digit of %d is %d and is 0\n", n, dgt);
	else if (last_digit < 6)
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, dgt);

	return (0);
}
