#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'c')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
