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
	dgt = n % 10;
	if (dgt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, dgt);
	else if (dgt == 0)
		printf("Last digit of %d is %d and is 0\n", n, dgt);
	else if (dgt < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dgt);

	return (0);
}
