#include "main.h"

/**
 * print_diagonal - print diagonal lines
 *
 * @n: no of lines to print
 */
void print_diagonal(int n)
{
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		if (n > 1)
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');

	}

	if (n <= 0)
	
}
