#include "main.h"
/**
 * _memset - Program that fills a block of memory with a specific value
 * @n: number of bytes to be changed
 * @b: the desired value
 * @s: starting address of the memory to be filled
 *
 * Return: change the array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int d = 0;

	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);
}
