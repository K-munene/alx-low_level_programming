#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Locates the first occurrence in the string
 * @s: The string to be searched
 * @accept: The string containing characters to match
 *
 * Return: Pointer to the first occurence of any character in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			return (s);
		}
	s++;
	}

	return (NULL);
}
