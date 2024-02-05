#include "main.h"
/**
 * _isupper - to check if the letters are uppercase
 * @c: char to check
 *
 * Return: if it is uppercase to return 1, else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
