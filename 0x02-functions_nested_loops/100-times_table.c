#include "main.h"
/**
 * print_times_table - print n times table
 * @n: parameter
 */
void print_times_table(int n)
{
	int digit, mult;

	if (n <= 15 && n >= 0)
	for (digit = 0; digit <= n; digit++)
	{
	_putchar('0');
		for (int mult = 1; mult <= n; mult++)
		{
		_putchar(',');
		_putchar(' ');

		int result = digit * mult;

		if (result <= 99)
			_putchar(' ');

		if (result <= 9)
			_putchar(' ');
		if (result >= 100)
		{
		_putchar((result / 100) + '0');
		_putchar(((result / 10) % 10) + '0');
		}
		else if (result <= 99 && result >= 10)
		{
		_putchar((result / 10) + '0');
		}
		_putchar((result % 10) + '0');
		}
		_putchar('\n');

	}

}