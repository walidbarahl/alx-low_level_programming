#include "main.h"

/**
 * times_table - pritns the 9 times table
 *
 * Example Table
 * 0,0,0,0, ..
 * 0,1,2,3, ..
 *
 */

void times_table(void)
{
	int num, nult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (nult = 1; nult <= 9; nult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * nult;

			/**
			 * put space if product is a sigle number
			 * place the first digit if its two numbers
			 */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*get the first digit*/
			_putchar((prod % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}

