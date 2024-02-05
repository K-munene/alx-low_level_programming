#include "main.h"
/**
 * _puts - Prints a string to stdout followed by a new line
 * @s: The string to be printed
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
